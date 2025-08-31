#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, MulNumber1) {
  S21Matrix matrix1(1, 1);
  double number = 5.25;
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 0, 5.25);

  matrix1.MulNumber(number);
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, MulNumber2) {
  S21Matrix matrix1(2, 2);
  double number = -6.1;
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  result.SetMatrix(0, 0, -6.1);
  result.SetMatrix(0, 1, 12.2);
  result.SetMatrix(1, 0, -18.3);
  result.SetMatrix(1, 1, -24.4);

  matrix1.MulNumber(number);
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulNumber3) {
  S21Matrix matrix1(3, 2);
  double number = 13.175;
  S21Matrix result(3, 2);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  result.SetMatrix(0, 0, 176.545);
  result.SetMatrix(0, 1, 28.7215);
  result.SetMatrix(1, 0, 606.3135);
  result.SetMatrix(1, 1, 104.0825);
  result.SetMatrix(2, 0, 170.87975);
  result.SetMatrix(2, 1, -549.3975);

  matrix1.MulNumber(number);
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulNumber4) {
  S21Matrix matrix1(3, 3);
  double number = 27.00823;
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

  result.SetMatrix(0, 0, -1578.714769);
  result.SetMatrix(0, 1, -669.128898);
  result.SetMatrix(0, 2, -1602.676471);
  result.SetMatrix(1, 0, 1719.828449);
  result.SetMatrix(1, 1, 242.392868);
  result.SetMatrix(1, 2, -1824.411338);
  result.SetMatrix(2, 0, 417.936694);
  result.SetMatrix(2, 1, 137.40329);
  result.SetMatrix(2, 2, -2506.363744);

  matrix1.MulNumber(number);
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulNumber5) {
  S21Matrix matrix1(2, 2);
  double number = 1.0;
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  result.SetMatrix(0, 0, 0.0);
  result.SetMatrix(0, 1, 3.15);
  result.SetMatrix(1, 0, 0.0);
  result.SetMatrix(1, 1, 0.0);

  matrix1.MulNumber(number);
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, MulNumber6) {
  S21Matrix matrix1(2, 3);
  double number = 0.0;
  S21Matrix result(2, 3);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }

  matrix1.MulNumber(number);
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}