#include<iostream>
using namespace std;

void calculation(string country, float price){

	float after_discount;

	if (country=="Pakistan"){
	
		after_discount=price*0.95;

		cout<<"Final ticket price after discount: $"
		<<after_discount
		<<endl;
	
	}

	if (country=="Ireland"){
	
		after_discount=price*0.90;

		cout<<"Final ticket price after discount: $"
		<<after_discount
		<<endl;
	
	}

	if (country=="India"){
	
		after_discount=price*0.80;

		cout<<"Final ticket price after discount: $"
		<<after_discount
		<<endl;
	
	}

	if (country=="England"){
	
		after_discount=price*0.70;

		cout<<"Final ticket price after discount: $"
		<<after_discount
		<<endl;
	
	}

	if (country=="Canada"){
	
		after_discount=price*0.55;

		cout<<"Final ticket price after discount: $"
		<<after_discount
		<<endl;
	
	}



}


main(){

	

		string country;
		float price;
	
		
		cout<<"Enter the country's name: ";
		cin>>country;

		cout<<"Enter the ticket price in dollars: $";
		cin>>price;

		calculation(country,price);

	


}