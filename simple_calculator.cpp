#include <iostream>
#include <cmath>

using namespace std;

double calculatorFunction(double a, double b, char op);

int main()
{	
	double num1 = 0.0;
	double num2 = 0.0;

	char choice = '+';

	cout << "Calculator! Enter 2 numbers and operator (Enter 'E' for operator to end the program) \n";
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Operator (+ -  *  /  ^ ): ";
	cin >> choice;

	while (choice !='E')
	{
		cout << "Result: " << calculatorFunction(num1, num2, choice) <<endl;

		cout << "Number 1: ";
		cin >> num1;
		cout << "Number 2: ";
		cin >> num2;
		cout << "Operator (+ -  *  /  ^ ): ";
		cin >> choice;
	}

}

double calculatorFunction(double a, double b, char op)
{
	double result = 0.0;

	if (op == '+')
	{
		result = a + b;
	}
	else if (op == '-')
	{
		result = a - b;
	}
	else if (op == '*')
	{
		result = a * b;
	}
	else if (op == '/')
	{
		result = a / b;
	}
	else if (op == '^')
	{
		result = pow(a, b);
	}
	else
	{
		cout << "Error, please try again" << endl;
	}

	return result;
}