#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string operation = "\0";
	double a,b;
	cin >> operation >> a >> b;
	if(operation=="+"){cout<<a+b;}
	if(operation=="-"){cout<<a-b;}
	if(operation=="*"){cout<<a*b;}
	if(operation=="/"){cout<<a/b;}		
}
