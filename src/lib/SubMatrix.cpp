#include "../S21Matrix.h"

void S21Matrix::SubMatrix(const S21Matrix& other) {
  if (this->rows_ != other.rows_ || this->cols_ != other.cols_) {
    throw std::invalid_argument(
        "Матрицы должны иметь одинаковые размерности для вычитания.");
  }
  for (int i = 0; i < other.rows_; i++) {
    for (int j = 0; j < other.cols_; j++) {
      this->matrix_[i][j] -= other.matrix_[i][j];
    }
  }
}