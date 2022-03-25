//
// Created by Mohamed Akoudad on 21/03/2022.
//

#include <cstdint>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *data = new Data();
	Data *deserialize_data;
	uintptr_t serialized_data;

	std::cout << "----- Original data: -----" << std::endl;
	data->c = 'a';
	data->f = 3.4f;
	data->nb = 34;
	std::cout << "char : " << data->c << ", float : "<< data->f << ", int : " <<data->nb << std::endl;

	std::cout << "--- After serialization: ---" << std::endl;
	serialized_data = serialize(data);
	std::cout << serialized_data << std::endl;

	std::cout << "-- After deserialization: --" << std::endl;
	deserialize_data = deserialize(serialized_data);
	std::cout << "char : " << data->c << ", float : "<< data->f << ", int : " <<data->nb << std::endl;

	delete data;
}