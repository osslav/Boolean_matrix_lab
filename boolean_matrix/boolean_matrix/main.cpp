#include "boolean_vector.h"
#include <iostream>

int main()
{
	try
	{
		BoolVector test("00101100");
		std::cout << test;
	}
	
	catch (ErrorCode err)
	{
		return err;
	}

	return 0;
}

