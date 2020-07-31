#include<iostream>
using namespace std;

class BigNumber{
	char num[32];//숫자값 보관 
	
	public: 
		BigNumber(char* arr){
			for(int i=0;i<32;i++){
				num[i] = arr[i]-48;
				//아스키 코드 값 숫자 변환 
			}
		}
		BigNumber(){
			for(int i=0;i<32;i++){
				num[i] = 0;
			}
		}
		
		//객체a를 더한 후 그 값과 똑같은 임시 객체 리턴
		//(객체변수로 저장 필수) 
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
		
		//객체a를 빼준 후 그 값과 똑같은 임시 객체를 리턴
		//(객체변수로 저장필수)		
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
	
	c= a+b;//더해진 객체와 a객체 
	c.print();
	d= a-b-b;//이미 더해져서 한 번 더 빼 주기 
	d.print();
}
