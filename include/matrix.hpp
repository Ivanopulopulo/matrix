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
	Matrix()
	{

	};

	Matrix(int a, int b)
	{
		Columns = a;
		Strings = b;
		matrix = new int*[a];

		for (int i = 0; i < a; i++)
		{
			matrix[i] = new int[b]{0};
		}
	}
	Matrix(const Matrix&Matrix)
	{
		Columns = Matrix.Columns;
		Strings = Matrix.Strings;
		matrix = new int*[Columns];

		for (int i = 0; i < Columns; i++)
		{
			matrix[i] = new int[Matrix.Strings];
		}
	}
};
