#include<iostream>
using namespace std;

class CPolygon{
	protected:
		int width,height;
	public:
		void setValue(int a, int b){
			width = a;
			height = b;
		}
		virtual int area(){
			return (0);
		}
};
class COutput{
	public:
		void output(int i){
			cout<<i<<endl;
		};
};
class CRectangle: public CPolygon,public COutput{
	public:
		int area(){
			return width*height;
		}
};
class CTriangle: public CPolygon,public COutput{
	public:
		int area(){
			return width*height/2;
		}
};
int main(){
	CRectangle r1;
	CTriangle t1;
	CPolygon p1;
	CPolygon* pp1 = &r1;	
	CPolygon* pp2 = &t1;	
	CPolygon* pp3 = &p1;
	pp1->setValue(4,5);//������ Ÿ�ӿ� �����Ǵ� �޼ҵ� �Լ� 
	pp2->setValue(4,5);
	pp3->setValue(4,5);
	cout<<pp1->area()<<endl;//��Ÿ�ӿ� �����Ǵ� �޼ҵ� �Լ� 
	cout<<pp2->area()<<endl;
	cout<<pp3->area()<<endl;
	r1.output(r1.area());
	t1.output(t1.area());
}
