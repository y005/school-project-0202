#include<iostream>
#include<string>
#include"TelePhoneDirectory.hpp"
using namespace std;

int main(){
 	TelephoneDirectory phoneDirectory("mydirectory.txt");
 	string name, phone;
 	for (int i = 0; i < 3; i++) {
 		cout << "Input name and phone number";
 		cin >> name >> phone;
 		phoneDirectory.addRecord(name, phone);
 	}
 	int index=1;
 	cout << "Input name to find";
 	cin >> name;
 	index = phoneDirectory.searchbyName(name);
 	cout << "Input a new phone number";
 	cin >> phone;
 	phoneDirectory.updateRecord(index, name, phone);
 	
	TelephoneRecord phoneRecord = phoneDirectory.getRecord(index);
 	cout << index << " " << phoneRecord.getName() << " "
 	<< phoneRecord.getPhone() << endl;
}
