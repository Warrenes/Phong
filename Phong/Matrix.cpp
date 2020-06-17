#include "pch.h"
#include "Matrix.h"

Matrix::Matrix(int row, int col, double* data) {
	this->row = row;
	this->col = col;
	this->data = new double *[row];
	for (int i = 0; i < row; i++) {
		this->data[i] = new double[col];
		for (int j = 0; j < col; j++) {
			this->data[i][j] = *(data + i * this->col + j);
		}
	}
}

Matrix::~Matrix() {
	delete[] this->data;
}

Matrix Matrix::Mul1(Matrix MA) {//一个矩阵类与这个运算
	double** temp;
	temp = new double* [row];
	for (int i = 0; i < row; i++)
	{
		temp[i] = new double[col];
	}
	for (int i = 0; i < this->row; i++)
		for (int j = 0; j < this->col; j++)
			temp[i][j] = this->data[i][j];
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			this->data[i][j] = 0;
			for (int k = 0; k < this->col; k++) {
				this->data[i][j] += temp[i][k] * MA.data[k][j];
			}
		}
	}
	return *this;
}
Matrix Matrix::Mul2(Matrix MA, Matrix MB) {//两个已存在得矩阵类做乘法结果,返回对象
	for (int i = 0; i < MA.row; i++) {
		for (int j = 0; j < MB.col; j++) {
			this->data[i][j] = 0;
			for (int k = 0; k < MA.col; k++) {
				this->data[i][j] += MA.data[i][k] * MB.data[k][j];
			}
		}
	}
	return *this;
}

Matrix Matrix::Mul3(double* data1, double* data2) {//外部两个数组乘法复制到data上
	//double *m= new double [1], n;
	//m = new double;
	for (int i = 0; i < this->row; i++) {
		for (int j = 0; j < this->col; j++) {
			this->data[i][j] = 0;
			for (int k = 0; k < this->col; k++) {
				//m = *(data + i * this->row + k);
				this->data[i][j] += *(data2 + k * this->row + j) * *(data2 + k * this->row + j);
			}
		}
	}
	return *this;
}
