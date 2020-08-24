#include <iostream>
using namespace std;
#include "header.hpp"

int main() {
	Complex a(10, 5), b(20, 10);
	Complex c;
	c = a + b;
	c.print();
	c = a - b;
	c.print();
	
	BigNumber d("00000000000000012000000000000000");
	BigNumber e("00000000000000009000000000000000");
	BigNumber f;
	f = d + e;
	f.print();
}
