#include<iostream>
using namespace std;

void pet(int holidays){

	int working_days, time_played, hours, mins, difference;

	working_days=365-holidays;
	time_played=(working_days*63)+(holidays*127);

	if (time_played<30000){

		difference=30000-time_played;
		hours=difference/60;
		mins=difference%60;		

		cout<<"Tom sleeps well"<<endl;
		cout<<hours<<" hours and "<<mins<<" minutes less for play";	 		

	}

	if (time_played>30000){

		difference=time_played-30000;
		hours=difference/60;
		mins=difference%60;

		cout<<"Tom will run away"<<endl;
		cout<<hours<<" hours and "<<mins<<" minutes for play";
	}

}



main(){
	

	int holidays;

	cout<<"Holidays: ";
	cin>>holidays;

	pet(holidays);

}