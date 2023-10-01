#include<iostream>
using namespace std;

void calculation(int hrs, int mins){

    int hours_to_mins;

    hours_to_mins=hrs*60;

    if (hours_to_mins>mins){

        cout<<hrs;

    }

    if (mins>hours_to_mins){

        cout<<mins;

    }

}


main(){

    int hrs, mins;

    cout<<"Enter the number of hours: ";
    cin>>hrs;

    cout<<"Enter the number of minutes: ";
    cin>>mins;

    calculation(hrs, mins);

}