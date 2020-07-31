class Complex{
	float a,b;
	public:
		Complex();
		Complex(float a,float b);
		void print();
		Complex operator+(const Complex c);
		Complex operator-(const Complex c);
		Complex operator*(const Complex c);
};
