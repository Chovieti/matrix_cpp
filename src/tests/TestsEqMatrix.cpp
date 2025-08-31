#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, EqMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  EXPECT_TRUE(matrix1.EqMatrix(matrix2));
  EXPECT_TRUE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix2) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 2.0);
  EXPECT_FALSE(matrix1.EqMatrix(matrix2));
  EXPECT_FALSE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  EXPECT_TRUE(matrix1.EqMatrix(matrix2));
  EXPECT_TRUE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix4) {
  S21Matrix matrix1;
  S21Matrix matrix2;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
    }
  }
  EXPECT_TRUE(matrix1.EqMatrix(matrix2));
  EXPECT_TRUE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix5) {
  S21Matrix matrix1;
  S21Matrix matrix2;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i - j);
    }
  }
  EXPECT_FALSE(matrix1.EqMatrix(matrix2));
  EXPECT_FALSE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix6) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 1, 2.0);
  matrix2.SetMatrix(1, 0, 3.0);
  matrix2.SetMatrix(1, 1, 4.0);

  EXPECT_TRUE(matrix1.EqMatrix(matrix2));
  EXPECT_TRUE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix7) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(3, 2);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }

  EXPECT_FALSE(matrix1.EqMatrix(matrix2));
  EXPECT_FALSE(matrix2.EqMatrix(matrix1));
}

TEST(S21MatrixTest, EqMatrix8) {
  S21Matrix matrix1(2, 3);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }

  EXPECT_TRUE(matrix1.EqMatrix(matrix1));
}