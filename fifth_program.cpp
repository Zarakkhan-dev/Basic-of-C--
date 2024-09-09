#include<iostream>

using namespace std ;

int main(){
	char category ;
	
	cout << "Enter Your Category : ";
	cin >> category;
	
	switch(category){
		case 'a':
			cout << "You Fall in A category";
			break;
		case 'b':
			cout << "You Fall in B category";
			break;
		case 'c':
			cout << "You Fall in C category";
			break;		
		case 'd':
			cout << "You Fall in D category";
			break;		
		case 'e':
			cout << "You Fall in E category";
			break;		
		case 'f':
			cout << "You Fall in F category";
			break;		
		case 'g':
			cout << "You Fall in G category";
			break;		
		case 'h':
			cout << "You Fall in H category";
			break;		
		case 'i':
			cout << "You Fall in I category";
			break;		
		case 'j':
			cout << "You Fall in J category";
			break;
		default :
			cout << "Your Category Not Found" ;
			break;
	}

}
