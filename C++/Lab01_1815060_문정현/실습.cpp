#include<iostream>
using namespace std;
int main(){
	int num[3];
	cin>>num[0]>>num[1]>>num[2];
	int small,big,mid = 0;	
	for(int i=0;i<3;i++){
		if(num[small]>num[i]){small = i;}
		if(num[big]<num[i]){big = i;}
	}
	if(small==big){mid = 0;}
	else{mid = 3-small-big;} 
	cout<<num[small]<<" "<<num[mid]<<" "<<num[big];
}
