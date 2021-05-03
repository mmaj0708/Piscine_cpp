
#include "span.hpp"

span::span(unsigned int N) : _size(N)
{
    return;
}

span::span(span const &src)
{
    *this = src;
}

span::~span(void)
{
    return;
}

span	&span::operator=(span const &src)
{
    _size = src.getSize();
    _tab = src.getTab();
    return (*this);
}

std::vector<int>    span::getTab() const
{
    return (_tab);
}
    
unsigned int    span::getSize() const
{
    return (_size);
}

void span::addNumber(int nb)
{
    if (_tab.size() + 1 > _size)
        throw spaceFullException();
    _tab.push_back(nb);
}

int  span::shortestSpan(void)
{
    std::vector<int> spans;
    std::vector<int>::iterator it;

    if (_tab.size() == 1 || _tab.size() == 0)
        throw NoSpanException();

    std::sort(_tab.begin(), _tab.end());

    for (it = _tab.begin(); it != _tab.end() - 1; it++)
    {
        spans.push_back(abs(*it - *(it + 1)));
    }

    return (*std::min_element(spans.begin(), spans.end() ));
}

int  span::longestSpan(void)
{
    if (_tab.size() == 1 || _tab.size() == 0)
        throw NoSpanException();
    return (*std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end() ));
}

const char* span::spaceFullException::what() const throw()
{
    return ("Exception : space full");
}

const char* span::NoSpanException::what() const throw()
{
    return ("Exception : No span to find");
}