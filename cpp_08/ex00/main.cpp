

#include "easyfind.hpp"

int main()
{
    // with VECTOR
    std::vector<int> tab;
    int ret;

    tab.push_back(8);
    tab.push_back(1);
    tab.push_back(6);
    tab.push_back(3);

    try
    {
        ret = easyfind(tab, 6);
        std::cout << "VECTOR check ret : " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "VECTOR EXCEPTION : "<< e.what() << '\n';
    }

    // with DEQUE
    std::deque<int> tab2;

    tab2.push_back(8);
    tab2.push_back(1);
    tab2.push_back(6);
    tab2.push_back(3);

    try
    {
        ret = easyfind(tab2, -1);
        std::cout << "DEQUE check ret : " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "DEQUE EXCEPTION : " << e.what() << '\n';
    }

    // with LIST
    std::list<int> tab3;

    tab3.push_back(8);
    tab3.push_back(1);
    tab3.push_back(6);
    tab3.push_back(3);

    try
    {
        ret = easyfind(tab3, 1);
        std::cout << "LIST check ret : " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "LIST EXCEPTION : " << e.what() << '\n';
    }
    
}