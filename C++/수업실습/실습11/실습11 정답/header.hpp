class Complex {
	float a, b;
public :
	Complex();
	Complex(float a, float b);
	void print();
	Complex operator+(const Complex x);
	Complex operator-(const Complex x);
	Complex operator*(const Complex x);
};

class InvalidDigit {
};

class BigNumber {
	char n[32];
	char addDigit(char a, char b, int &c);
public :
	BigNumber();
	BigNumber(const char* c);
	void print();
	BigNumber operator+(const BigNumber x);
};
