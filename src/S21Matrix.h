#ifndef S21MATRIX_H
#define S21MATRIX_H

#include <algorithm>
#include <cmath>
#include <stdexcept>

#define EPSILON 0.000001

class S21Matrix {
 private:
  int rows_, cols_;
  double** matrix_;

 public:
  // Конструкторы
  S21Matrix();                    // Базовый конструктор
  S21Matrix(int rows, int cols);  // Конструктор с вводом размеров
  S21Matrix(const S21Matrix& other);  // Конструктор копирования
  S21Matrix(S21Matrix&& other);  // Конструктор переноса
  ~S21Matrix();                  // Деструктор

  // Основные методы
  bool EqMatrix(const S21Matrix& other);
  void SumMatrix(const S21Matrix& other);
  void SubMatrix(const S21Matrix& other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix& other);
  S21Matrix Transpose();
  S21Matrix CalcComplements();
  double Determinant();
  S21Matrix InverseMatrix();

  // Перегрузка операторов
  S21Matrix operator+(const S21Matrix& o);
  S21Matrix operator-(const S21Matrix& o);
  S21Matrix operator*(const S21Matrix& o);
  S21Matrix operator*(const double o);
  S21Matrix& operator=(const S21Matrix& o);
  bool operator==(const S21Matrix& o);
  S21Matrix& operator+=(const S21Matrix& o);
  S21Matrix& operator-=(const S21Matrix& o);
  S21Matrix& operator*=(const S21Matrix& o);
  S21Matrix& operator*=(const double o);
  double operator()(int i, int j);

  // Accessor и mutator
  void SetRows(int rows);
  int GetRows();
  void SetCols(int cols);
  int GetCols();
  void SetMatrix(int row, int col, double value);
  double GetMatrix(int row, int col);

  // Вспомогательные методы
  S21Matrix CreateMinorMatrix(int i, int j);
  void RecursDeterminant(double* result);
  double GaussDeterminant();
  void CalcCompMain(S21Matrix* result_matrix);
};

#endif  // S21MATRIX_H