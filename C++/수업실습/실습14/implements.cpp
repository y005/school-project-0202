#include <iostream>
#include "header.hpp"
using namespace std;

class InvalidDigit{};
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

bool BigNumber::operator>(const BigNumber x) {
	int temp,temp1,temp2;
	for(int i = 0; i < 32; i++){
		temp1 = n[i];
		temp2 = x.n[i];
		temp = temp1 - temp2;
		if(temp){
			if(temp>0){			
				return true;
			}
			else{
				return false;
			}
		}
	}
	return false;//모두 같은 경우	
}
