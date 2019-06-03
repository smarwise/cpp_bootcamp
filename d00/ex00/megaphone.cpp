#include <iostream> 

int             main(int argc, char *argv[])
{
    char        *str;
    int         n;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; ++i)
    {
        str = argv[i];
        n = 0;
        while (str[n])
        {
            if (str[n] >= 97 and str[n] <= 122)
                str[n] -= 32;
            n++;
        }
        std::cout << str;
        if (i + 1 == argc)
            std::cout << std::endl;
    }
    return (0);
}