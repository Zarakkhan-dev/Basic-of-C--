#include<iostream>

using namespace std;

int main(){
	int table ;
	
	cout << "Enter The table Number : ";
	cin >> table;
	for(int i = 1 ; i <= 10 ;i++){
		cout << table << " X " << i <<" = " << (i*table) << endl;
	}
	return 0;
}
