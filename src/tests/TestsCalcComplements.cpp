#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, CalcComplements1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);

  result.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  EXPECT_NEAR(matrix2.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, CalcComplements2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  result.SetMatrix(0, 0, 4.0);
  result.SetMatrix(0, 1, -3.0);
  result.SetMatrix(1, 0, 2.0);
  result.SetMatrix(1, 1, 1.0);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(3, 3);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  EXPECT_ANY_THROW(matrix2 = matrix1.CalcComplements());
}

TEST(S21MatrixTest, CalcComplements4) {
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

  result.SetMatrix(0, 0, -489.200458);
  result.SetMatrix(0, 1, 4864.012666);
  result.SetMatrix(0, 2, 185.079488);
  result.SetMatrix(1, 0, -2601.011403);
  result.SetMatrix(1, 1, 6342.704405);
  result.SetMatrix(1, 2, -86.000947);
  result.SetMatrix(2, 0, 2206.122224);
  result.SetMatrix(2, 1, -7727.186659);
  result.SetMatrix(2, 2, 1053.017368);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  result.SetMatrix(0, 0, 0.0);
  result.SetMatrix(0, 1, 0.0);
  result.SetMatrix(1, 0, -3.15);
  result.SetMatrix(1, 1, 0.0);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements6) {
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

  result.SetMatrix(0, 0, 9642044.0);
  result.SetMatrix(0, 1, -5106002.0);
  result.SetMatrix(0, 2, 2757708.0);
  result.SetMatrix(0, 3, -7077418.0);
  result.SetMatrix(1, 0, -1044528.0);
  result.SetMatrix(1, 1, -1646674.0);
  result.SetMatrix(1, 2, 14972698.8);
  result.SetMatrix(1, 3, 393908.4);
  result.SetMatrix(2, 0, -67767.2);
  result.SetMatrix(2, 1, 164892.0);
  result.SetMatrix(2, 2, -1428169.2);
  result.SetMatrix(2, 3, 1525699.2);
  result.SetMatrix(3, 0, -1369136.8);
  result.SetMatrix(3, 1, 4736848.0);
  result.SetMatrix(3, 2, 283668.8);
  result.SetMatrix(3, 3, 230738.4);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements7) {
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

  result.SetMatrix(0, 0, 0.0);
  result.SetMatrix(0, 1, 0.0);
  result.SetMatrix(0, 2, 0.0);
  result.SetMatrix(0, 3, 0.0);
  result.SetMatrix(1, 0, 0.0);
  result.SetMatrix(1, 1, 0.0);
  result.SetMatrix(1, 2, 0.0);
  result.SetMatrix(1, 3, 0.0);
  result.SetMatrix(2, 0, 0.0);
  result.SetMatrix(2, 1, 0.0);
  result.SetMatrix(2, 2, 0.0);
  result.SetMatrix(2, 3, 0.0);
  result.SetMatrix(3, 0, 0.0);
  result.SetMatrix(3, 1, 0.0);
  result.SetMatrix(3, 2, 0.0);
  result.SetMatrix(3, 3, 0.0);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements8) {
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

  result.SetMatrix(0, 0, -6809.132498);
  result.SetMatrix(0, 1, -27728.797668);
  result.SetMatrix(0, 2, -21107.575533);
  result.SetMatrix(0, 3, -8028.351222);
  result.SetMatrix(0, 4, 20264.523495);
  result.SetMatrix(0, 5, -43207.502451);

  result.SetMatrix(1, 0, -236637.785151);
  result.SetMatrix(1, 1, 194131.733338);
  result.SetMatrix(1, 2, -7945.883947);
  result.SetMatrix(1, 3, -55758.691822);
  result.SetMatrix(1, 4, -194601.15094);
  result.SetMatrix(1, 5, -168972.903892);

  result.SetMatrix(2, 0, 212688.946593);
  result.SetMatrix(2, 1, -193318.912806);
  result.SetMatrix(2, 2, -25881.980344);
  result.SetMatrix(2, 3, 2393.196083);
  result.SetMatrix(2, 4, 100895.745923);
  result.SetMatrix(2, 5, 73222.421125);

  result.SetMatrix(3, 0, 272134.4407);
  result.SetMatrix(3, 1, -260538.637497);
  result.SetMatrix(3, 2, 32753.368879);
  result.SetMatrix(3, 3, 12778.96049);
  result.SetMatrix(3, 4, 190803.094655);
  result.SetMatrix(3, 5, 151759.907066);

  result.SetMatrix(4, 0, -144056.312358);
  result.SetMatrix(4, 1, 93876.52726);
  result.SetMatrix(4, 2, 9441.394562);
  result.SetMatrix(4, 3, 39494.096797);
  result.SetMatrix(4, 4, -91342.266694);
  result.SetMatrix(4, 5, -23781.775079);

  result.SetMatrix(5, 0, -70863.062396);
  result.SetMatrix(5, 1, 68800.966405);
  result.SetMatrix(5, 2, 63126.682111);
  result.SetMatrix(5, 3, 51813.138707);
  result.SetMatrix(5, 4, -45017.7449);
  result.SetMatrix(5, 5, -15562.993093);

  EXPECT_NO_THROW(matrix2 = matrix1.CalcComplements());
  for (int i = 0; i < matrix2.GetRows(); i++) {
    for (int j = 0; j < matrix2.GetCols(); j++) {
      EXPECT_NEAR(matrix2.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, CalcComplements9) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(2, 3);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }
  EXPECT_ANY_THROW(matrix2 = matrix1.CalcComplements());
}