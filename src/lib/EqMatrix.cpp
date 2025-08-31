#include "../S21Matrix.h"

bool S21Matrix::EqMatrix(const S21Matrix& other) {
  if (this->rows_ != other.rows_ || this->cols_ != other.cols_) return false;

  for (int i = 0; i < other.rows_; i++) {
    for (int j = 0; j < other.cols_; j++) {
      if (!(fabs(this->matrix_[i][j] - other.matrix_[i][j]) < EPSILON))
        return false;
    }
  }
  return true;
}