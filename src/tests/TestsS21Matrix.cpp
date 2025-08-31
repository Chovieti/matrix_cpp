#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, DefaultConstructor) {
  S21Matrix matrix;
  EXPECT_EQ(matrix.GetRows(), 3);
  EXPECT_EQ(matrix.GetCols(), 3);
}

TEST(S21MatrixTest, ParamConstructor1) {
  S21Matrix matrix(2, 2);
  EXPECT_EQ(matrix.GetRows(), 2);
  EXPECT_EQ(matrix.GetCols(), 2);
}

TEST(S21MatrixTest, ParamConstructor2) {
  S21Matrix matrix(4, 4);
  EXPECT_EQ(matrix.GetRows(), 4);
  EXPECT_EQ(matrix.GetCols(), 4);
}

TEST(S21MatrixTest, ParamConstructor3) {
  S21Matrix matrix(5, 1);
  EXPECT_EQ(matrix.GetRows(), 5);
  EXPECT_EQ(matrix.GetCols(), 1);
}

TEST(S21MatrixTest, ParamConstructor4) {
  S21Matrix matrix(2, 4);
  EXPECT_EQ(matrix.GetRows(), 2);
  EXPECT_EQ(matrix.GetCols(), 4);
}

TEST(S21MatrixTest, CopyConstructor1) {
  S21Matrix original(2, 2);
  original.SetMatrix(0, 0, 1.0);
  original.SetMatrix(1, 1, 2.0);

  S21Matrix copy = original;
  EXPECT_EQ(copy.GetMatrix(0, 0), 1.0);
  EXPECT_EQ(copy.GetMatrix(1, 1), 2.0);
}

TEST(S21MatrixTest, CopyConstructor2) {
  S21Matrix original(3, 3);
  original.SetMatrix(0, 0, 0.0);
  original.SetMatrix(0, 1, 0.1);
  original.SetMatrix(0, 2, 0.2);
  original.SetMatrix(1, 0, 1.0);
  original.SetMatrix(1, 1, 1.1);
  original.SetMatrix(1, 2, 1.2);
  original.SetMatrix(2, 0, 2.0);
  original.SetMatrix(2, 1, 2.1);
  original.SetMatrix(2, 2, 2.2);

  S21Matrix copy = original;
  EXPECT_EQ(copy.GetMatrix(0, 0), 0.0);
  EXPECT_EQ(copy.GetMatrix(0, 1), 0.1);
  EXPECT_EQ(copy.GetMatrix(0, 2), 0.2);
  EXPECT_EQ(copy.GetMatrix(1, 0), 1.0);
  EXPECT_EQ(copy.GetMatrix(1, 1), 1.1);
  EXPECT_EQ(copy.GetMatrix(1, 2), 1.2);
  EXPECT_EQ(copy.GetMatrix(2, 0), 2.0);
  EXPECT_EQ(copy.GetMatrix(2, 1), 2.1);
  EXPECT_EQ(copy.GetMatrix(2, 2), 2.2);
}

TEST(S21MatrixTest, CopyConstructor3) {
  S21Matrix original(4, 2);
  original.SetMatrix(0, 0, 1.5);
  original.SetMatrix(0, 1, 3.8);
  original.SetMatrix(1, 0, 1.1);
  original.SetMatrix(1, 1, 4.2);
  original.SetMatrix(2, 0, 0.7);
  original.SetMatrix(2, 1, 5.6);
  original.SetMatrix(3, 0, 3.2);
  original.SetMatrix(3, 1, 2.1);

  S21Matrix copy = original;
  EXPECT_EQ(copy.GetMatrix(0, 0), 1.5);
  EXPECT_EQ(copy.GetMatrix(0, 1), 3.8);
  EXPECT_EQ(copy.GetMatrix(1, 0), 1.1);
  EXPECT_EQ(copy.GetMatrix(1, 1), 4.2);
  EXPECT_EQ(copy.GetMatrix(2, 0), 0.7);
  EXPECT_EQ(copy.GetMatrix(2, 1), 5.6);
  EXPECT_EQ(copy.GetMatrix(3, 0), 3.2);
  EXPECT_EQ(copy.GetMatrix(3, 1), 2.1);
}

TEST(S21MatrixTest, MoveConstructor1) {
  S21Matrix original(2, 2);
  original.SetMatrix(0, 0, 1.0);
  original.SetMatrix(1, 1, 2.0);

  S21Matrix moved = std::move(original);
  EXPECT_EQ(moved.GetMatrix(0, 0), 1.0);
  EXPECT_EQ(moved.GetMatrix(1, 1), 2.0);

  EXPECT_EQ(original.GetRows(), 0);
  EXPECT_EQ(original.GetCols(), 0);
}

TEST(S21MatrixTest, MoveConstructor2) {
  S21Matrix original(3, 3);
  original.SetMatrix(0, 0, 0.0);
  original.SetMatrix(0, 1, 0.1);
  original.SetMatrix(0, 2, 0.2);
  original.SetMatrix(1, 0, 1.0);
  original.SetMatrix(1, 1, 1.1);
  original.SetMatrix(1, 2, 1.2);
  original.SetMatrix(2, 0, 2.0);
  original.SetMatrix(2, 1, 2.1);
  original.SetMatrix(2, 2, 2.2);

  S21Matrix moved = std::move(original);
  EXPECT_EQ(moved.GetMatrix(0, 0), 0.0);
  EXPECT_EQ(moved.GetMatrix(0, 1), 0.1);
  EXPECT_EQ(moved.GetMatrix(0, 2), 0.2);
  EXPECT_EQ(moved.GetMatrix(1, 0), 1.0);
  EXPECT_EQ(moved.GetMatrix(1, 1), 1.1);
  EXPECT_EQ(moved.GetMatrix(1, 2), 1.2);
  EXPECT_EQ(moved.GetMatrix(2, 0), 2.0);
  EXPECT_EQ(moved.GetMatrix(2, 1), 2.1);
  EXPECT_EQ(moved.GetMatrix(2, 2), 2.2);

  EXPECT_EQ(original.GetRows(), 0);
  EXPECT_EQ(original.GetCols(), 0);
}

TEST(S21MatrixTest, MoveConstructor3) {
  S21Matrix original(4, 2);
  original.SetMatrix(0, 0, 1.5);
  original.SetMatrix(0, 1, 3.8);
  original.SetMatrix(1, 0, 1.1);
  original.SetMatrix(1, 1, 4.2);
  original.SetMatrix(2, 0, 0.7);
  original.SetMatrix(2, 1, 5.6);
  original.SetMatrix(3, 0, 3.2);
  original.SetMatrix(3, 1, 2.1);

  S21Matrix moved = std::move(original);
  EXPECT_EQ(moved.GetMatrix(0, 0), 1.5);
  EXPECT_EQ(moved.GetMatrix(0, 1), 3.8);
  EXPECT_EQ(moved.GetMatrix(1, 0), 1.1);
  EXPECT_EQ(moved.GetMatrix(1, 1), 4.2);
  EXPECT_EQ(moved.GetMatrix(2, 0), 0.7);
  EXPECT_EQ(moved.GetMatrix(2, 1), 5.6);
  EXPECT_EQ(moved.GetMatrix(3, 0), 3.2);
  EXPECT_EQ(moved.GetMatrix(3, 1), 2.1);

  EXPECT_EQ(original.GetRows(), 0);
  EXPECT_EQ(original.GetCols(), 0);
}