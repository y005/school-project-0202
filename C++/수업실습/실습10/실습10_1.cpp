#include<iostream>
using namespace std;

class Date{
	int x,y;
	
	public:
		//�⺻ ������ 
		Date(){this->x=0; this->y=0;}
		//������ �Ű����� 2���� �޴� ������ 
		Date(int x,int y){this->x = x;this->y = y;}
		//���� ������  
		Date(Date& d){d.x =this->x; d.y = this->y;}
		int getX(){ return x;}	
		int getY(){ return y;}	
		//������ �����ε�  
		Date& operator=(Date& d){
			this->x = d.x;
			this->y = d.y;
		}
};

int main(){	
	//C++�� ��ü ���� ��� 
	Date d(10,10);   
	//new�� �޴� ������ ������ �����̴�. 
	cout<<d.getX()<<" "<<d.getY()<<endl;	
}
