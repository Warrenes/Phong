#pragma once

class Matrix {
private:
	double** data;
	int row, col;
public:
	Matrix(int row, int col, double* data);
	virtual ~Matrix();
	Matrix Mul1(Matrix MA);
	Matrix Mul2(Matrix MA, Matrix MB);
	Matrix Mul3(double* data1, double* data2);
};

