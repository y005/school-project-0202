#include<iostream>
#include"LinkedList.hpp"
using namespace std;

int main(){
 	LinkedList<int> intlist;
	LinkedList<double> doublelist;
 	for(int i = 0; i < 10; i++) {
 		intlist.push_back(i);
 		doublelist.push_back(i/2);
	}
 	intlist.insert(2, 100);
 	intlist.del(5);
 	doublelist.clear();
	for(int i = 0; i < intlist.size(); i++)
	{	cout << intlist.get(i) << endl;}
 	for(int i = 0; i < doublelist.size(); i++)
 	{	cout << doublelist.get(i) << endl;}
}
