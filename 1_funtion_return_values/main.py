def find_first_even(numbers):
	for num in numbers:
		if num % 2 == 0:
			return num
	return None


numbers = [1,3,5,7,9]
result = find_first_even(numbers)
if result is not None:
	print("The first even number is", result)
else:
	print("No even number")
