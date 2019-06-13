#include "data.hpp"
#include <array>

void * serialize( void )
{
    std::string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *concatenated = new char[20];
    std::string numbers = "0123456789";
    char random1[9];
    char random2[9];
    char arr[63] = {'0','1','2','3','4', '5','6','7','8','9', 'A','B','C','D','E','F',
    'G','H','I','J','K', 'L','M','N','O','P', 'Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
    'v','w','x','y','z'};
    int i = 0;
    int n = 0;
    int randIndex;
    srand(time(NULL));
    while (i < 8)
    {
        randIndex = rand() % 10 + 1;
        random1[i] = arr[randIndex];
        concatenated[i] = arr[randIndex];
        i++;
    }
    random1[i] = '\0';
    int         randomint = rand() % 9 + 1;
    concatenated[i] = numbers[randomint];
    n = i + 1;
    i = 0;
    while (i < 8)
    {
        randIndex = rand() % 10 + 1;
        random2[i] = arr[randIndex];
        concatenated[n] = arr[randIndex];
        n++;
        i++;
    }
    random2[i] = '\0';
    concatenated[n] = '\0';
    std::cout << random1 << "::" << randomint << "::" << random2  << std::endl;
    return (reinterpret_cast<void *>(concatenated));

}

Data * deserialize( void * raw )
{
    Data *data = new Data;

    char *str1 = new char[9];
    char *str2 = new char[9];
    char *dat = reinterpret_cast<char *>(raw);
    int     i = 0;
    int     nb =0;

    while (i < 8)
    {
        str1[i] = dat[i]; 
        i++;
    }
    nb = dat[i] - '0';
    str1[i] = '\0';
    int n = 0;
    i++;
    while (n < 8)
    {
        str2[n] = dat[i];
        n++;
        i++;
    }
    str2[n] = '\0';
    data->s1 = str1;
    data->s2 = str2;
    data->n = nb;
    return (data);
}

int     main(void)
{
    void *c = serialize();
    Data *d = deserialize(c);

    std::cout << d->s1 << std::endl;
    std::cout << d->n << std::endl;
    std::cout << d->s2 << std::endl;
}