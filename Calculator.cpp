#include <iostream>


using namespace std;
using std::cout; using std::cin; using std::endl;

int main() {
	
	char n;
	float num1, num2;

	cout << "Enter the operation you want to perfom. Ex(5 + 1): ";
	cin >> num1 >> n >> num2;
	

	switch (n) {
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

		case '/':
			cout << num1 / num2;
			break;

		case '*':
			cout << num1 * num2;
			break;

		default:
			cout << "No such operator exist!, Please try again.";
			break;
	}

}