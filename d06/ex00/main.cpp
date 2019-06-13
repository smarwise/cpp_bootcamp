#include "Converter.hpp"

int     main(int argc, char *argv[])
{
    int print = 0;

    try
    {
        if (argc == 2)
        {
            for (int i = 0; argv[1][i]; i++)
            {
                if (!(isprint(argv[1][i])))
                    print = 1;
            }
            try
            {
                if (print == 0)
                {
                    Converter con = Converter(argv[1]);
                }
                else
                    throw Converter::InvalidInput();
            }
            catch(const Converter::InvalidInput& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
        else
        {
            throw Converter::IncorrectArgs();
        }
    }
    catch(const Converter::IncorrectArgs& e)
    {
        std::cerr << e.what() << std::endl;
    }   
}