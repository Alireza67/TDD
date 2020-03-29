#include "pch.h"
#include "../TDD/singleFunction.h"

void checkFizzBuzz(int input, std::string expectedValue) {
	std::string result = fizzBuzz(input);
	ASSERT_STREQ(expectedValue.c_str(), result.c_str());
}
TEST(FizzBuzzTests, result1With1PassedIn) {
	checkFizzBuzz(1, "1");
}

TEST(FizzBuzzTests, result2With2PassedIn) {
	checkFizzBuzz(2, "2");
}

TEST(FizzBuzzTests, resultFizzWith3PassedIn) {
	checkFizzBuzz(3, "Fizz");
}

TEST(FizzBuzzTests, resultBuzzWith5PassedIn) {
	checkFizzBuzz(5, "Buzz");
}

TEST(FizzBuzzTests, resultFizzWith6PassedIn) {
	checkFizzBuzz(6, "Fizz");
}

TEST(FizzBuzzTests, resultBuzzWith10PassedIn) {
	checkFizzBuzz(10, "Buzz");
}

TEST(FizzBuzzTests, resultFizzBuzzWith15PassedIn) {
	checkFizzBuzz(15, "FizzBuzz");
}