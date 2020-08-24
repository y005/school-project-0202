#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<double> distance;
	
	int sum,greatest = 0;
	int smallest = 999999;
	int temp;
	
	while(cin>>temp){
		distance.push_back(temp);
	}
	
	for(int i =0;i<distance.size();i++){
		if(smallest>distance[i]){
			smallest = distance[i];
		}
		if(greatest<distance[i]){
			greatest = distance[i];
		}
		sum += distance[i];
	}
	
	cout<<"Smallest: "<<smallest
		<<" Greatest: "<<greatest
		<<" Sum: "<<sum
		<<" Mean: "<<sum/distance.size();
}
