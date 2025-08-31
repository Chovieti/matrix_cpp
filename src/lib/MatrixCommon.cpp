#include "../S21Matrix.h"

S21Matrix S21Matrix::CreateMinorMatrix(int old_i, int old_j) {
  S21Matrix minor_matrix(this->rows_ - 1, this->cols_ - 1);
  for (int i = 0, new_i = 0; i < this->rows_; i++) {
    if (i == old_i) continue;
    for (int j = 0, new_j = 0; j < this->cols_; j++) {
      if (j == old_j) continue;
      minor_matrix.matrix_[new_i][new_j] = this->matrix_[i][j];
      new_j++;
    }
    new_i++;
  }
  return minor_matrix;
}

void S21Matrix::RecursDeterminant(double* result) {
  double tmp_result = 0.0;
  for (int k = 0; k < this->rows_; k++) {
    S21Matrix tmp_matrix = this->CreateMinorMatrix(k, 0);
    tmp_result = tmp_matrix.Determinant();
    if (k % 2 == 0)
      *result += this->matrix_[k][0] * tmp_result;
    else
      *result -= this->matrix_[k][0] * tmp_result;
  }
}

double S21Matrix::GaussDeterminant() {
  double tmp_result = 1.0;
  S21Matrix tmp_matrix(*this);
  for (int k = 0; k < this->rows_ - 1; k++) {
    for (int i = k; i < this->rows_; i++) {
      double tmp_mul = tmp_matrix.matrix_[i][k];
      if (tmp_mul != 0) {
        for (int j = k; j < this->cols_; j++) {
          tmp_matrix.matrix_[i][j] /= tmp_mul;
        }
        tmp_result *= tmp_mul;
      } else {
        for (int j = 0; j < this->cols_; j++)
          tmp_matrix.matrix_[i][j] +=
              tmp_matrix.matrix_[(i + 1) % tmp_matrix.rows_][j];
        i--;
      }
    }
    for (int i = k + 1; i < this->rows_; i++) {
      for (int j = 0; j < this->cols_; j++) {
        tmp_matrix.matrix_[i][j] -= tmp_matrix.matrix_[k][j];
      }
    }
  }
  return (tmp_result *
          tmp_matrix.matrix_[tmp_matrix.rows_ - 1][tmp_matrix.cols_ - 1]);
}

void S21Matrix::CalcCompMain(S21Matrix* result_matrix) {
  for (int i = 0; i < this->rows_; i++) {
    for (int j = 0; j < this->cols_; j++) {
      S21Matrix tmp_matrix = this->CreateMinorMatrix(i, j);
      double determinant = tmp_matrix.Determinant();
      if ((i + j) % 2 == 0)
        result_matrix->matrix_[i][j] = determinant;
      else
        result_matrix->matrix_[i][j] = -determinant;
    }
  }
}