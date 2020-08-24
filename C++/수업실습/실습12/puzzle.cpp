#include<iostream>
#include<stdlib.h> /*srand,rand*/
#include<time.h> /*time*/
#include"puzzle.hpp"
using namespace std;
class ERROR{};
enum class direction{east,west,north,south};

Puzzle::Puzzle(){
	int arr[9] = {1,2,3,8,0,4,7,6,5};
	for(int i=0;i<9;i++){num[i] = arr[i];}
	zero = 4;
}
void Puzzle::move(){
	int ans;
	cout<<"east(0),west(1),north(2),south(3)";
	cin>>ans;
	switch(ans){
		case 0:
			if((zero==2)||(zero==5)||(zero==8)){throw ERROR();}	
			swap(zero,zero+1);
			zero++; 
			break;
		case 1:
			if((zero==0)||(zero==3)||(zero==6)){throw ERROR();}				
			swap(zero,zero-1);
			zero--;
			break;
		case 2:
			if((zero==0)||(zero==1)||(zero==2)){throw ERROR();}	
			swap(zero,zero-3);
			zero -= 3;
			break;
		case 3:
			if((zero==6)||(zero==7)||(zero==8)){throw ERROR();}	
			swap(zero,zero+3);
			zero += 3;
			break;
		default: 
			throw ERROR();
		}
}

void Puzzle::shuffle(){
	int j,k;
	srand(time(NULL));
	for(int i=0;i<9;i++){
		j =rand()%9;
		k =rand()%9;
		swap(j,k);
	}
	for(int i=0;i<9;i++){if(num[i]==0){zero =i;}}
}
bool Puzzle::isDone(){
	int arr[9] = {1,2,3,8,0,4,7,6,5};
	bool result = true;
	for(int i=0;i<9;i++){if(num[i] != arr[i]){result = false;}}
	return result;
}
void Puzzle::print(){
	int index=0;
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){cout<<num[index++];}
		cout<<endl;
	}
	cout<<endl;
}

void Puzzle::swap(int a,int b){
	int temp;
	temp = num[b];
	num[b] = num[a];
	num[a] = temp;
}
