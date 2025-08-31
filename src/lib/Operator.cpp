#include "../S21Matrix.h"

S21Matrix S21Matrix::operator+(const S21Matrix& o) {
  S21Matrix result(*this);
  result.SumMatrix(o);
  return result;
}

S21Matrix S21Matrix::operator-(const S21Matrix& o) {
  S21Matrix result(*this);
  result.SubMatrix(o);
  return result;
}

S21Matrix S21Matrix::operator*(const S21Matrix& o) {
  S21Matrix result(*this);
  result.MulMatrix(o);
  return result;
}

S21Matrix S21Matrix::operator*(const double o) {
  S21Matrix result(*this);
  result.MulNumber(o);
  return result;
}

S21Matrix& S21Matrix::operator=(const S21Matrix& o) {
  S21Matrix tmp_matrix(o);
  std::swap(this->rows_, tmp_matrix.rows_);
  std::swap(this->cols_, tmp_matrix.cols_);
  std::swap(this->matrix_, tmp_matrix.matrix_);
  tmp_matrix.~S21Matrix();
  return *this;
}

bool S21Matrix::operator==(const S21Matrix& o) {
  bool result = this->EqMatrix(o);
  return result;
}

S21Matrix& S21Matrix::operator+=(const S21Matrix& o) {
  this->SumMatrix(o);
  return *this;
}

S21Matrix& S21Matrix::operator-=(const S21Matrix& o) {
  this->SubMatrix(o);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const S21Matrix& o) {
  this->MulMatrix(o);
  return *this;
}

S21Matrix& S21Matrix::operator*=(const double o) {
  this->MulNumber(o);
  return *this;
}

double S21Matrix::operator()(int i, int j) {
  double result = this->GetMatrix(i, j);
  return result;
}