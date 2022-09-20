/**
*
* @Name : TinyCalculator/main.cpp
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-05-17
* @Released under : https://github.com/BaseMax/TinyCalculator/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/TinyCalculator
*
**/
#include "main.hpp"

void parseAddition() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a + b << endl;
}

void parseSubtraction() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a - b << endl;
}

void parseMultiplication() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	cout << a * b << endl;
}

void parseDivision() {
	float a=0, b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	if(b != 0) {
		cout << a / b << endl;
	}
}

void parseExponentiation() {
	float a=0, r=0;
	int b=0;
	cout << "Enter the first value: ";
	cin >> a;
	cout << "Enter the second value: ";
	cin >> b;
	r=pow(a, b);
	cout << r << endl;
}

void parseSquareRoot() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sqrt(a);
	cout << r << endl;
}

void parseSine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=sin(a);
	cout << r << endl;
}

void parseCosine() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=cos(a);
	cout << r << endl;
}

void parseTangent() {
	float a=0, r=0;
	cout << "Enter the value: ";
	cin >> a;
	r=tan(a);
	cout << r << endl;
}

void help() {
	cout << "\n\n";
	cout << " Tiny Calculator ------------------------------\n";
	cout << "\t a\t\t Addition of two number\n";
	cout << "\t m\t\t Subtraction of two number\n";
	cout << "\t u\t\t Multiplication of two number\n";
	cout << "\t d\t\t Division of two number\n";
	cout << "\t p\t\t Exponentiation of two number\n";
	cout << "\t r\t\t SquareRoot of a number\n";
	cout << "\t s\t\t Sine of anumber\n";
	cout << "\t c\t\t Cosine of anumber\n";
	cout << "\t t\t\t Tangent of a number\n";
	cout << "\t h\t\t Help\n";
	cout << "\t e\t\t Exit\n";
	cout << "\n\n";
}

void error() {
	cout << "Error : Input is anonymous!\n";
}

int main(int argc, char** argv) {
	unsigned char type;
	bool flag=true;
	while(flag) {
		cout << "------------------\n(h) For help\n(e) To exit\nEnter Your type: ";
		cin >> type;
		switch(type) {
			case 'a':
				parseAddition();
			break;
			case 'm':
				parseSubtraction();
			break;
			case 'u':
				parseMultiplication();
			break;
			case 'd':
				parseDivision();
			break;
			case 'p':
				parseExponentiation();
			break;
			case 'r':
				parseSquareRoot();
			break;
			case 's':
				parseSine();
			break;
			case 'c':
				parseCosine();
			break;
			case 't':
				parseTangent();
			break;
			case 'h':
				help();
			break;
			case 'e':
				flag=false;
			break;
			default:
				error();
			break;
		}
	}
	return 0;
}
