#include "../S21Matrix.h"

S21Matrix S21Matrix::CalcComplements() {
  if (this->rows_ != this->cols_) {
    throw std::invalid_argument("Матрица должна быть квадратной.");
  }
  S21Matrix result_matrix(this->rows_, this->cols_);
  if (this->rows_ == 1) {
    result_matrix.matrix_[0][0] = this->matrix_[0][0];
  } else if (this->rows_ == 2) {
    for (int i = 0; i < this->rows_; i++) {
      for (int j = 0; j < this->cols_; j++) {
        if ((i + j) % 2 == 0)
          result_matrix.matrix_[i][j] = this->matrix_[(i + 1) % 2][(j + 1) % 2];
        else
          result_matrix.matrix_[i][j] =
              -(this->matrix_[(i + 1) % 2][(j + 1) % 2]);
      }
    }
  } else if (this->rows_ > 2) {
    this->CalcCompMain(&result_matrix);
  }
  return result_matrix;
}