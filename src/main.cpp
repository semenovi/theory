#include "bigint.h"
#include "math.h"
using namespace Dodecahedron;
int main()
{
	Bigint *floor = new Bigint(0);
	Bigint *ceil = new Bigint(10);
	int counter = 0, tens = 1;
	const int DIGIT = 7, FLOOR_TENS = 4;
	const bool PRINT_INTEGERS = false;
	while (tens <= FLOOR_TENS)
	{
		if (tens < 2)
		{
			*floor = 1;
			*ceil = 10;
		}
		else
		{
			*floor = *ceil;
			*ceil *= 10;
		}
		while (*floor < *ceil)
		{
			for (int digit = 0; digit < floor->digits(); digit++)
			{
				if (floor->operator[](digit) == DIGIT)
				{
					counter++;
					if (PRINT_INTEGERS)
						std::cout << *floor << " ";
					break;
				}
			}
			*floor += 1;
		}
		if (PRINT_INTEGERS)
			std::wcout << "\n";
		std::cout << tens << ") " << (float)counter / pow(10.0,tens) << "\n";
		tens++;
	}
	return 0;
}