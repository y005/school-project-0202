#include <iostream>
using namespace std;
#include "header.hpp"

Complex::Complex() {
	a = 0; b = 0;
}

Complex::Complex(float a, float b) {
	this->a = a; this->b = b;
}

void Complex::print() {
	cout << a;
	if (b >= 0) cout << "+";
	cout << b << "i" << endl;
}
	
Complex Complex::operator+(const Complex x) {
	return Complex(a+x.a, b+x.b);
}

Complex Complex::operator-(const Complex x) {
	return Complex(a-x.a, b-x.b);
}

Complex Complex::operator*(const Complex x) {
	return Complex(a*x.a - b*x.b, a*x.b + b*x.a);
}

BigNumber::BigNumber() {
	for(int i = 0; i < 32; i++)	
		n[i] = '0';
}

BigNumber::BigNumber(const char* c) {
	for(int i = 0; i < 32; i++)	{
		if (c[i] < '0' || c[i] > '9') 
			throw InvalidDigit(); 
		n[i] = c[i];
	}
	
	if (c[32] != '\0')
		throw InvalidDigit();		
}

void BigNumber::print() {
	bool start = false;
	for (int i = 0; i < 32; i++) {
		if (!start && n[i] != '0') start = true;
		if (start) cout << n[i];
	}
	cout << endl;
}

BigNumber BigNumber::operator+(const BigNumber x) {
	int c = 0;
	BigNumber y;
	for(int i = 31; i >= 0; i--)	
		y.n[i] = addDigit(n[i], x.n[i], c);
		
	return y;
}

char BigNumber::addDigit(char a, char b, int &c) {
	int na = a - '0';
	int nb = b - '0';
	int nc = (na + nb + c)%10;
	c = (na + nb + c)/10;
	return (char)(nc + '0');
}
