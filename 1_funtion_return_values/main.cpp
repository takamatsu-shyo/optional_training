#include <vector>
#include <optional>
#include <iostream>

std::optional<int> find_first_even_opt(const std::vector<int>& vec) {
	for (int num  : vec) {
		if (num % 2 == 0) {
			return num;
		}
	}
	return std::nullopt;
}

int find_first_even(const std::vector<int>& vec) {
	for (int num: vec) {
		if (num % 2 == 0) {
			return num;
		}
	}
	return -1;
}

int main() {
	std::vector<int> numbers = {3,1,9,1,5};

	auto result = find_first_even_opt(numbers);
	if (result) {
		std::cout << "The fist even number is : " << *result << std::endl;
	} else {
		std::cout << "Even number not found by std::optional:" << std::endl; 
	}

	int result_int = find_first_even(numbers);
	if (result_int != -1) {
		std::cout << "The fist even number is: " << result_int << std::endl;
	} else {
		std::cout << "No even number found by sentinel value." << std::endl;
	}
	return 0;
}
