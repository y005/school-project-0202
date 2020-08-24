#include<iostream>
#include"sort.hpp"
#include<new>
using namespace std;

SortAlgorithm::SortAlgorithm(int* values,int num){
	this->values = new int[num];
	for(int i=0;i<10;i++){
		this->values[i] = values[i];
	}
}
SortAlgorithm::~SortAlgorithm(){
	delete[] values;
}
void SortAlgorithm::print(){
	for(int i=0;i<10;i++){
		cout<<values[i]<<" ";
	}
	cout<<endl;
}
void CountSort::sort(int r,int l){
	int c[9];//카운트 배열	
	int sort[10];//정렬 배열 
	
	for(int i=0;i<r-l+1;i++){
		int index = values[i]%10; 
		c[index] += 1;
	}
	for(int i=0;i<r-l+1;i++){
		c[i] += c[i-1];
	}
	for(int i=0;i<r-l+1;i--){
		int index = values[i]%10;
		c[index] -= 1; 
		sort[c[index]] = values[i]; 		
	}
}
CountSort::~CountSort(){
	delete [] values;
}
void QuickSort::sort(int l,int r){
	if(l>=r){return;}
	int m = partition(l,r);
	sort(l,m-1);
	sort(m+1,r);
}
int QuickSort::partition(int l,int r){
	int pivot = values[r];
	int lc = l;
	int rc = r-1;
	do{
		while(values[lc]<pivot){lc++;}
		while(values[rc]>pivot){rc--;}
		if(lc<rc){
			int tmp = values[lc];
			values[lc] = values[rc];
			values[rc] = tmp;
		}
		else{
			int tmp = pivot;
			values[r] = values[lc];
			values[lc] = tmp;
			return lc;
		}
	}while(true);
	return 0;
}

QuickSort::~QuickSort(){
	delete[] values;
}
