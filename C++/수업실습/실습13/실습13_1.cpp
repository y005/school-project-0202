#include<iostream>
using namespace std;

class mother{
	public:
		mother(){
			cout<<"mother: no parameter\n";
		}
		mother(int a){
			cout<<"mother: int parameter\n";
		}	
};
class daughter: public mother{
	public:
		daughter(int a){
			cout<<"daughter: int parameter\n";
		}
};
class son: public mother{
	public:
		son(int a) : mother(a){
			cout<<"son: int parameter\n";
		}
};
int main(){
	daughter a(0);//�θ�����ڸ� �������ؼ� ����Ʈ �����ڷ� ���� 
	son b(0);//�θ������ ����ؼ� �����ε� �����ڷ� ���� 
	return 0;
}
