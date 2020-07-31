#include<iostream>
using namespace std;

template<class T, int N>
class mysequence{
	T memblock[N];
	public:
		void setmember(int x, T val){
			memblock[x] = val;
		}
		T getmember(int x){
			return memblock[x];
		}
};
int main(){
	mysequence <int,5> myints;
	mysequence <double,5> myfloats;
	myints.setmember(0,100);
	myfloats.setmember(3,3.1416);
	cout<<myints.getmember(0)<<endl;
	cout<<myfloats.getmember(3)<<endl;	
}
