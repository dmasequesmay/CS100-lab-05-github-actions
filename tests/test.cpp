#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST (Constructor, noParameters) {
    Rectangle *aRectangle = new Rectangle();
    EXPECT_EQ (aRectangle->area(), 0);
}

TEST (Constructor, oneParameters) {
    EXPECT_DEATH (Rectangle(1), "Not a valid constructor");
}

TEST (Constructor, twoParameters) {
    Rectangle *aRectangle = new Rectangle(2,3);
    EXPECT_NO_THROW (aRectangle->area());
}

TEST (Area, positiveArea) {
    Rectangle *aRectangle = new Rectangle (2,3);
    ASSERT (aRectangle->area() >= 0);
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
    ASSERT (aRectangle->perimeter() >= 0);
}

TEST (Perimeter, zeroPerimeter) {
    Rectangle *aRectangle = new Rectangle();
    EXPECT_EQ (aRectangle->perimeter(), 0);
}

TEST (Perimeter, testPerimeter) {
    Rectangle *aRectangle = new Rectanble(2,3);
    EXPECT_EQ (aRectangle->perimeter(), 10);
}