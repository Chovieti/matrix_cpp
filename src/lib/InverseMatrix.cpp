#include "../S21Matrix.h"

S21Matrix S21Matrix::InverseMatrix() {
  if (this->Determinant() == 0) {
    throw std::invalid_argument(
        "Определитель матрицы должен быть не равен нулю.");
  }
  S21Matrix result_matrix(this->rows_, this->cols_);
  if (this->rows_ == 1) {
    result_matrix.matrix_[0][0] = this->matrix_[0][0];
  } else {
    S21Matrix tmp_result = this->CalcComplements();
    S21Matrix transp_result = tmp_result.Transpose();
    for (int i = 0; i < this->rows_; i++) {
      for (int j = 0; j < this->cols_; j++) {
        result_matrix.matrix_[i][j] =
            transp_result.matrix_[i][j] / this->Determinant();
      }
    }
  }
  return result_matrix;
}