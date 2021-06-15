
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class span
{
    private:

        std::vector<int> _tab;
        unsigned int     _size;
        span(void);
    
    public:

        span(unsigned int N);
        span(span const &src);
        ~span(void);
        span	&operator=(span const &src);

        std::vector<int>    getTab() const;
        unsigned int        getSize() const;

        void addNumber(int nb);
        int  shortestSpan(void);
        int  longestSpan(void);

		// 	std::deque<int> content;
		// void			addNumber(int newNumber);
		// int				shortestSpan(void) const;
		// int				longestSpan(void) const;
		// unsigned int	max_size(void) const;

		// template<typename InputIterator>
		// void			add(InputIterator start, InputIterator end) {
		// 	if ((end - start) + this->content.size() > this->_n)
		// 		throw std::logic_error(span::ExcepSpanFull);
		// 	this->content.insert(this->content.end(), start, end);
		// }

    class spaceFullException : public std::exception
	{
		public :
		virtual const char* what() const throw();
	};
    
    class NoSpanException : public std::exception
	{
		public :
		virtual const char* what() const throw();
	};
};

#endif