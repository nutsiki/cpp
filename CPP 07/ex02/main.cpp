#include "Array.hpp"

int main(void)
{
	std::cout << "\n----initializing with 0 new int array fo size 5----\n" << std::endl;

	Array<int> intArray = Array<int>(5);
	Array<const int> intArray2(5);


	std::cout << "\n----looping throw and trying to access out of bounds----\n" << std::endl;

	for (unsigned int i = 0; i < intArray.size() + 2; i++) {
		try {
			std::cout << intArray[i] << std::endl;
			std::cout << intArray2[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}


	std::cout << "\n----assigning values (0 - 4)----\n" << std::endl;

	for (unsigned int i = 0; i < intArray.size(); i++) {
		try {
			intArray[i] = i;
			std::cout << "intArray[" << i << "] = " << i << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}


	std::cout << "\n----loopping throw the array----\n" << std::endl;

	for (unsigned int i = 0; i < intArray.size(); i++) {
		try {
			std::cout << intArray[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n----changing specific index value----\n" << std::endl;

	std::cout <<  "\nold value:" << std::endl;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	intArray[2] = 42;
	std::cout << "\nnew value (42):" << std::endl;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;


	std::cout <<  "\n----copy test----\n" << std::endl;

	Array<int> intArrayCopy(intArray);
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;
	intArray[2] = 7;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;


	std::cout <<  "\n----testing array too small to copy----\n" << std::endl;

	Array<int> smallArray(2);
	smallArray = intArray;


	std::cout << "\n----empty constructor and accessing test----\n" << std::endl;

	Array<int> t2 = Array<int>();

	try {
		std::cout << t2[0] << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "t2 size: " << t2.size() << std::endl;

	std::cout << "\n----char array test----\n" << std::endl;

	Array<char> charArray(3);

	for (unsigned int i = 0; i < charArray.size(); i++) {
		try {
			charArray[i] = 'a' + i;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}

	for (unsigned int i = 0; i < charArray.size(); i++) {
		try {
			std::cout << charArray[i] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
