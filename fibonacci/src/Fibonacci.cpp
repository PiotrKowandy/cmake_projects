#include "Fibonacci.hpp"
#include <cctype>

int fibonacci(const int& number) {
    int first = 0, second = 1, result = 0, temp = 0;
    for (size_t i = 1; i < number; ++i){
        result = first + second;
        first = second;
        second = result;
    }

    return result;
}