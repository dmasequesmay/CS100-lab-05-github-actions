#include "gtest/gtest.h"
#include <iostream>
#include <cassert>
#include "../header/rectangle.hpp"


TEST (Constructor, noParameters) {
    Rectangle *aRectangle = new Rectangle();
    EXPECT_EQ (aRectangle->area(), 0);
}

TEST (Constructor, twoParameters) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_NO_THROW (aRectangle->perimeter());
}

TEST (Constructor, twoParameters2) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_NO_THROW (aRectangle->area());
}

TEST (Area, positiveArea) {
    Rectangle *aRectangle = new Rectangle (2,3);
    EXPECT_TRUE (aRectangle->area() > 0);
}

TEST (Area, zeroArea) {
    Rectangle *aRectangle = new Rectangle();
    EXPECT_EQ (aRectangle->area(), 0);
}

TEST (Area, testArea) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_EQ (aRectangle->area(), 6);
}

TEST(Perimeter, positivePerimeter) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_TRUE (aRectangle->perimeter() > 0);
}

TEST (Perimeter, zeroPerimeter) {
    Rectangle *aRectangle = new Rectangle();
    EXPECT_EQ (aRectangle->perimeter(), 0);
}

TEST (Perimeter, testPerimeter) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_EQ (aRectangle->perimeter(), 10);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}