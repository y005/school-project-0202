#include<iostream>
#include "puzzle.hpp"
using namespace std;

int main(){
	Puzzle f;
	f.print();
	
	f.move();
	f.print();
	
	f.shuffle();
	f.print();
	
	while(!f.isDone()){
		f.move();
		f.print();
	}
	cout<<"YOU WIN"<<endl;
}

