#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	switch(num){
		case 0:
			cout<< "zero";
			break;
		case 1:
			cout<< "one";
			break;
		case 2:
			cout<< "two";
			break;
		case 3:
			cout<< "three";
			break;
		case 4:
			cout<< "four";
			break;
		default:
			cout<<"Not a number i know";
	} 
	//이상한 입력에 대한 예외처리 
}
