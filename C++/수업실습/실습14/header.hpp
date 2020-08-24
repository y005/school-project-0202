class BigNumber {
	char n[32];
	char addDigit(char a, char b, int &c);
	public :
		BigNumber();
		BigNumber(const char* c);
		void print();
		BigNumber operator+(const BigNumber x);
		bool operator>(const BigNumber x);
};	
