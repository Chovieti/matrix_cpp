#include "../S21Matrix.h"

S21Matrix S21Matrix::Transpose() {
  S21Matrix transpose_matrix(this->cols_, this->rows_);
  for (int i = 0; i < this->rows_; i++) {
    for (int j = 0; j < this->cols_; j++) {
      transpose_matrix.matrix_[j][i] = this->matrix_[i][j];
    }
  }
  return transpose_matrix;
}