#include "../S21Matrix.h"

void S21Matrix::SetRows(int rows) {
  if (rows <= 0) {
    throw std::invalid_argument(
        "Количество строк не может быть нулем или отрицательным числом.");
  }
  S21Matrix tmp_matrix(rows, this->cols_);
  for (int i = 0; i < rows && i < this->rows_; i++) {
    for (int j = 0; j < this->cols_; j++) {
      tmp_matrix.matrix_[i][j] = this->matrix_[i][j];
    }
  }
  std::swap(this->rows_, tmp_matrix.rows_);
  std::swap(this->cols_, tmp_matrix.cols_);
  std::swap(this->matrix_, tmp_matrix.matrix_);
}

int S21Matrix::GetRows() { return this->rows_; }

void S21Matrix::SetCols(int cols) {
  if (cols <= 0) {
    throw std::invalid_argument(
        "Количество столбцов не может быть нулем или отрицательным числом.");
  }
  S21Matrix tmp_matrix(this->rows_, cols);
  for (int i = 0; i < this->rows_; i++) {
    for (int j = 0; j < cols && j < this->cols_; j++) {
      tmp_matrix.matrix_[i][j] = this->matrix_[i][j];
    }
  }
  std::swap(this->rows_, tmp_matrix.rows_);
  std::swap(this->cols_, tmp_matrix.cols_);
  std::swap(this->matrix_, tmp_matrix.matrix_);
}

int S21Matrix::GetCols() { return this->cols_; }

void S21Matrix::SetMatrix(int row, int col, double value) {
  if (row >= this->rows_ || row < 0 || col >= this->cols_ || col < 0) {
    throw std::invalid_argument("Укажите индексы в пределах матрицы.");
  }
  this->matrix_[row][col] = value;
}

double S21Matrix::GetMatrix(int row, int col) {
  if (row >= this->rows_ || row < 0 || col >= this->cols_ || col < 0) {
    throw std::invalid_argument("Укажите индексы в пределах матрицы.");
  }
  return this->matrix_[row][col];
}