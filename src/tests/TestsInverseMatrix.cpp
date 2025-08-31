#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, InverseMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);

  result.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(matrix2 = matrix1.InverseMatrix());
  EXPECT_NEAR(matrix2.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, InverseMatrix2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  result.SetMatrix(0, 0, 0.4);
  result.SetMatrix(0, 1, 0.2);
  result.SetMatrix(1, 0, -0.3);
  result.SetMatrix(1, 1, 0.1);

  EXPECT_NO_THROW(matrix2 = matrix1.InverseMatrix());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, InverseMatrix3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(3, 3);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  EXPECT_ANY_THROW(matrix2 = matrix1.InverseMatrix());
}

TEST(S21MatrixTest, InverseMatrix4) {
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

  result.SetMatrix(0, 0, 0.004754);
  result.SetMatrix(0, 1, 0.025279);
  result.SetMatrix(0, 2, -0.021441);
  result.SetMatrix(1, 0, -0.047272);
  result.SetMatrix(1, 1, -0.061644);
  result.SetMatrix(1, 2, 0.075099);
  result.SetMatrix(2, 0, -0.001799);
  result.SetMatrix(2, 1, 0.000836);
  result.SetMatrix(2, 2, -0.010234);

  EXPECT_NO_THROW(matrix2 = matrix1.InverseMatrix());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, InverseMatrix5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  EXPECT_ANY_THROW(matrix2 = matrix1.InverseMatrix());
}

TEST(S21MatrixTest, InverseMatrix6) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 4);
  S21Matrix result(4, 4);

  matrix1.SetMatrix(0, 0, 123.0);
  matrix1.SetMatrix(0, 1, 34.2);
  matrix1.SetMatrix(0, 2, 12.0);
  matrix1.SetMatrix(0, 3, 13.0);
  matrix1.SetMatrix(1, 0, 27.0);
  matrix1.SetMatrix(1, 1, 1.0);
  matrix1.SetMatrix(1, 2, 64.0);
  matrix1.SetMatrix(1, 3, 61.0);
  matrix1.SetMatrix(2, 0, 545.0);
  matrix1.SetMatrix(2, 1, 123.0);
  matrix1.SetMatrix(2, 2, 34.0);
  matrix1.SetMatrix(2, 3, 667.0);
  matrix1.SetMatrix(3, 0, 123.0);
  matrix1.SetMatrix(3, 1, 234.0);
  matrix1.SetMatrix(3, 2, 34.0);
  matrix1.SetMatrix(3, 3, 12.0);

  result.SetMatrix(0, 0, 0.010124);
  result.SetMatrix(0, 1, -0.001097);
  result.SetMatrix(0, 2, -0.000071);
  result.SetMatrix(0, 3, -0.001438);
  result.SetMatrix(1, 0, -0.005361);
  result.SetMatrix(1, 1, -0.001729);
  result.SetMatrix(1, 2, 0.000173);
  result.SetMatrix(1, 3, 0.004973);
  result.SetMatrix(2, 0, 0.002895);
  result.SetMatrix(2, 1, 0.01572);
  result.SetMatrix(2, 2, -0.001499);
  result.SetMatrix(2, 3, 0.000298);
  result.SetMatrix(3, 0, -0.007431);
  result.SetMatrix(3, 1, 0.000414);
  result.SetMatrix(3, 2, 0.001602);
  result.SetMatrix(3, 3, 0.000242);

  EXPECT_NO_THROW(matrix2 = matrix1.InverseMatrix());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, InverseMatrix7) {
  S21Matrix matrix1(4, 4);
  S21Matrix matrix2(4, 4);
  S21Matrix result(4, 4);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(0, 2, 3.0);
  matrix1.SetMatrix(0, 3, 4.0);
  matrix1.SetMatrix(1, 0, 5.0);
  matrix1.SetMatrix(1, 1, 6.0);
  matrix1.SetMatrix(1, 2, 7.0);
  matrix1.SetMatrix(1, 3, 8.0);
  matrix1.SetMatrix(2, 0, 9.0);
  matrix1.SetMatrix(2, 1, 10.0);
  matrix1.SetMatrix(2, 2, 11.0);
  matrix1.SetMatrix(2, 3, 12.0);
  matrix1.SetMatrix(3, 0, 13.0);
  matrix1.SetMatrix(3, 1, 14.0);
  matrix1.SetMatrix(3, 2, 15.0);
  matrix1.SetMatrix(3, 3, 16.0);

  EXPECT_ANY_THROW(matrix2 = matrix1.InverseMatrix());
}

TEST(S21MatrixTest, InverseMatrix8) {
  S21Matrix matrix1(6, 6);
  S21Matrix matrix2(6, 6);
  S21Matrix result(6, 6);

  matrix1.SetMatrix(0, 0, 6.3021);
  matrix1.SetMatrix(0, 1, 5.7026);
  matrix1.SetMatrix(0, 2, 1.6706);
  matrix1.SetMatrix(0, 3, -5.835);
  matrix1.SetMatrix(0, 4, -9.0227);
  matrix1.SetMatrix(0, 5, 9.964);
  matrix1.SetMatrix(1, 0, 1.31975);
  matrix1.SetMatrix(1, 1, 5.6416);
  matrix1.SetMatrix(1, 2, -5.94);
  matrix1.SetMatrix(1, 3, 6.87);
  matrix1.SetMatrix(1, 4, 5.9235);
  matrix1.SetMatrix(1, 5, 0.5749);
  matrix1.SetMatrix(2, 0, -7.8921);
  matrix1.SetMatrix(2, 1, 1.32);
  matrix1.SetMatrix(2, 2, 4.49);
  matrix1.SetMatrix(2, 3, -8.5);
  matrix1.SetMatrix(2, 4, 9.49);
  matrix1.SetMatrix(2, 5, 4.2334);
  matrix1.SetMatrix(3, 0, 7.908);
  matrix1.SetMatrix(3, 1, 8.536);
  matrix1.SetMatrix(3, 2, -8.43);
  matrix1.SetMatrix(3, 3, 8.772);
  matrix1.SetMatrix(3, 4, 0.29);
  matrix1.SetMatrix(3, 5, -4.1);
  matrix1.SetMatrix(4, 0, 9.5913);
  matrix1.SetMatrix(4, 1, 9.89);
  matrix1.SetMatrix(4, 2, 3.9663);
  matrix1.SetMatrix(4, 3, -2.699);
  matrix1.SetMatrix(4, 4, 4.8925);
  matrix1.SetMatrix(4, 5, -7.0);
  matrix1.SetMatrix(5, 0, -6.5);
  matrix1.SetMatrix(5, 1, -2.75);
  matrix1.SetMatrix(5, 2, -7.285);
  matrix1.SetMatrix(5, 3, -8.719);
  matrix1.SetMatrix(5, 4, 0.7374);
  matrix1.SetMatrix(5, 5, 8.313938);

  result.SetMatrix(0, 0, 0.008482);
  result.SetMatrix(0, 1, 0.29476);
  result.SetMatrix(0, 2, -0.264929);
  result.SetMatrix(0, 3, -0.338975);
  result.SetMatrix(0, 4, 0.179439);
  result.SetMatrix(0, 5, 0.088268);

  result.SetMatrix(1, 0, 0.034539);
  result.SetMatrix(1, 1, -0.241814);
  result.SetMatrix(1, 2, 0.240801);
  result.SetMatrix(1, 3, 0.324531);
  result.SetMatrix(1, 4, -0.116934);
  result.SetMatrix(1, 5, -0.0857);

  result.SetMatrix(2, 0, 0.026292);
  result.SetMatrix(2, 1, 0.009898);
  result.SetMatrix(2, 2, 0.032239);
  result.SetMatrix(2, 3, -0.040798);
  result.SetMatrix(2, 4, -0.01176);
  result.SetMatrix(2, 5, -0.078632);

  result.SetMatrix(3, 0, 0.01);
  result.SetMatrix(3, 1, 0.069454);
  result.SetMatrix(3, 2, -0.002981);
  result.SetMatrix(3, 3, -0.015918);
  result.SetMatrix(3, 4, -0.049195);
  result.SetMatrix(3, 5, -0.064539);

  result.SetMatrix(4, 0, -0.025242);
  result.SetMatrix(4, 1, 0.242398);
  result.SetMatrix(4, 2, -0.125677);
  result.SetMatrix(4, 3, -0.237668);
  result.SetMatrix(4, 4, 0.113777);
  result.SetMatrix(4, 5, 0.056075);

  result.SetMatrix(5, 0, 0.05382);
  result.SetMatrix(5, 1, 0.210475);
  result.SetMatrix(5, 2, -0.091207);
  result.SetMatrix(5, 3, -0.189035);
  result.SetMatrix(5, 4, 0.029623);
  result.SetMatrix(5, 5, 0.019386);

  EXPECT_NO_THROW(matrix2 = matrix1.InverseMatrix());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, InverseMatrix9) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(2, 3);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }
  EXPECT_ANY_THROW(matrix2 = matrix1.InverseMatrix());
}