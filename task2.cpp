#include<iostream>
using namespace std;


void Reverse(string in){
	
	if (in=="true"){
		
		cout<<"false";		
	}

	if (in=="false"){
	
		cout<<"true";
	}

}

main(){

	string in;

	cout<<"Enter 'true' or 'false': ";
	cin>>in;
	
	Reverse(in);
	
	


}