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

//�����Ҵ� ���� ��ü�� ������ 
int main(){
	CRectangle a;
	//���� ��ü�� ���ÿ� ���� 
	
	CRectangle *b,*c;
	//������ ������ ���ÿ� ����
	//��ü �����͵��� ���� ����� 
	
	CRectangle * d = new CRectangle[2];
	//��ü�� �����ϴ� �迭�� ù�ּҰ��� ���� 
	//������ ������ ���ÿ� ����
	//��ü �����͵��� ���� ����� 
	
	b = new CRectangle;
	c = &a;
	//c������ a�� �ּҰ��� ����ȴ� 
	//�ּҰ��� ����ġ�� ��ġ�� ���ÿ� �ִ�
	 
	a.setValue(1,2);
	//int 2���� �޸� ������ ����  
	//8����Ʈ(��ü������)�� ���ÿ� ���� 
	
	b->setValue(3,4);
	//�����Ҵ� ���� ��ü�� �ּҰ� ������ �ϴ� �޸� ������ ���� 
	//4����Ʈ(�ּҰ�)�� ���� ����
	//4����Ʈ(��ü ������)�� ���ÿ� ���� 
	
	d->setValue(5,6);
	//�迭 ù�ּ� 
	d[1].setValue(7,8);
	//�迭 2��° ����
	 
	cout<<a.area()<<endl;
	//������ �޼ҵ� .�����ڷ� ���� 
	cout<<b->area()<<endl;
	//��ü�ּҰ��� ->�����ڷ� ���� 
	cout<<c->area()<<endl;
	
	cout<<d[0].area()<<endl;
	cout<<d[1].area()<<endl;
	
	delete[] d;
	delete b;
	//���� �ִ� �޸𸮸� �������� ���� 
}

