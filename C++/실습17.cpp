#include<iostream>
#include<string> 
#include<fstream>
#include<vector>
using namespace std;

class temp{
	int hour;
	double time;
	public:
		temp(int h,double t){
			int hour=h;
			double time=t;
		}
};
int main(){
	cout<<"enter";
	string iname;
	cin>>iname;//열 파일이름  
	ifstream ist{iname};
	vector<temp> v;
	//현재 디렉터리(path정보를 추가로 입력하지 않을 경우 초기 위치값) 
	if(!ist){cout<<"can't open input file"<<iname;} 
	while(ist>>){	
		v.push_back(tmp);
	}
	cin>>iname;//열 파일이름 
	outstream ost{iname};
	ost<<v;
	if(!ist){cout<<"can't open output file"<<iname;} 
}
