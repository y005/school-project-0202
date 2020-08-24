#include<iostream>
#include<new>
using namespace std;

class CRectangle{
	int w,h;
	public:
		void setValue(int a,int b);
		int area(void){return w*h;};
};

void CRectangle::setValue(int a, int b){
	this->w = a;
	this->h =b;
}

//동적할당 받은 객체의 참조법 
int main(){
	CRectangle a;
	//변수 객체는 스택에 저장 
	
	CRectangle *b,*c;
	//포인터 변수는 스택에 저장
	//객체 데이터들은 힙에 저장됨 
	
	CRectangle * d = new CRectangle[2];
	//객체를 저장하는 배열의 첫주소값이 저장 
	//포인터 변수는 스택에 저장
	//객체 데이터들은 힙에 저장됨 
	
	b = new CRectangle;
	c = &a;
	//c에서는 a의 주소값이 저장된다 
	//주소값이 가르치는 위치는 스택에 있다
	 
	a.setValue(1,2);
	//int 2개의 메모리 공간이 생성  
	//8바이트(객체데이터)가 스택에 저장 
	
	b->setValue(3,4);
	//동적할당 받은 객체의 주소값 저장을 하는 메모리 공간이 생성 
	//4바이트(주소값)가 힙에 저장
	//4바이트(객체 데이터)가 스택에 저장 
	
	d->setValue(5,6);
	//배열 첫주소 
	d[1].setValue(7,8);
	//배열 2번째 변수
	 
	cout<<a.area()<<endl;
	//변수의 메소드 .연산자로 접근 
	cout<<b->area()<<endl;
	//객체주소값은 ->연산자로 접근 
	cout<<c->area()<<endl;
	
	cout<<d[0].area()<<endl;
	cout<<d[1].area()<<endl;
	
	delete[] d;
	delete b;
	//힙에 있는 메모리를 수동으로 해제 
}

