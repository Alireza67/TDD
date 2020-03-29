#include "pch.h"
#include <string>
using namespace std;

bool isMultiple(int value, int base) {

	if (0 == (value % base))
		return true;
	return false;
}

string fizzBuzz(int input) {
		
	if (isMultiple(input, 3))
		if (isMultiple(input, 5))
			return "FizzBuzz";
		else
			return "Fizz";
	else if (isMultiple(input, 5))
		return "Buzz";
	else
		return to_string(input);
}