#include<iostream>

using namespace std ;
class Base{
	public :
		virtual void display(){};
};

class Derived:public Base{
	public:
	void display(){
		cout << "Derived Class";
	}
};
int main(){
	Base *base;
	
	Derived derived ;
	
	base = &derived;
	
	base->display();
}
