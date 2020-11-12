#include "gtest/gtest.h"
#include "Fibonacci.hpp"

TEST(FibonacciTests, returns8for7thElement) {
    EXPECT_EQ(13, fibonacci(7));
}

TEST(FibonacciTests, return13for8thElement){
    EXPECT_EQ(21, fibonacci(8));
}

TEST(FibonacciTests, returnanyof){
    EXPECT_NE(2, fibonacci(7));
}

TEST(FibonacciTests, return55for10thElement){
    ASSERT_EQ(55, fibonacci(10));
}


