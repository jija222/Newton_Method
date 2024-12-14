#include <iostream>
using namespace std;

const double exactNum = 3.2300;

double func(double x) {
	return 3 * x - (4*log(x)) - 5;
}

double derivative(double x) {
	return 3 - (4 / x);
}

double newNum(double previousNum) {
	return previousNum - (func(previousNum) / derivative(previousNum));
}

int main() {
	for (double i = 4; i >= exactNum; i = newNum(i)) {
		std::cout << i << endl;
	}
	return 0;
}

