#include <iostream>
#include <set>

using namespace std;

void reverse(string input);
void largest(int n1, int n2, int n3);
int factorial(int number);
int fibonacci(int number);

int main() {
	int result = 0;
	string input;

	cout << "Type a word: ";
	cin >> input;

	reverse(input);

	int n1, n2, n3;

	cout << "Type 3 numbers one at a time: ";
	cin >> n1 >> n2 >> n3;

	largest(n1, n2, n3);

	int num = 0;

	cout << "What number do you want a factorial of? ";
	cin >> num;

	result = factorial(num);

	cout << result << "\n";
	
	int sequence = 0;

	cout << "Which nth entry of fibonacci number do you want? ";
	cin >> sequence;

	result = fibonacci(sequence);
	cout << result << endl;
}

void reverse(string input) {
	for (int i = input.length(); i > -1; i--) {
		cout << input[i];
	}

	cout << "\n";
}

void largest(int n1, int n2, int n3) {
	set<int> nums;

	nums.insert(n1);
	nums.insert(n2);
	nums.insert(n3);

	set<int>::iterator it = nums.cend();
	it--;
	cout << *it << endl;
}

int factorial(int number) {

	if (number == 0 || number == 1) {
		return 1;
	}

	return number * factorial(number - 1);
}

int fibonacci(int number) {
	int result = 0;
	int nextNumber = 1;
	int lastNumber = 1;

	if (number == 1 || number == 2)
		return 1;
	else if (number > 2) {
		do {
			result = nextNumber + lastNumber;
			lastNumber = nextNumber;
			nextNumber = result;
			number--;

		} while (number != 2);
	}

	return result;
}