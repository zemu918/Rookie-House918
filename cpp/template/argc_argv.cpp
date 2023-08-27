#include <iostream>

int main(int argc, char *argv[]) //argument count/argument vector
{
	std::cout << "para num=" << argc << std::endl;
	for (int i = 0; i<argc; i++)
	{
		std::cout << "para No.=" << i << " ";
		std::cout << "para val=" << argv[i] << std::endl;
	}
	std::cout << argv[argc] << std::endl;
	return 0;
}
