#include<iostream>
#include<new>
using namespace std;

class Dummy{
	int k;	
	public:
		static int n;
		Dummy(){k=0;n++;}
		static void calculate(void){cout<<n+k;} 
		~Dummy(){n--;}
};

int Dummy::n=0;
//���� Ŭ������ ��ü���� �ϳ��� ������ ������ �� ���δ�.
 
int main(){
	
	Dummy.calculate();	
	//Ŭ���� �޼ҵ� 
	//n�� static������ k�� ��� ������ ���� ���� �� �ִ�
	//��ü�� ��� �ٷ� ȣ���� �����ϴ�
	//(��� �� �Լ� �ȿ��� ��ü ��������� �������� �ʾƾ� �Ѵ�) 
	
	Dummy a;
	a.calculate();
	 
	Dummy b[5];
	Dummy* c = new Dummy;
	cout<<a.n<<endl;
	delete c;
	cout<<Dummy::n<<endl;
	return 0;
}
