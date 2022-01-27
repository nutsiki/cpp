#include "My_Awesome_PhoneBook.hpp"

int main(void)
{
	std::string str;
	int index;
	int end = 1;
	int nb_contact = 0;
	PhoneBook book;

	while (end)
	{
		index = -1;
		std::cout << "Enter ADD to add a contact, "
					 "SEARCH to display existing contacts "
					 "and EXIT to exit the program." << std::endl;
		std::getline(std::cin, str);
		if (!str.compare("ADD"))
		{
			if (nb_contact >= 8)
				std::cout << "Too much contact (>8)" << std::endl;
			else
				nb_contact = nb_contact + book.new_contact(nb_contact);
		}
		else if (!str.compare("SEARCH"))
		{
			if (nb_contact)
			{
				book.print_contact();
				std::cout << "Enter an index for more details" << std::endl;
				while (index < 0)
				{
					std::getline(std::cin, str);
					if (std::isdigit(str[0]) && str.length() == 1)
						index = std::stoi(str);
					if (index >= 0 && index < nb_contact)
						book.print_detail_contact(index);
					else
					{
						std::cout << "Enter a valid index (0 -> 7 (must exist))" << std::endl;
						index = -1;
					}
				}
			}
			else
				std::cout << "Use the command <ADD> before. (Empty book)" << std::endl;
		}
		else if (!str.compare("EXIT"))
			end = 0;
		else
			std::cout << "invalid command." << std::endl;
	}
	return (0);
}