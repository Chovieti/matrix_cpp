#include "../S21Matrix.h"

void S21Matrix::MulMatrix(const S21Matrix& other) {
  if (this->cols_ != other.rows_) {
    throw std::invalid_argument(
        "Количество столбцов первой матрицы должно быть равно количеству строк "
        "второй матрицы.");
  }
  S21Matrix tmp(this->rows_, other.cols_);
  for (int i = 0; i < this->rows_; i++) {
    for (int j = 0; j < other.cols_; j++) {
      for (int k = 0; k < this->cols_; k++) {
        tmp.matrix_[i][j] += (this->matrix_[i][k] * other.matrix_[k][j]);
      }
    }
  }
  std::swap(this->rows_, tmp.rows_);
  std::swap(this->cols_, tmp.cols_);
  std::swap(this->matrix_, tmp.matrix_);
}