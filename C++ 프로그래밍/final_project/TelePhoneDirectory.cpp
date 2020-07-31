#include<iostream>
#include<fstream>
#include<string>
#include<new>
#include"TelePhoneDirectory.hpp"
using namespace std;

TelephoneRecord::TelephoneRecord(string name,string phone){
	//복사
	this->name = name;
	this->phone = phone;
}
string TelephoneRecord::getName(){
	return name;
}
string TelephoneRecord::getPhone(){
	return phone;
}
void TelephoneRecord::setName(string name){
	//수정 
	this->name = name;
}	
void TelephoneRecord::setPhone(string phone){
	this->phone = phone;
}
TelephoneRecord::~TelephoneRecord(){}

TelephoneDirectory::TelephoneDirectory(string filename){
	file = filename;
	record = new TelephoneRecord[10]; 
	loadDirectory(file);
}
void TelephoneDirectory::saveDirectory(string filename){
	ofstream out(filename);
	string name;
	string phone;
	for(int i=0;i<size;i++){
		name =record[i].getName();
		phone =record[i].getPhone();
		out.write(name);
		out.write(phone);
	}
	out.close();
}
void TelephoneDirectory::loadDirectory(string filename){
	ifstream in(filename);
	string name;
	string phone;
	for(int i=0;;i++){
		if(!getline(in,name)){break;}
		getline(in,phone);
		record[i] = new TelephoneRecord(name,phone);
		size++;
	}
	in.close();
}
void TelephoneDirectory::addRecord(string name,string phone){
	record[size++] = new TelephoneRecord(name,string);
}
void TelephoneDirectory::updateRecord(int index,string name,string phone){
	record[index].setName(name);
	record[index].setPhone(phone);
}
void TelephoneDirectory::deleteRecord(int index){
	if((index>size-1)||(index<0)){
		cout<<"범위를 벗어났습니다"; 
		return; 
	}
	//지운 뒤 빈 배열 공간을 채우는 과정 
	string name;
	string phone; 
	for(int i=index+1; i<size;i++){
		name = record[i].getName();
		phone = record[i].getPhone();
		updateRecord(i-1,name,phone);
	}
	size--;
}
TelephoneRecord TelephoneDirectory::getRecord(int index){
	if((index>size-1)||(index<0)){
		cout<<"범위를 벗어났습니다"; 
		return; 
	}
	string name = record[index].getName();
	string phone = record[index].getPhone();
	return TelephoneRecord(name,phone);
}
int TelephoneDirectory::searchbyName(string name){
	for(int i=0;i<size;i++){
			if(!(record[i].getName().compare(name))){
				return i;
			}
	}
	cout<<"해당하는 이름은 존재하지 않습니다."<<endl; 
	return -1; 
}
int TelephoneDirectory::searchbyPhone(string phone){
	for(int i=0;i<size;i++){
		if(!(record[i].getPhone().compare(phone))){
				return i;
		}
	}
	cout<<"해당하는 번호는 존재하지 않습니다."<<endl; 
	return -1;
}
TelephoneDirectory::~TelephoneDirectory(){
	saveDirectory(file);
	TelephoneRecord tmp;
	for(int i =0;i<size;i++){
		tmp = record[i];
		delete tmp;
	} 
}
