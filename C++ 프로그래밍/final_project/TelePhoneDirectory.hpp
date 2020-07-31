#include<iostream>
#include<string>
using namespace std;
class TelephoneRecord{
	string name;
	string phone;
	friend class TelephoneDirectory;
	public:
		TelephoneRecord();
		string getName();
		string getPhone();
		void setName(string name);	
		void setPhone(string phone);	
		~TelephoneRecord();
};

class TelephoneDirectory{
	TelephoneRecord* record;
	public:
		static string file;
		static int size;
		TelephoneDirectory();
		void saveDirectory(string filename);
		void loadDirectory(string filename);
		void addRecord(string name,string phone);
		void updateRecord(int index,string name,string phone);
		void deleteRecord(int index);
		TelephoneRecord getRecord(int index);
		int searchbyName(string name);
		int searchbyPhone(string phone);
		~TelephoneDirectory();
};
