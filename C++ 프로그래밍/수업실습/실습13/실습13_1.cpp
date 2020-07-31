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
	daughter a(0);//부모생성자를 지정안해서 디폴트 생성자로 선택 
	son b(0);//부모생성자 명시해서 오버로딩 생성자로 선택 
	return 0;
}
