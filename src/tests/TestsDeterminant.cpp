#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, Determinant1) {
  S21Matrix matrix1(1, 1);
  double result = 0.0;
  double expected = 1.0;

  matrix1.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant2) {
  S21Matrix matrix1(2, 2);
  double result = 0.0;
  double expected = 10.0;

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant3) {
  S21Matrix matrix1(3, 2);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  EXPECT_ANY_THROW(matrix1.Determinant());
}

TEST(S21MatrixTest, Determinant4) {
  S21Matrix matrix1(3, 3);
  double result = 0.0;
  double expected = -102893.302885567315968;

  matrix1.SetMatrix(0, 0, -58.4531);
  matrix1.SetMatrix(0, 1, -24.775);
  matrix1.SetMatrix(0, 2, -59.3403);
  matrix1.SetMatrix(1, 0, 63.67794);
  matrix1.SetMatrix(1, 1, 8.974778);
  matrix1.SetMatrix(1, 2, -67.5502);
  matrix1.SetMatrix(2, 0, 15.47442);
  matrix1.SetMatrix(2, 1, 5.08746);
  matrix1.SetMatrix(2, 2, -92.8);

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant5) {
  S21Matrix matrix1(2, 2);
  double result = 0.0;
  double expected = 0.0;

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant6) {
  S21Matrix matrix1(4, 4);
  double result = 0.0;
  double expected = 952432205.6;

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

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant7) {
  S21Matrix matrix1(4, 4);
  double result = 0.0;
  double expected = 0.0;

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

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant8) {
  S21Matrix matrix1(6, 6);
  double result = 0.0;
  double expected = -802815.232364;

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

  EXPECT_NO_THROW(result = matrix1.Determinant());
  EXPECT_NEAR(result, expected, EPSILON);
}

TEST(S21MatrixTest, Determinant9) {
  S21Matrix matrix1(2, 3);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }
  EXPECT_ANY_THROW(matrix1.Determinant());
}