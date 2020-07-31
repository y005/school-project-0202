#include<iostream>
#include<new>
using namespace std;

int main(){
	int i,n;
	int * p;
	
	cout<<"How many numbers would you like to type? ";
	cin>>i;
	//동적할당으로 배열의 갯수를 변수로 선택가능하다 
	p = new(nothrow) int [i];
	//할당의 리턴값은 포인터 변수이다  
	if(p==0){
		cout<<"Error: memory could not be allocated";
	}
	else{
		for(n=0;n<i;n++){
			cout<<"Enter number: ";
			cin>> p[n];
		}
		cout<<"You have entered";
		for(n=0;n<i;n++){
			cout<<p[n]<<",";
			
		}
		delete[] p;
	}
	return 0;
}
