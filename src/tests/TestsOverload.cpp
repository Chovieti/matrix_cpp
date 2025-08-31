#include <gtest/gtest.h>

#include "../S21Matrix.h"

TEST(S21MatrixTest, OverloadPlus1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 2.0);

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  EXPECT_NEAR(result.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadPlus2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, 7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, 6.0);
  expected.SetMatrix(0, 1, 8.0);
  expected.SetMatrix(1, 0, 10.0);
  expected.SetMatrix(1, 1, 12.0);

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlus3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 13.45);
  matrix1.SetMatrix(0, 1, 2.187);
  matrix1.SetMatrix(1, 0, 46.012);
  matrix1.SetMatrix(1, 1, 7.908);

  matrix2.SetMatrix(0, 0, 5.045);
  matrix2.SetMatrix(0, 1, 67.6);
  matrix2.SetMatrix(1, 0, 1023.45);
  matrix2.SetMatrix(1, 1, 8.97);

  expected.SetMatrix(0, 0, 18.495);
  expected.SetMatrix(0, 1, 69.787);
  expected.SetMatrix(1, 0, 1069.462);
  expected.SetMatrix(1, 1, 16.878);

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlus4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -16.666232);
  expected.SetMatrix(0, 1, 51.268058);
  expected.SetMatrix(0, 2, -10.955386);
  expected.SetMatrix(1, 0, 44.734741);
  expected.SetMatrix(1, 1, 89.356778);
  expected.SetMatrix(1, 2, -137.1652);
  expected.SetMatrix(2, 0, 61.48642);
  expected.SetMatrix(2, 1, -62.75964);
  expected.SetMatrix(2, 2, -129.005);

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlus5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 1, 2.5);
  expected.SetMatrix(1, 0, 4.8);
  expected.SetMatrix(1, 1, 9.4);

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlus6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
      expected.SetMatrix(i, j, 2 * (i + j));
    }
  }

  EXPECT_NO_THROW(result = matrix1 + matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinus1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 0.0);

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  EXPECT_NEAR(result.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMinus2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, 7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, -4.0);
  expected.SetMatrix(0, 1, -4.0);
  expected.SetMatrix(1, 0, -4.0);
  expected.SetMatrix(1, 1, -4.0);

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinus3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 13.45);
  matrix1.SetMatrix(0, 1, 2.187);
  matrix1.SetMatrix(1, 0, 46.012);
  matrix1.SetMatrix(1, 1, 7.908);

  matrix2.SetMatrix(0, 0, 5.045);
  matrix2.SetMatrix(0, 1, 67.6);
  matrix2.SetMatrix(1, 0, 1023.45);
  matrix2.SetMatrix(1, 1, 8.97);

  expected.SetMatrix(0, 0, 8.405);
  expected.SetMatrix(0, 1, -65.413);
  expected.SetMatrix(1, 0, -977.438);
  expected.SetMatrix(1, 1, -1.062);

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinus4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -100.240032);
  expected.SetMatrix(0, 1, -100.818142);
  expected.SetMatrix(0, 2, -107.725386);
  expected.SetMatrix(1, 0, 82.621141);
  expected.SetMatrix(1, 1, -71.407222);
  expected.SetMatrix(1, 2, 2.0648);
  expected.SetMatrix(2, 0, -30.53758);
  expected.SetMatrix(2, 1, 72.93456);
  expected.SetMatrix(2, 2, -56.595);

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinus5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 1, 2.5);
  expected.SetMatrix(1, 0, 4.8);
  expected.SetMatrix(1, 1, 9.4);

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinus6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
    }
  }

  EXPECT_NO_THROW(result = matrix1 - matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix result(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  EXPECT_NEAR(result.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, -7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, 19.0);
  expected.SetMatrix(0, 1, -10.0);
  expected.SetMatrix(1, 0, -13.0);
  expected.SetMatrix(1, 1, 50.0);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, 2298.548);
  expected.SetMatrix(0, 1, 917.202);
  expected.SetMatrix(0, 2, -103.822);
  expected.SetMatrix(1, 0, 8316.8008);
  expected.SetMatrix(1, 1, 3153.65);
  expected.SetMatrix(1, 2, -360.236);
  expected.SetMatrix(2, 0, -42610.4112);
  expected.SetMatrix(2, 1, 497.86);
  expected.SetMatrix(2, 2, 289.419);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -4703.621948);
  expected.SetMatrix(0, 1, -2410.35171);
  expected.SetMatrix(0, 2, 1044.873943);
  expected.SetMatrix(1, 0, -617.227106);
  expected.SetMatrix(1, 1, 10146.763739);
  expected.SetMatrix(1, 2, 4901.932947);
  expected.SetMatrix(2, 0, -3719.658331);
  expected.SetMatrix(2, 1, 7881.873957);
  expected.SetMatrix(2, 2, 3754.390284);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 0.0);
  expected.SetMatrix(0, 1, 0.0);
  expected.SetMatrix(1, 0, 0.0);
  expected.SetMatrix(1, 1, 0.0);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForMatrix6) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(3, 2);
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }
  expected.SetMatrix(0, 0, 5.0);
  expected.SetMatrix(0, 1, 8.0);
  expected.SetMatrix(1, 0, 8.0);
  expected.SetMatrix(1, 1, 14.0);

  EXPECT_NO_THROW(result = matrix1 * matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForNumber1) {
  S21Matrix matrix1(1, 1);
  double number = 5.25;
  S21Matrix result(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 5.25);

  result = matrix1 * number;
  EXPECT_NEAR(result.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMultiplyForNumber2) {
  S21Matrix matrix1(2, 2);
  double number = -6.1;
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  expected.SetMatrix(0, 0, -6.1);
  expected.SetMatrix(0, 1, 12.2);
  expected.SetMatrix(1, 0, -18.3);
  expected.SetMatrix(1, 1, -24.4);

  result = matrix1 * number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForNumber3) {
  S21Matrix matrix1(3, 2);
  double number = 13.175;
  S21Matrix result(3, 2);
  S21Matrix expected(3, 2);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  expected.SetMatrix(0, 0, 176.545);
  expected.SetMatrix(0, 1, 28.7215);
  expected.SetMatrix(1, 0, 606.3135);
  expected.SetMatrix(1, 1, 104.0825);
  expected.SetMatrix(2, 0, 170.87975);
  expected.SetMatrix(2, 1, -549.3975);

  result = matrix1 * number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForNumber4) {
  S21Matrix matrix1(3, 3);
  double number = 27.00823;
  S21Matrix result(3, 3);
  S21Matrix expected(3, 3);

  matrix1.SetMatrix(0, 0, -58.4531);
  matrix1.SetMatrix(0, 1, -24.775);
  matrix1.SetMatrix(0, 2, -59.3403);
  matrix1.SetMatrix(1, 0, 63.67794);
  matrix1.SetMatrix(1, 1, 8.974778);
  matrix1.SetMatrix(1, 2, -67.5502);
  matrix1.SetMatrix(2, 0, 15.47442);
  matrix1.SetMatrix(2, 1, 5.08746);
  matrix1.SetMatrix(2, 2, -92.8);

  expected.SetMatrix(0, 0, -1578.714769);
  expected.SetMatrix(0, 1, -669.128898);
  expected.SetMatrix(0, 2, -1602.676471);
  expected.SetMatrix(1, 0, 1719.828449);
  expected.SetMatrix(1, 1, 242.392868);
  expected.SetMatrix(1, 2, -1824.411338);
  expected.SetMatrix(2, 0, 417.936694);
  expected.SetMatrix(2, 1, 137.40329);
  expected.SetMatrix(2, 2, -2506.363744);

  result = matrix1 * number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForNumber5) {
  S21Matrix matrix1(2, 2);
  double number = 1.0;
  S21Matrix result(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 0.0);
  expected.SetMatrix(0, 1, 3.15);
  expected.SetMatrix(1, 0, 0.0);
  expected.SetMatrix(1, 1, 0.0);

  result = matrix1 * number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyForNumber6) {
  S21Matrix matrix1(2, 3);
  double number = 0.0;
  S21Matrix result(2, 3);
  S21Matrix expected(2, 3);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }

  result = matrix1 * number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(result.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadEquating1) {
    S21Matrix matrix(2, 2);
    S21Matrix expected(2, 2);

    matrix.SetMatrix(0, 0, 1);
    matrix.SetMatrix(0, 1, 2);
    matrix.SetMatrix(1, 0, 3);
    matrix.SetMatrix(1, 1, 4);

    expected.SetMatrix(0, 0, 1);
    expected.SetMatrix(0, 1, 2);
    expected.SetMatrix(1, 0, 3);
    expected.SetMatrix(1, 1, 4);

    matrix = matrix;

    for (int i = 0; i < expected.GetRows(); i++) {
        for (int j = 0; j < expected.GetCols(); j++) {
            EXPECT_NEAR(matrix(i, j), expected(i, j), EPSILON);
        }
    }
}

TEST(S21MatrixTest, OverloadEquating2) {
  S21Matrix matrix1(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1);
  matrix1.SetMatrix(0, 1, 2);
  matrix1.SetMatrix(1, 0, 3);
  matrix1.SetMatrix(1, 1, 4);

  expected.SetMatrix(0, 0, 1);
  expected.SetMatrix(0, 1, 2);
  expected.SetMatrix(1, 0, 3);
  expected.SetMatrix(1, 1, 4);

  S21Matrix matrix2(3, 3);
  matrix2 = matrix1;

  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix2(i, j), expected(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadEquating3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix2.SetMatrix(0, 0, 1);
  matrix2.SetMatrix(0, 1, 2);
  matrix2.SetMatrix(1, 0, 3);
  matrix2.SetMatrix(1, 1, 4);

  matrix2 = matrix1;

  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix2(i, j), expected(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadEquating4) {
  S21Matrix matrix1(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1);
  matrix1.SetMatrix(0, 1, 2);
  matrix1.SetMatrix(1, 0, 3);
  matrix1.SetMatrix(1, 1, 4);

  expected.SetMatrix(0, 0, 1);
  expected.SetMatrix(0, 1, 2);
  expected.SetMatrix(1, 0, 3);
  expected.SetMatrix(1, 1, 4);

  S21Matrix matrix2;
  matrix2 = matrix1;

  matrix1.SetMatrix(0, 0, 5);

  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix2(i, j), expected(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadEquating5) {
  S21Matrix matrix1(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1);
  matrix1.SetMatrix(0, 1, 2);
  matrix1.SetMatrix(1, 0, 3);
  matrix1.SetMatrix(1, 1, 4);

  expected.SetMatrix(0, 0, 1);
  expected.SetMatrix(0, 1, 2);
  expected.SetMatrix(1, 0, 3);
  expected.SetMatrix(1, 1, 4);

  S21Matrix matrix2;
  matrix2 = matrix1;

  matrix1.~S21Matrix();

  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix2(i, j), expected(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadEquating6) {
  S21Matrix matrix1(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1);
  matrix1.SetMatrix(0, 1, 2);
  matrix1.SetMatrix(1, 0, 3);
  matrix1.SetMatrix(1, 1, 4);

  expected.SetMatrix(0, 0, 1);
  expected.SetMatrix(0, 1, 2);
  expected.SetMatrix(1, 0, 3);
  expected.SetMatrix(1, 1, 4);

  S21Matrix matrix2, matrix3;
  matrix3 = matrix2 = matrix1;

  EXPECT_EQ(matrix2.GetRows(), 2);
  EXPECT_EQ(matrix2.GetCols(), 2);
  EXPECT_EQ(matrix3.GetRows(), 2);
  EXPECT_EQ(matrix3.GetCols(), 2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix2(i, j), expected(i, j), EPSILON);
      EXPECT_NEAR(matrix3(i, j), expected(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadComparsion1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  EXPECT_TRUE(matrix1 == matrix2);
  EXPECT_TRUE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadComparsion2) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 2.0);
  EXPECT_FALSE(matrix1 == matrix2);
  EXPECT_FALSE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadComparsion3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  EXPECT_TRUE(matrix1 == matrix2);
  EXPECT_TRUE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadComparsion4) {
  S21Matrix matrix1;
  S21Matrix matrix2;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
    }
  }
  EXPECT_TRUE(matrix1 == matrix2);
  EXPECT_TRUE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadComparsion5) {
  S21Matrix matrix1;
  S21Matrix matrix2;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i - j);
    }
  }
  EXPECT_FALSE(matrix1 == matrix2);
  EXPECT_FALSE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadComparsion6) {
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

  EXPECT_TRUE(matrix1 == matrix2);
  EXPECT_TRUE(matrix2 == matrix1);
}

TEST(S21MatrixTest, OverloadPlusWithEquation1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 2.0);

  EXPECT_NO_THROW(matrix1 += matrix2);
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadPlusWithEquation2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, 7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, 6.0);
  expected.SetMatrix(0, 1, 8.0);
  expected.SetMatrix(1, 0, 10.0);
  expected.SetMatrix(1, 1, 12.0);

  EXPECT_NO_THROW(matrix1 += matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlusWithEquation3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 13.45);
  matrix1.SetMatrix(0, 1, 2.187);
  matrix1.SetMatrix(1, 0, 46.012);
  matrix1.SetMatrix(1, 1, 7.908);

  matrix2.SetMatrix(0, 0, 5.045);
  matrix2.SetMatrix(0, 1, 67.6);
  matrix2.SetMatrix(1, 0, 1023.45);
  matrix2.SetMatrix(1, 1, 8.97);

  expected.SetMatrix(0, 0, 18.495);
  expected.SetMatrix(0, 1, 69.787);
  expected.SetMatrix(1, 0, 1069.462);
  expected.SetMatrix(1, 1, 16.878);

  EXPECT_NO_THROW(matrix1 += matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlusWithEquation4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -16.666232);
  expected.SetMatrix(0, 1, 51.268058);
  expected.SetMatrix(0, 2, -10.955386);
  expected.SetMatrix(1, 0, 44.734741);
  expected.SetMatrix(1, 1, 89.356778);
  expected.SetMatrix(1, 2, -137.1652);
  expected.SetMatrix(2, 0, 61.48642);
  expected.SetMatrix(2, 1, -62.75964);
  expected.SetMatrix(2, 2, -129.005);

  EXPECT_NO_THROW(matrix1 += matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlusWithEquation5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 1, 2.5);
  expected.SetMatrix(1, 0, 4.8);
  expected.SetMatrix(1, 1, 9.4);

  EXPECT_NO_THROW(matrix1 += matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadPlusWithEquation6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix expected(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
      expected.SetMatrix(i, j, 2 * (i + j));
    }
  }

  EXPECT_NO_THROW(matrix1 += matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinusWithEquation1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 0.0);

  EXPECT_NO_THROW(matrix1 -= matrix2);
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMinusWithEquation2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, 7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, -4.0);
  expected.SetMatrix(0, 1, -4.0);
  expected.SetMatrix(1, 0, -4.0);
  expected.SetMatrix(1, 1, -4.0);

  EXPECT_NO_THROW(matrix1 -= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinusWithEquation3) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 13.45);
  matrix1.SetMatrix(0, 1, 2.187);
  matrix1.SetMatrix(1, 0, 46.012);
  matrix1.SetMatrix(1, 1, 7.908);

  matrix2.SetMatrix(0, 0, 5.045);
  matrix2.SetMatrix(0, 1, 67.6);
  matrix2.SetMatrix(1, 0, 1023.45);
  matrix2.SetMatrix(1, 1, 8.97);

  expected.SetMatrix(0, 0, 8.405);
  expected.SetMatrix(0, 1, -65.413);
  expected.SetMatrix(1, 0, -977.438);
  expected.SetMatrix(1, 1, -1.062);

  EXPECT_NO_THROW(matrix1 -= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinusWithEquation4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -100.240032);
  expected.SetMatrix(0, 1, -100.818142);
  expected.SetMatrix(0, 2, -107.725386);
  expected.SetMatrix(1, 0, 82.621141);
  expected.SetMatrix(1, 1, -71.407222);
  expected.SetMatrix(1, 2, 2.0648);
  expected.SetMatrix(2, 0, -30.53758);
  expected.SetMatrix(2, 1, 72.93456);
  expected.SetMatrix(2, 2, -56.595);

  EXPECT_NO_THROW(matrix1 -= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinusWithEquation5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 1, 2.5);
  expected.SetMatrix(1, 0, 4.8);
  expected.SetMatrix(1, 1, 9.4);

  EXPECT_NO_THROW(matrix1 -= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMinusWithEquation6) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix expected(3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(i, j, i + j);
    }
  }

  EXPECT_NO_THROW(matrix1 -= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix1) {
  S21Matrix matrix1(1, 1);
  S21Matrix matrix2(1, 1);
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix2.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 1.0);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix2) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  matrix2.SetMatrix(0, 0, 5.0);
  matrix2.SetMatrix(0, 1, 6.0);
  matrix2.SetMatrix(1, 0, -7.0);
  matrix2.SetMatrix(1, 1, 8.0);

  expected.SetMatrix(0, 0, 19.0);
  expected.SetMatrix(0, 1, -10.0);
  expected.SetMatrix(1, 0, -13.0);
  expected.SetMatrix(1, 1, 50.0);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix3) {
  S21Matrix matrix1(3, 2);
  S21Matrix matrix2(2, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, 2298.548);
  expected.SetMatrix(0, 1, 917.202);
  expected.SetMatrix(0, 2, -103.822);
  expected.SetMatrix(1, 0, 8316.8008);
  expected.SetMatrix(1, 1, 3153.65);
  expected.SetMatrix(1, 2, -360.236);
  expected.SetMatrix(2, 0, -42610.4112);
  expected.SetMatrix(2, 1, 497.86);
  expected.SetMatrix(2, 2, 289.419);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix4) {
  S21Matrix matrix1(3, 3);
  S21Matrix matrix2(3, 3);
  S21Matrix expected(3, 3);

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

  expected.SetMatrix(0, 0, -4703.621948);
  expected.SetMatrix(0, 1, -2410.35171);
  expected.SetMatrix(0, 2, 1044.873943);
  expected.SetMatrix(1, 0, -617.227106);
  expected.SetMatrix(1, 1, 10146.763739);
  expected.SetMatrix(1, 2, 4901.932947);
  expected.SetMatrix(2, 0, -3719.658331);
  expected.SetMatrix(2, 1, 7881.873957);
  expected.SetMatrix(2, 2, 3754.390284);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix5) {
  S21Matrix matrix1(2, 2);
  S21Matrix matrix2(2, 2);
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, 2.5);
  matrix1.SetMatrix(1, 0, 4.8);
  matrix1.SetMatrix(1, 1, 9.4);

  matrix2.SetMatrix(0, 0, 0.0);
  matrix2.SetMatrix(0, 1, 0.0);
  matrix2.SetMatrix(1, 0, 0.0);
  matrix2.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 0.0);
  expected.SetMatrix(0, 1, 0.0);
  expected.SetMatrix(1, 0, 0.0);
  expected.SetMatrix(1, 1, 0.0);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForMatrix6) {
  S21Matrix matrix1(2, 3);
  S21Matrix matrix2(3, 2);
  S21Matrix expected(2, 2);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
      matrix2.SetMatrix(j, i, i + j);
    }
  }
  expected.SetMatrix(0, 0, 5.0);
  expected.SetMatrix(0, 1, 8.0);
  expected.SetMatrix(1, 0, 8.0);
  expected.SetMatrix(1, 1, 14.0);

  EXPECT_NO_THROW(matrix1 *= matrix2);
  for (int i = 0; i < expected.GetRows(); i++) {
    for (int j = 0; j < expected.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber1) {
  S21Matrix matrix1(1, 1);
  double number = 5.25;
  S21Matrix expected(1, 1);

  matrix1.SetMatrix(0, 0, 1.0);
  expected.SetMatrix(0, 0, 5.25);

  matrix1 *= number;
  EXPECT_NEAR(matrix1.GetMatrix(0, 0), expected.GetMatrix(0, 0), EPSILON);
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber2) {
  S21Matrix matrix1(2, 2);
  double number = -6.1;
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 1.0);
  matrix1.SetMatrix(0, 1, -2.0);
  matrix1.SetMatrix(1, 0, 3.0);
  matrix1.SetMatrix(1, 1, 4.0);

  expected.SetMatrix(0, 0, -6.1);
  expected.SetMatrix(0, 1, 12.2);
  expected.SetMatrix(1, 0, -18.3);
  expected.SetMatrix(1, 1, -24.4);

  matrix1 *= number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber3) {
  S21Matrix matrix1(3, 2);
  double number = 13.175;
  S21Matrix expected(3, 2);

  matrix1.SetMatrix(0, 0, 13.4);
  matrix1.SetMatrix(0, 1, 2.18);
  matrix1.SetMatrix(1, 0, 46.02);
  matrix1.SetMatrix(1, 1, 7.9);
  matrix1.SetMatrix(2, 0, 12.97);
  matrix1.SetMatrix(2, 1, -41.7);

  expected.SetMatrix(0, 0, 176.545);
  expected.SetMatrix(0, 1, 28.7215);
  expected.SetMatrix(1, 0, 606.3135);
  expected.SetMatrix(1, 1, 104.0825);
  expected.SetMatrix(2, 0, 170.87975);
  expected.SetMatrix(2, 1, -549.3975);

  matrix1 *= number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber4) {
  S21Matrix matrix1(3, 3);
  double number = 27.00823;
  S21Matrix expected(3, 3);

  matrix1.SetMatrix(0, 0, -58.4531);
  matrix1.SetMatrix(0, 1, -24.775);
  matrix1.SetMatrix(0, 2, -59.3403);
  matrix1.SetMatrix(1, 0, 63.67794);
  matrix1.SetMatrix(1, 1, 8.974778);
  matrix1.SetMatrix(1, 2, -67.5502);
  matrix1.SetMatrix(2, 0, 15.47442);
  matrix1.SetMatrix(2, 1, 5.08746);
  matrix1.SetMatrix(2, 2, -92.8);

  expected.SetMatrix(0, 0, -1578.714769);
  expected.SetMatrix(0, 1, -669.128898);
  expected.SetMatrix(0, 2, -1602.676471);
  expected.SetMatrix(1, 0, 1719.828449);
  expected.SetMatrix(1, 1, 242.392868);
  expected.SetMatrix(1, 2, -1824.411338);
  expected.SetMatrix(2, 0, 417.936694);
  expected.SetMatrix(2, 1, 137.40329);
  expected.SetMatrix(2, 2, -2506.363744);

  matrix1 *= number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber5) {
  S21Matrix matrix1(2, 2);
  double number = 1.0;
  S21Matrix expected(2, 2);

  matrix1.SetMatrix(0, 0, 0.0);
  matrix1.SetMatrix(0, 1, 3.15);
  matrix1.SetMatrix(1, 0, 0.0);
  matrix1.SetMatrix(1, 1, 0.0);

  expected.SetMatrix(0, 0, 0.0);
  expected.SetMatrix(0, 1, 3.15);
  expected.SetMatrix(1, 0, 0.0);
  expected.SetMatrix(1, 1, 0.0);

  matrix1 *= number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadMultiplyWithEquationForNumber6) {
  S21Matrix matrix1(2, 3);
  double number = 0.0;
  S21Matrix expected(2, 3);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      matrix1.SetMatrix(i, j, i + j);
    }
  }

  matrix1 *= number;
  for (int i = 0; i < matrix1.GetRows(); i++) {
    for (int j = 0; j < matrix1.GetCols(); j++) {
      EXPECT_NEAR(matrix1.GetMatrix(i, j), expected.GetMatrix(i, j), EPSILON);
    }
  }
}

TEST(S21MatrixTest, OverloadIndex1) {
  S21Matrix matrix(2, 2);
  matrix.SetMatrix(0, 0, 1.5);
  matrix.SetMatrix(0, 1, 2.5);
  matrix.SetMatrix(1, 0, 3.5);
  matrix.SetMatrix(1, 1, 4.5);

  EXPECT_NEAR(matrix(0, 0), 1.5, EPSILON);
  EXPECT_NEAR(matrix(0, 1), 2.5, EPSILON);
  EXPECT_NEAR(matrix(1, 0), 3.5, EPSILON);
  EXPECT_NEAR(matrix(1, 1), 4.5, EPSILON);
}

TEST(S21MatrixTest, OverloadIndex2) {
  S21Matrix matrix(2, 2);
  matrix.SetMatrix(0, 0, 1.5);
  EXPECT_NEAR(matrix(0, 0), 1.5, EPSILON);

  matrix.SetMatrix(0, 0, 2.5);
  EXPECT_NEAR(matrix(0, 0), 2.5, EPSILON);
}

TEST(S21MatrixTest, OverloadIndex3) {
  S21Matrix matrix(2, 2);

  EXPECT_ANY_THROW(matrix(10, 10));
  EXPECT_ANY_THROW(matrix(-1, -1));
}

TEST(S21MatrixTest, OverloadIndex4) {
  S21Matrix matrix(2, 2);

  EXPECT_ANY_THROW(matrix(3, 0));
  EXPECT_ANY_THROW(matrix(0, 2));
  EXPECT_ANY_THROW(matrix(-1, 0));
  EXPECT_ANY_THROW(matrix(0, -1));
}