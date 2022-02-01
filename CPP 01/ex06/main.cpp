#include "Karen.hpp"

int getFilter(std::string str)
{
    std::string tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (++i < 4)
        if (tab_level[i] == str)
            break;
    return (i);
}


int main(int argc, char **argv)
{
    Karen karen;

    if (argc != 2)
    {
        std::cout << "Need one argument" << std::endl;
        return (1);
    }
    switch (getFilter(argv[1]))
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("ERROR");
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);
}