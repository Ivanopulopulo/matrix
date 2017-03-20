#include "matrix.hpp"

	int Col() const
	{
		return Columns;
	}

	int Str() const
	{
		return Strings;
	}
	int set(int x, int y, int z) const
	{
		return matrix[x][y] = z;
	}

	int get(int x, int y) const
	{
		return matrix[x][y];
	}
	void print(void) const
	{
		for (int i = 0; i < Columns; i++){
			for (int j = 0; j < Strings; j++){
				cout << " " << get(i, j) << " | ";
			}
			cout << endl;
		}
	}

	void input(char *path) const
	{
		ifstream file;
		file.open(path);


		for (int i = 0; i < Columns; i++)
		{
			for (int j = 0; j < Strings; j++)
			{
				char *temp = new char[5];
				file.getline(temp, 5);
				set(i, j, atoi(temp));
			}
		}
	}

	

	Matrix :: Matrix& operator =(const Matrix &Matrix)
	{
		if (this!= &Matrix)
		{
			for (int i = 0; i<Strings; i++)
				delete[]matrix[i];
			delete[]matrix;
			Columns = Matrix.Columns;
			Strings = Matrix.Strings;
			matrix = new int*[Columns];

			for (int i = 0; i < Columns; i++)
			{
				matrix[i] = new int[Matrix.Strings];
			}
			matrix[Columns][Strings] = Matrix.matrix[Columns][Strings];
		}
		return *this;
	}

	Matrix :: Matrix& operator +(Matrix a)
	{
		for (int i = 0; i < Columns; i++)
		{
			for (int j = 0; j < Strings; j++)
			{
				a.set(i, j, a.get(i, j) + get(i, j));
			}
		}
		return a;
	}
	Matrix :: Matrix operator *(Matrix a)
	{
		for (int i = 0; i < Columns; i++)
		{
			for (int j = 0; j < Strings; j++)
			{
				a.set(i, j, a.get(i, j) * get(i, j));
			}
		}
		return a;
	}
	Matrix:: ~Matrix()
	{
		for (int i = 0; i<Strings; i++)
			delete[]matrix[i];
		delete[]matrix;
	}
