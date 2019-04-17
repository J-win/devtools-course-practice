// Copyright 2019 Aksenov Nikita

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Aksenov_Nikita_ComplexNumberTest,
    Can_Create_With_Negative_Imaginary) {
    // Arrange
    double re = 20.0;
    double im = -20.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Aksenov_Nikita_ComplexNumberTest,
    Check_The_Distributivity) {
    // Arrange
    ComplexNumber z1(1.0, 2.0);
    ComplexNumber z2(3.0, 4.0);
    ComplexNumber z3(5.0, 6.0);

    // Act
    ComplexNumber res1 = (z1 + z2) * z3;
    ComplexNumber res2 = z1 * z3 + z2 * z3;

    // Assert
    EXPECT_EQ(res1, res2);
}

TEST(Aksenov_Nikita_ComplexNumberTest,
    Number_Multiplied_By_1_Stays_Same) {
    // Arrange
    double re1 = 3.0;
    double im1 = 7.0;
    double re2 = 1.0;
    double im2 = 0.0;

    // Act
    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re2, im2);
    ComplexNumber z3 = z1 * z2;

    // Assert
    EXPECT_EQ(z1, z3);
}

TEST(Aksenov_Nikita_ComplexNumberTest,
    Check_The_Associativity_Of_Addition) {
    // Arrange
    ComplexNumber z1(3.3, 3.3);
    ComplexNumber z2(7.7, 7.7);
    ComplexNumber z3(3.7, 3.7);

    // Act
    ComplexNumber sum1 = (z1 + z2) + z3;
    ComplexNumber sum2 = (z2 + z3) + z1;

    // Assert
    EXPECT_EQ(sum1, sum2);
}

TEST(Aksenov_Nikita_ComplexNumberTest,
    Check_The_Commutativity_Of_Multiplication) {
    // Arrange
    ComplexNumber z1(3.0, 7.0);
    ComplexNumber z2(2.4, 5.6);

    // Act
    ComplexNumber mult1 = z1 * z2;
    ComplexNumber mult2 = z2 * z1;
    

    // Assert
    EXPECT_EQ(mult1, mult2);
}
