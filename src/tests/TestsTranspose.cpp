#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, Transpose1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 0, 1.0);

  matrix2 = matrix1.Transpose();
  EXPECT_NEAR(matrix2.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, Transpose2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  result.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 1, 3.0);
  result.SetMatrix(1, 0, -2.0);
  result.SetMatrix(1, 1, 4.0);

  matrix2 = matrix1.Transpose();
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, Transpose3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);
  S21Matrix result(2, 3);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  result.SetMatrix(0, 0, 13.4);
  result.SetMatrix(0, 1, 46.02);
  result.SetMatrix(0, 2, 12.97);
  result.SetMatrix(1, 0, 2.18);
  result.SetMatrix(1, 1, 7.9);
  result.SetMatrix(1, 2, -41.7);

  matrix2 = matrix1.Transpose();
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, Transpose4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);

  matrix1.SetMatrix(0, 0, -58.4531);
  matrix1.SetMatrix(0, 1, -24.775);
  matrix1.SetMatrix(0, 2, -59.3403);
  matrix1.SetMatrix(1, 0, 63.67794);
  matrix1.SetMatrix(1, 1, 8.974778);
  matrix1.SetMatrix(1, 2, -67.5502);
  matrix1.SetMatrix(2, 0, 15.47442);
  matrix1.SetMatrix(2, 1, 5.08746);
  matrix1.SetMatrix(2, 2, -92.8);

  result.SetMatrix(0, 0, -58.4531);
  result.SetMatrix(0, 1, 63.67794);
  result.SetMatrix(0, 2, 15.47442);
  result.SetMatrix(1, 0, -24.775);
  result.SetMatrix(1, 1, 8.974778);
  result.SetMatrix(1, 2, 5.08746);
  result.SetMatrix(2, 0, -59.3403);
  result.SetMatrix(2, 1, -67.5502);
  result.SetMatrix(2, 2, -92.8);

  matrix2 = matrix1.Transpose();
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, Transpose5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  result.SetMatrix(0, 0, 0.0);
  result.SetMatrix(0, 1, 0.0);
  result.SetMatrix(1, 0, 3.15);
  result.SetMatrix(1, 1, 0.0);

  matrix2 = matrix1.Transpose();
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, Transpose6) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(3, 2);
  S21Matrix result(3, 2);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      result.SetMatrix(j, i, i + j);
    }
  }

  matrix2 = matrix1.Transpose();
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}