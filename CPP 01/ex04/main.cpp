#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string s1 = "";
    std::string s2 = "";
    std::string s3 = "";
    std::string buffer = "";
    std::string tmp = "";
    int pos = 0;
    std::string replace;
    std::fstream file;

    if (argc != 4)
    {
        std::cout << "Need only 1 file and 2 string" << std::endl;
        return (1);
    }
    replace = argv[1];
    replace = replace + ".replace";
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "one string is empty" << std::endl;
        return (1);
    }
    file.open(argv[1], std::fstream::in);
    if (file.is_open())
    {
        while (std::getline(file, buffer))
        {
            while ((pos = buffer.find(s1)) != -1)
            {
                tmp = buffer.substr(0, pos);
                buffer = tmp + s2 + buffer.substr(pos + s1.length(), buffer.length());
                s3 = s3 + tmp + s2;
                buffer = buffer.substr(pos + s2.length(), buffer.length());
            }
            s3 = s3 + buffer + "\n";
        }
        file.close();
    }
    else
    {
        std::cout << "cant open the file" << std::endl;
        return (1);
    }
    file.open(replace, std::fstream::out | std::fstream::app);
    if (file.is_open())
    {
        file << s3;
        file.close();
    }
    else
    {
        std::cout << "cant open the file" << std::endl;
        return (1);
    }
    return (0);
}