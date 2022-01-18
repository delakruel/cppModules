#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data	testData;
	testData.num = 20;
	testData.str = "kekis";
	Data	*testData2;

	std::cout << &testData << " is Data adress" << std::endl;
	std::cout << serialize(&testData) << " is serialized Long" << std::endl;
	std::cout << deserialize(serialize(&testData)) << " is deserialized serialazed Data adress" << std::endl;
	std::cout << testData.num << " " << testData.str << " is 1st Data params" << std::endl;
	std::cout << deserialize(serialize(&testData))->num << " " << deserialize(serialize(&testData))->str << " is deserialized serialazed Data params" << std::endl;
	testData2 = deserialize(serialize(&testData));
	std::cout << testData2 << " is Data2 adress" << std::endl;
	std::cout << testData2->num << " " << testData2->str << " is Data2 params" << std::endl;
}