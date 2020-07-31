#include<iostream>
#include"sort.hpp"
using namespace std;

int main(){
	int arr[] = {1,3,12,4543,221,34,6,43,56,7};
	QuickSort mysort(arr,10);
	mysort.print();
	mysort.sort(0,9);
	mysort.print();
}
