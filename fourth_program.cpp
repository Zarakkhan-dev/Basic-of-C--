#include <iostream>

using namespace std;

int main(){
	
	string order = "right" ;
	
	cout << "Order you robot  : ";
	cin >> order;
	if (order == "right"){
		cout << "We wil go right";	
		cout << "Statement after Break";
	}
	else if(order == "left"){
		cout << "We wil go left";
	}
	else if(order == "up"){
		cout << "We wil go up";
	}
	else if(order == "bottom"){
		cout << "We wil go bottom";
	}
	else{
		cout << "Stay on your position";
	}
	return 0;
}
