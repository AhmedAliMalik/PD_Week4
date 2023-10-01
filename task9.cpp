#include<iostream>
using namespace std;


void tpChecker(int people, int tp){

	int days, sheets;

	sheets=tp*500;

	days=sheets/(57*people);

	if (days<=14){

		cout<<"Your TP will only last "<<days<<" days, buy more!";


	}

	if (days>14){

		cout<<"Your TP will last "<<days<<" days, no need to panic!";


	}
}


main(){

	int people, tp;

	cout<<"Number of people in the household: ";
	cin>>people;

	cout<<"Number of rolls of TP: ";
	cin>>tp;


	tpChecker(people, tp);

}