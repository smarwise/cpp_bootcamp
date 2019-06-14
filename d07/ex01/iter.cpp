#include <iostream>

template< typename T >
void iter(T *adress, size_t len, void (*fx)(const T & ))
{
    for (size_t i = 0; i < len; i++)
    {
        fx(adress[i]);
    }
}

template< typename T >
void print( T const & t ) { std::cout << t << std::endl; return; }

int main()
{
    int tab[] = { 0, 1, 2, 3, 4, 8, 9 };
    iter( tab, 7, print );
    return 0;
}