#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
	value++;
}

int main()
{
	char* buffer = new char[8]; //asking for/allocationg 8 bytes of memory, because one char = 1 byte
	memset(buffer, 0, 8); //write to the buffer

	char** ptr = &buffer; //get the address of the pointer

	delete[] buffer; //dealocate the reserved memory
	
	int a = 5;
	int b = 8;

	int* ref = &a;
	*ref = 2;
	ref = &b;

	LOG(a);

	Increment(a);

	LOG(a);

	std::cin.get();
}