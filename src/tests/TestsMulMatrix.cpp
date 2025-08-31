#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, MulMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, MulMatrix2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, -7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  result.SetMatrix(0, 0, 19.0);
  result.SetMatrix(0, 1, -10.0);
  result.SetMatrix(1, 0, -13.0);
  result.SetMatrix(1, 1, 50.0);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulMatrix3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);
  S21Matrix result(3, 3);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  matrix2.SetMatrix(0, 0, 5.04);
  matrix2.SetMatrix(0, 1, 67.0);
  matrix2.SetMatrix(0, 2, -6.3);
  matrix2.SetMatrix(1, 0, 1023.4);
  matrix2.SetMatrix(1, 1, 8.9);
  matrix2.SetMatrix(1, 2, -8.9);

  result.SetMatrix(0, 0, 2298.548);
  result.SetMatrix(0, 1, 917.202);
  result.SetMatrix(0, 2, -103.822);
  result.SetMatrix(1, 0, 8316.8008);
  result.SetMatrix(1, 1, 3153.65);
  result.SetMatrix(1, 2, -360.236);
  result.SetMatrix(2, 0, -42610.4112);
  result.SetMatrix(2, 1, 497.86);
  result.SetMatrix(2, 2, 289.419);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulMatrix4) {
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

  matrix2.SetMatrix(0, 0, 41.7869);
  matrix2.SetMatrix(0, 1, 76.0431);
  matrix2.SetMatrix(0, 2, 48.385);
  matrix2.SetMatrix(1, 0, -18.9432);
  matrix2.SetMatrix(1, 1, 80.382);
  matrix2.SetMatrix(1, 2, -69.615);
  matrix2.SetMatrix(2, 0, 46.012);
  matrix2.SetMatrix(2, 1, -67.8471);
  matrix2.SetMatrix(2, 2, -36.205);

  result.SetMatrix(0, 0, -4703.621948);
  result.SetMatrix(0, 1, -2410.35171);
  result.SetMatrix(0, 2, 1044.873943);
  result.SetMatrix(1, 0, -617.227106);
  result.SetMatrix(1, 1, 10146.763739);
  result.SetMatrix(1, 2, 4901.932947);
  result.SetMatrix(2, 0, -3719.658331);
  result.SetMatrix(2, 1, 7881.873957);
  result.SetMatrix(2, 2, 3754.390284);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulMatrix5) {
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

  result.SetMatrix(0, 0, 0.0);
  result.SetMatrix(0, 1, 0.0);
  result.SetMatrix(1, 0, 0.0);
  result.SetMatrix(1, 1, 0.0);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulMatrix6) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(3, 2);
  S21Matrix result(2, 2);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }
  result.SetMatrix(0, 0, 5.0);
  result.SetMatrix(0, 1, 8.0);
  result.SetMatrix(1, 0, 8.0);
  result.SetMatrix(1, 1, 14.0);

  EXPECT_NO_THROW(matrix1.MulMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulMatrix7) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(4, 4);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }

  EXPECT_ANY_THROW(matrix1.MulMatrix(matrix2));
}