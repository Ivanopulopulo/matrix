#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class Matrix
{
private:
	int **matrix;
	int Columns;
	int Strings;

public:
	Matrix();
	
	Matrix(int a, int b);
	
	Matrix(const Matrix&Matrix);
	~Matrix();
	
	void print(void) const
	void input(char *path) const;
	Matrix& operator =(const Matrix &Matrix);
	Matrix& operator +(Matrix a);
	Matrix operator *(Matrix a);
	
};
