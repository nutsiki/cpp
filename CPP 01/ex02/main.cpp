#include <iostream>

int main(void)
{
    std::string str0 = "HI TffHIS IS BRAIN";
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "address of str" << &str << std::endl;
    std::cout << "address of str by using stringPTR :" << stringPTR << std::endl;
    std::cout << "address of str by using stringREF :" << &stringREF << std::endl;
    std::cout << "str by using stringPTR :" << *stringPTR << std::endl;
    std::cout << "str by using stringREF :" << stringREF << std::endl;

    return (0);
}