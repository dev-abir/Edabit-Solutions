/* Problem-Task : This program will print return the sum of the absolute value of each element of an integer array.
 * Problem Link : https://edabit.com/challenge/jBFpjEG3tvsjTZbD4
*/

#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

int main() {
	array<int, 5> arr = {5, 58, -98, -447, 12};
	int sum = 0;
	for (const int& x : arr) {
		sum += abs(x);
	}
	cout << sum << '\n';
	return 0;
}