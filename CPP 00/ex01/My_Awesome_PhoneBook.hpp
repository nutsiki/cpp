#ifndef MY_AWESOME_PHONEBOOK_HPP
#define MY_AWESOME_PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
	public:
		int new_contact(int index)
		{
			contact[index].m_index = index;
			std::cout << "first_name" << std::endl;
			std::getline(std::cin, contact[index].m_first_name);
			std::cout << "last_name" << std::endl;
			std::getline(std::cin, contact[index].m_last_name);
			std::cout << "nickname" << std::endl;
			std::getline(std::cin, contact[index].m_nickname);
			std::cout << "phone_number" << std::endl;
			std::getline(std::cin, contact[index].m_phone_number);
			std::cout << "darkest_secret" << std::endl;
			std::getline(std::cin, contact[index].m_darkest_secret);
			if(!(contact[index].m_first_name.empty() && contact[index].m_last_name.empty() && contact[index].m_nickname.empty() && contact[index].m_phone_number.empty() && contact[index].m_darkest_secret.empty()))
				return (1);
			else
				return (0);
		}
		void print_contact(void)
		{
			int i = -1;
			std::cout << std::setw(10) << "INDEX"<< "|";
			std::cout << std::setw(10) << "FIRSTNAME"<< "|";
			std::cout << std::setw(10) << "LASTNAME" << "|";
			std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
			while (++i < 8 && !(contact[i].m_first_name.empty() && contact[i].m_last_name.empty() && contact[i].m_nickname.empty() && contact[i].m_phone_number.empty() && contact[i].m_darkest_secret.empty()))
			{
				std::cout << std::setw(10) << contact[i].m_index << "|";
				if (contact[i].m_first_name.length() > 10)
					std::cout << contact[i].m_first_name.substr(0, 9) << "."  << "|";
				else
					std::cout << std::setw(10) << contact[i].m_first_name << "|";
				if (contact[i].m_last_name.length() > 10)
					std::cout << contact[i].m_last_name.substr(0, 9) << "." << "|";
				else
					std::cout << std::setw(10) << contact[i].m_last_name << "|";
				if (contact[i].m_nickname.length() > 10)
					std::cout << contact[i].m_nickname.substr(0, 9) << "." << "|";
				else
					std::cout << std::setw(10) << contact[i].m_nickname << "|";
				std::cout << std::endl;
			}
		}
		void print_detail_contact(int index)
		{
			if(!(contact[index].m_first_name.empty() && contact[index].m_last_name.empty() && contact[index].m_nickname.empty() && contact[index].m_phone_number.empty() && contact[index].m_darkest_secret.empty()))
			{
				std::cout << "FIRST NAME :" << contact[index].m_first_name << std::endl;
				std::cout << "LAST NAME :" << contact[index].m_last_name << std::endl;
				std::cout << "NICKNAME :" << contact[index].m_nickname << std::endl;
				std::cout << "PHONE NUMBER :" << contact[index].m_phone_number << std::endl;
				std::cout << "DARKEST SECRET :" << contact[index].m_darkest_secret << std::endl;
			}
			else
				std::cout << "Empty index" << std::endl;
		}
	private:
		contact contact[8];
};

#endif
