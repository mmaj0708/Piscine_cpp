
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <deque>

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

	template<typename InputIterator>
	void			add(InputIterator start, InputIterator end) {
		if ((end - start) + this->_tab.size() > this->_size)
		 throw spaceFullException();
	     this->_tab.insert(this->_tab.end(), start, end);
	}
};

#endif