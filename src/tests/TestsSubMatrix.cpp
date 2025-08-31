#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, SubMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  result.SetMatrix(0, 0, 0.0);

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), result.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, SubMatrix2) {
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

  result.SetMatrix(0, 0, -4.0);
  result.SetMatrix(0, 1, -4.0);
  result.SetMatrix(1, 0, -4.0);
  result.SetMatrix(1, 1, -4.0);

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SubMatrix3) {
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

  result.SetMatrix(0, 0, 8.405);
  result.SetMatrix(0, 1, -65.413);
  result.SetMatrix(1, 0, -977.438);
  result.SetMatrix(1, 1, -1.062);

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SubMatrix4) {
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

  result.SetMatrix(0, 0, -100.240032);
  result.SetMatrix(0, 1, -100.818142);
  result.SetMatrix(0, 2, -107.725386);
  result.SetMatrix(1, 0, 82.621141);
  result.SetMatrix(1, 1, -71.407222);
  result.SetMatrix(1, 2, 2.0648);
  result.SetMatrix(2, 0, -30.53758);
  result.SetMatrix(2, 1, 72.93456);
  result.SetMatrix(2, 2, -56.595);

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SubMatrix5) {
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

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SubMatrix6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
    }
  }

  EXPECT_NO_THROW(matrix1.SubMatrix(matrix2));
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), result.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, SubMatrix7) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }

  EXPECT_ANY_THROW(matrix1.SubMatrix(matrix2));
}