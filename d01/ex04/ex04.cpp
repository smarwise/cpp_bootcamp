#include <iostream>
#include <string>

int             main(void)
{
    std::string str;
    std::string *strPtr;
    std::string &strRef = str;

    strPtr = &str;
    str = "HI THIS IS BRAIN";
    std::cout << *strPtr << std::endl;
    std::cout << strRef << std::endl;
    return (0);
}