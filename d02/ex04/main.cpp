#include "Fixed.class.hpp"
#include "InputReader.class.hpp"


int                main(int argc, char *argv[])
{
    std::string  *args = new std::string[100];
    std::string  open = "(";

    if (argc == 1)
    {
        std::cout << "No input found" << std::endl;
    }
    else
    {
        int brackets = 0;
        InputReader input(argv[1]);
        args = input.get_args(args);
        int i = 0;
        while (args[i] != "\0")
        {
            if (args[i] == open)
                brackets++;
            i++;
        }
        std::cout << brackets << i << std::endl;
        if (brackets == 0)
        {
            if (i == 3)
            {
                if (args[2] == "/")
                {
                    Fixed result = (Fixed(stoi(args[1])) /  Fixed(stoi(args[3])));
                    std::cout << result;
                }
                if (args[2] == "*")
                {
                    Fixed result = (Fixed(stoi(args[1])) *  Fixed(stoi(args[3])));
                    std::cout << result;
                }
                if (args[2] == "+")
                {
                    Fixed result = (Fixed(stoi(args[1])) +  Fixed(stoi(args[3])));
                    std::cout << result;
                }
                if (args[2] == "-")
                {
                    Fixed result = (Fixed(stoi(args[1])) - Fixed(stoi(args[3])));
                    std::cout << result;
                }
            }
        }
    }
    return (0);
}