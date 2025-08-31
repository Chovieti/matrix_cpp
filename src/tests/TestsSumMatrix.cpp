#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, SumMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 0, 2.0);

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, SumMatrix2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, 7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  result.SetMatrix(0, 0, 6.0);
  result.SetMatrix(0, 1, 8.0);
  result.SetMatrix(1, 0, 10.0);
  result.SetMatrix(1, 1, 12.0);

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SumMatrix3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 13.45);
  matrix1.SetMatrix(0, 1, 2.187);
  matrix1.SetMatrix(1, 0, 46.012);
  matrix1.SetMatrix(1, 1, 7.908);

  matrix2.SetMatrix(0, 0, 5.045);
  matrix2.SetMatrix(0, 1, 67.6);
  matrix2.SetMatrix(1, 0, 1023.45);
  matrix2.SetMatrix(1, 1, 8.97);

  result.SetMatrix(0, 0, 18.495);
  result.SetMatrix(0, 1, 69.787);
  result.SetMatrix(1, 0, 1069.462);
  result.SetMatrix(1, 1, 16.878);

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SumMatrix4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);

  matrix1.SetMatrix(0, 0, -58.453132);
  matrix1.SetMatrix(0, 1, -24.775042);
  matrix1.SetMatrix(0, 2, -59.340386);
  matrix1.SetMatrix(1, 0, 63.677941);
  matrix1.SetMatrix(1, 1, 8.974778);
  matrix1.SetMatrix(1, 2, -67.5502);
  matrix1.SetMatrix(2, 0, 15.47442);
  matrix1.SetMatrix(2, 1, 5.08746);
  matrix1.SetMatrix(2, 2, -92.8);

  matrix2.SetMatrix(0, 0, 41.7869);
  matrix2.SetMatrix(0, 1, 76.0431);
  matrix2.SetMatrix(0, 2, 48.385);
  matrix2.SetMatrix(1, 0, -18.9432);
  matrix2.SetMatrix(1, 1, 80.382);
  matrix2.SetMatrix(1, 2, -69.615);
  matrix2.SetMatrix(2, 0, 46.012);
  matrix2.SetMatrix(2, 1, -67.8471);
  matrix2.SetMatrix(2, 2, -36.205);

  result.SetMatrix(0, 0, -16.666232);
  result.SetMatrix(0, 1, 51.268058);
  result.SetMatrix(0, 2, -10.955386);
  result.SetMatrix(1, 0, 44.734741);
  result.SetMatrix(1, 1, 89.356778);
  result.SetMatrix(1, 2, -137.1652);
  result.SetMatrix(2, 0, 61.48642);
  result.SetMatrix(2, 1, -62.75964);
  result.SetMatrix(2, 2, -129.005);

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SumMatrix5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  result.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 1, 2.5);
  result.SetMatrix(1, 0, 4.8);
  result.SetMatrix(1, 1, 9.4);

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SumMatrix6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
      result.SetMatrix(i, j, 2 * (i + j));
    }
  }

  EXPECT_NO_THROW(matrix1.SumMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SumMatrix7) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }

  EXPECT_ANY_THROW(matrix1.SumMatrix(matrix2));
}