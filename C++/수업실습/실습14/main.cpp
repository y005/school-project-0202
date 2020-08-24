#include<iostream>
#include "header.hpp"
using namespace std;

template <class T>
class mypair{
	T a,b;
	public:
		mypair(T first, T second){
			a=first;
			b=second;
		}
		T getmax(){
			T retval;
			retval = a>b? a:b;
			return retval;
		}
};

template <>
class mypair<BigNumber>{
	BigNumber a,b;
	public:
		mypair(BigNumber first, BigNumber second){
			a=first;
			b=second;
		}
		BigNumber getmax(){
			BigNumber retval;
			retval = a>b? a:b;
			return retval;
		}
};

int main() {

	mypair<BigNumber> myobject(BigNumber("00000000000000000012000000000000"), BigNumber("00000000000000000015000000000000")); 
	BigNumber bigger = myobject.getmax();
	bigger.print();

	return 0;

};
