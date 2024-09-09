#include<iostream>

using namespace std ;

int main(){
	
	int number = 70;
	string result  = number >90 ? "A grade": number > 80 ? "B grade" : number >60 ? "C grade" : number > 50 ? "D Grade" : "F Grade";
	
	cout << result;
}
