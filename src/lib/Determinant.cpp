#include "../S21Matrix.h"

double S21Matrix::Determinant() {
  if (this->rows_ != this->cols_) {
    throw std::invalid_argument("Матрица должна быть квадратной.");
  }
  double result = 0.0;
  if (this->rows_ == 1) {
    return this->matrix_[0][0];
  } else if (this->rows_ == 2) {
    return (this->matrix_[0][0] * this->matrix_[1][1] -
            this->matrix_[0][1] * this->matrix_[1][0]);
  } else if (this->rows_ > 2 && this->rows_ < 5) {
    this->RecursDeterminant(&result);
    return result;
  } else if (this->rows_ >= 5) {
    return this->GaussDeterminant();
  }
  return result;
}