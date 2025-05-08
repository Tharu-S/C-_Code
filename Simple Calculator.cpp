#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int num1,num2;
	char choice;
	
for ( ; ; ) {

	cout << "Enter the operator:'+' or '-' or '*' or '/' \n If you want to exit please enter '@' \n";
	cin >> choice;
	
	switch (choice) {
		case '+':
			cout << "Enter number 1: ";
			cin >> num1;
			cout << "Enter number 2: ";
			cin >> num2;
			cout << "\t";
			cout << num1 << " + " << num2 << " = " << (num1+num2) << "\n\n";
			break;
		case '-':
			cout << "Enter number 1: ";
			cin >> num1;
			cout << "Enter number 2: ";
			cin >> num2;
			cout << "\t";
			cout << num1 << " - " << num2 << " = " << (num1-num2) << "\n\n";
			break;
		case '*':
			cout << "Enter number 1: ";
			cin >> num1;
			cout << "Enter number 2: ";
			cin >> num2;
			cout << "\t";
			cout << num1 << " * " << num2 << " = " << (num1*num2) << "\n\n";
			break;
		case '/':
			cout << "Enter number 1: ";
			cin >> num1;
			cout << "Enter number 2: ";
			cin >> num2;
			cout << "\t";
			if (num2==0) {
				cout << num1 << " / " << num2 << " = cannot be defined." << "\n\n";
				break;
			}
			else {
				cout << num1 << " / " << num2 << " = " << (float(num1)/ float(num2)) << "\n\n";
				break;
			}
		case '@':
			exit(0);
		default:
			cout << "Wrong operator \n\n ";
	}
	
}

return 0;
}

