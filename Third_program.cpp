#include<iostream>
using namespace std;
int main(){
	string name ; 
	int id , reg; 
	cout << "Enter your ID " ;
	cin >> id ;
	cout << "Enter your name : ";
	// Previous Knowledge 
	cin.ignore();
	getline(cin,name);
	
	// Latest Knowledge
	cin >> name;	
	cout << "Enter your Reg no : " ;
	
	cin >> reg ;
	cout <<"Id is " << id << " Your Name is " << name << " Your Registeration number is " << reg;
	return 0 ;
}
