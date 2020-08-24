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
//같은 클래스인 객체들이 하나의 정보를 공유할 때 쓰인다.
 
int main(){
	
	Dummy.calculate();	
	//클래스 메소드 
	//n은 static이지만 k는 멤버 변수라서 값이 나올 수 있다
	//객체가 없어도 바로 호출이 가능하다
	//(대신 그 함수 안에서 객체 멤버변수를 참조하지 않아야 한다) 
	
	Dummy a;
	a.calculate();
	 
	Dummy b[5];
	Dummy* c = new Dummy;
	cout<<a.n<<endl;
	delete c;
	cout<<Dummy::n<<endl;
	return 0;
}
