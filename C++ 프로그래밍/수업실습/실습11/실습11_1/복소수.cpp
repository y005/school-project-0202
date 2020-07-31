#include<iostream>
#include <new>
#include "Complex.hpp"
using namespace std;

Complex::Complex(){a =0; b=0;}
Complex::Complex(float a,float b){this->a = a; this->b= b;}
void Complex::print(){cout<<a<<"+"<<b<<"i"<<endl;}
Complex Complex::operator+(const Complex c){
	//or return *this;
	//this�� ������ *this�� ���� 
	//���������� �޸𸮰� �Ҵ���� ���� ����
	return Complex(a+c.a,b+c.b);
	//���ο� ��ü�� �����Ͽ� �����ϰ� ���� ��ü��
	//������ �������� �ʴ´�. 
}
//��ü ���� �� �ӽð�ü ���� �� ��   
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

