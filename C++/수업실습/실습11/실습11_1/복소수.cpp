#include<iostream>
#include <new>
#include "Complex.hpp"
using namespace std;

Complex::Complex(){a =0; b=0;}
Complex::Complex(float a,float b){this->a = a; this->b= b;}
void Complex::print(){cout<<a<<"+"<<b<<"i"<<endl;}
Complex Complex::operator+(const Complex c){
	//or return *this;
	//this는 포인터 *this는 변수 
	//참조변수는 메모리가 할당되지 않은 변수
	return Complex(a+c.a,b+c.b);
	//새로운 객체를 생성하여 리턴하고 기존 객체의
	//값들은 수정되지 않는다. 
}
//객체 생성 후 임시객체 생성 후 리   
Complex Complex::operator-(const Complex c){return Complex(a-c.a,b-c.b);}
Complex Complex::operator*(const Complex c){return Complex(a*c.a-b*c.b,a*c.b+b*c.a);}

int main(){
	Complex a(10,5);
	Complex b(20,20);
	Complex c;

	c = a+b;
	c.print();
	c = a-b;
	c.print();
	c = a*b;
	c.print();
}

