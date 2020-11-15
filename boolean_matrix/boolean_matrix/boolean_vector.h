//#pragma once

#ifndef boolean_vector
#define boolean_vector



#include <iostream>
using namespace std;

int const DEFAULT_COUNT = 8;


enum ErrorCode
{
	errorCountLessZero = 1,
	errorStringEmpty,
	errorSymbolString,

	errorIndexOutVector,
	errorRangeIndexOutVector,
};



// Вектор 1110110001 хранится в памяти как:  00000011 10110001 
class BoolVector
{
	unsigned char* vector_;
	int count_;        //длина вектора
	int memory_;       //количество выделенных байт

public:
	BoolVector(int count = DEFAULT_COUNT);
	BoolVector(int cout, unsigned char* string, int countString);
	BoolVector(const char* stringVector);
	BoolVector(const BoolVector& copy);
	~BoolVector() { delete vector_; };

	void outputFull();

	friend ostream& operator << (ostream& f, BoolVector& vector);
	friend istream& operator >> (istream& f, BoolVector& vector);

	void invertVector();
	void invertInd(int index);

	void setZero();
	void setOne();
	void setZeroInd(int index, int count = 1);
	void setOneInd(int index, int count = 1);

	int searchWeight();

	BoolVector operator &(BoolVector term);
	void operator &=(BoolVector term);

	BoolVector operator |(BoolVector term);
	void operator |=(BoolVector term);

	BoolVector operator ^(BoolVector term);
	void operator ^=(BoolVector term);

	BoolVector& operator =(const BoolVector& copy);

	bool operator [](int index);

	BoolVector operator <<(int count);

	BoolVector operator >>(int count);

	void operator <<=(int count);

	void operator >>=(int count);
};


#endif
