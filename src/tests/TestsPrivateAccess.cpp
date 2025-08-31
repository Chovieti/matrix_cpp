#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, SetRows1) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetRows(4);
  EXPECT_EQ(matrix.GetRows(), 4);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(3, i), 0.0, EPSILON);
  }
}

TEST(S21MatrixTest, SetRows2) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetRows(2);
  EXPECT_EQ(matrix.GetRows(), 2);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(1, i), 1.8, EPSILON);
  }
}

TEST(S21MatrixTest, SetRows3) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetRows(2);
  EXPECT_EQ(matrix.GetRows(), 2);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(1, i), 1.8, EPSILON);
  }
  matrix.SetRows(3);
  EXPECT_EQ(matrix.GetRows(), 3);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(2, i), 0.0, EPSILON);
  }
}

TEST(S21MatrixTest, SetRows4) {
  S21Matrix matrix;
  EXPECT_ANY_THROW(matrix.SetRows(0));
}

TEST(S21MatrixTest, SetRows5) {
  S21Matrix matrix;
  EXPECT_ANY_THROW(matrix.SetRows(-10));
}

TEST(S21MatrixTest, SetCols1) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetCols(4);
  EXPECT_EQ(matrix.GetCols(), 4);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, 3), 0.0, EPSILON);
  }
}

TEST(S21MatrixTest, SetCols2) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetCols(2);
  EXPECT_EQ(matrix.GetCols(), 2);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, 1), 1.8, EPSILON);
  }
}

TEST(S21MatrixTest, SetCols3) {
  S21Matrix matrix;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix.SetMatrix(i, j, 1.8);
    }
  }
  matrix.SetCols(2);
  EXPECT_EQ(matrix.GetCols(), 2);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, 1), 1.8, EPSILON);
  }
  matrix.SetCols(3);
  EXPECT_EQ(matrix.GetCols(), 3);
  for (int i = 0; i < 3; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, 2), 0.0, EPSILON);
  }
}

TEST(S21MatrixTest, SetCols4) {
  S21Matrix matrix;
  EXPECT_ANY_THROW(matrix.SetCols(0));
}

TEST(S21MatrixTest, SetCols5) {
  S21Matrix matrix;
  EXPECT_ANY_THROW(matrix.SetCols(-10));
}

TEST(S21MatrixTest, SetMatrix1) {
  S21Matrix matrix(2, 2);
  for (int i = 0; i < 2; i++) {
    matrix.SetMatrix(i, i, 3.45);
  }
  for (int i = 0; i < 2; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, i), 3.45, EPSILON);
  }
}

TEST(S21MatrixTest, SetMatrix2) {
  S21Matrix matrix(2, 2);
  for (int i = 0; i < 2; i++) {
    matrix.SetMatrix(i, i, 3.45);
  }
  for (int i = 0; i < 2; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, i), 3.45, EPSILON);
  }
  for (int i = 0; i < 2; i++) {
    matrix.SetMatrix(i, i, 1.45);
  }
  for (int i = 0; i < 2; i++) {
    EXPECT_NEAR(matrix.GetMatrix(i, i), 1.45, EPSILON);
  }
}

TEST(S21MatrixTest, SetMatrix3) {
  S21Matrix matrix(2, 2);

  EXPECT_ANY_THROW(matrix.SetMatrix(3, 0, 0.0));
  EXPECT_ANY_THROW(matrix.SetMatrix(2, -4, 0.0));
  EXPECT_ANY_THROW(matrix.SetMatrix(0, -4, 0.0));
  EXPECT_ANY_THROW(matrix.SetMatrix(0, 4, 0.0));
}