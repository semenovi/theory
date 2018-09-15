#include "../include/bigint.h"
using namespace Dodecahedron;
int main()
{
	Bigint integer("10");
	integer.pow(80);
	std::cout << integer << "\n";
	std::cout << sizeof(integer) << "\n";
	return 0;
}