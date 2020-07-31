#include<iostream>
using namespace std;

class BigNumber{
	char num[32];//���ڰ� ���� 
	
	public: 
		BigNumber(char* arr){
			for(int i=0;i<32;i++){
				num[i] = arr[i]-48;
				//�ƽ�Ű �ڵ� �� ���� ��ȯ 
			}
		}
		BigNumber(){
			for(int i=0;i<32;i++){
				num[i] = 0;
			}
		}
		
		//��üa�� ���� �� �� ���� �Ȱ��� �ӽ� ��ü ����
		//(��ü������ ���� �ʼ�) 
		BigNumber operator+(BigNumber& b){
			int next=0;
			for(int i =31;i>-1;i--){
				if(!next){
					num[i] += b.num[i];
				}
				if(next){
					int temp = 1+b.num[i];
					num[i] += temp;
					next = 0;
				}
				if(num[i]>9){
					num[i] -= 10;
					next = 1;					
				}
			}
			return *this;
		}
		
		//��üa�� ���� �� �� ���� �Ȱ��� �ӽ� ��ü�� ����
		//(��ü������ �����ʼ�)		
		BigNumber operator-(BigNumber& b){
			int next=0;
			for(int i =31;i>-1;i--){
				if(next){
					num[i] -= 1;   
					next = 0;
				}
				if(num[i]<b.num[i]){
					num[i] += 10;	
					next = 1;
				}
				num[i] -= b.num[i];
			}
			return *this;
		}
		
		void print(){
			for(int i=0;i<32;i++){
				int temp = num[i];
				cout<<temp;
			}
			cout<<endl;
		}
};

int main(){
	BigNumber a("00000000000000012000000000000000");
	BigNumber b("00000000000000009000000000000000");
	BigNumber c;
	BigNumber d;
	
	c= a+b;//������ ��ü�� a��ü 
	c.print();
	d= a-b-b;//�̹� �������� �� �� �� �� �ֱ� 
	d.print();
}
