CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(RectangleTests)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(test
	tests/test.cpp
	src/rectangle.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)