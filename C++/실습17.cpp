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
	cin>>iname;//�� �����̸�  
	ifstream ist{iname};
	vector<temp> v;
	//���� ���͸�(path������ �߰��� �Է����� ���� ��� �ʱ� ��ġ��) 
	if(!ist){cout<<"can't open input file"<<iname;} 
	while(ist>>){	
		v.push_back(tmp);
	}
	cin>>iname;//�� �����̸� 
	outstream ost{iname};
	ost<<v;
	if(!ist){cout<<"can't open output file"<<iname;} 
}
