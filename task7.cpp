#include<iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip){

	float totalPrice, afterDiscount;

	totalPrice=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);

	afterDiscount=totalPrice*0.8;	

	if (totalPrice<=200){
	
		cout<<"Original Price: $"<<totalPrice<<endl;
		cout<<"No discount applied.";	
	
	}


	if (totalPrice>200){

		cout<<"Original Price: $"<<totalPrice<<endl;
		cout<<"Price after Discount: $"<<afterDiscount;

	}

	
}


main(){

	int redRose, whiteRose, tulip;

	cout<<"Red Rose: ";
	cin>>redRose;

	cout<<"White Rose: ";
	cin>>whiteRose;

	cout<<"Tulips: ";
	cin>>tulip;

	flowerShop(redRose, whiteRose, tulip);


}