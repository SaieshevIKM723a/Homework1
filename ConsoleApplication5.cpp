#include <iostream>
int main() {
	using namespace std;
	float n1, n2, action;
	cout << "Enter number 1: ";
	cin >> n1;
	cout << "Enter number 2: ";
	cin >> n2;
	char math;
	cout << "Enter math symbol: ";
	cin >> math;
	if (math == '+')
		action = n1 + n2;
	else if (math == '-')
		action = n1 - n2;
	else if (math == '*')
		action = n1 * n2;
	else if (math == '/')
		action = n1 / n2;
	cout << "Result: " << action;
	
}