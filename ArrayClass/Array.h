#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


class Array
{
public:
	Array(int size = MAX_SIZE);
	void end();
	void insertNum(double num, int place);
	double getNum(int place);
	double getMin();
	double getMax();
	double getAverage();
	void display();

private:
	static int MAX_SIZE;
	double* numArray = new double[MAX_SIZE];
	static const double errNum;



};


