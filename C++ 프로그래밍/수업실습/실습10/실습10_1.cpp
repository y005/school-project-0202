#include<iostream>
using namespace std;

class Date{
	int x,y;
	
	public:
		//기본 생성자 
		Date(){this->x=0; this->y=0;}
		//정수형 매개변수 2개를 받는 생성자 
		Date(int x,int y){this->x = x;this->y = y;}
		//복사 생성자  
		Date(Date& d){d.x =this->x; d.y = this->y;}
		int getX(){ return x;}	
		int getY(){ return y;}	
		//연산자 오버로딩  
		Date& operator=(Date& d){
			this->x = d.x;
			this->y = d.y;
		}
};

int main(){	
	//C++의 객체 생성 방법 
	Date d(10,10);   
	//new를 받는 변수는 포인터 변수이다. 
	cout<<d.getX()<<" "<<d.getY()<<endl;	
}
