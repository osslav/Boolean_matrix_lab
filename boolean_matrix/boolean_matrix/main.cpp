#include "boolean_matrix.h"
//#include <iostream>
#include <ctime>

int main()
{
	try
	{
		
		srand(time(NULL));
		char** matr;
		matr = new char*[16];
		for (int i = 0; i < 16; i++)
		{
			matr[i] = new char[16];
			for (int j = 0; j < 16; j++) matr[i][j] = '1';//'0' + (rand() % 2);
		}
/*

		BoolMatrix test1(matr, 9, 9);
		std::cout << test1 << '\n';
		//test1.outputFull();


		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < 16; j++) matr[i][j] = '0' + (rand() % 2);
		}


		BoolMatrix test2(matr, 9, 9);
		std::cout << test2 << '\n';
		//test2.outputFull();

		BoolMatrix test3(test2 | test1);
		std::cout << test3 << '\n';
		//test2.outputFull();

		//BoolVector d(test.conjunctionAllStr());
		//std::cout << test.conjunctionAllStr();


		int arr[3][3] = { 1, 2, 3 };



		BoolMatrix a;

		std::cin >> a;
		std::cout << a;
*/
		

		BoolMatrix A(0, 2), B(matr, 8, 3);
	
		//std::cout << A << '\n';
		//A.outputFull();
		//B.outputFull();
		std::cout << B.conjunctionAllStr() << '\n';
		std::cout << '\n';
		//B.conjunctionAllStr().outputFull();

		//BoolVector a(0), b(8, true);
		//a &= b;
		//b = b & b;
		//std::cout << b;
		//char arr[2][3] = { "10", "01"};
		//char** arr_ = arr;
		//std::cout << **(arr + 2);

		for (int i = 0; i < 16; i++) delete[]matr[i];
		delete[]matr;
	}
	
	catch (ErrorCodeBoolVector err)
	{
		std::cout << "\nError in BoolVector method.";
		return err;
	}

	catch (ErrorCodeBoolMatrix err)
	{
		std::cout << "\nError in BoolMatrix method.";
		return err;
	}

	return 0;
}

