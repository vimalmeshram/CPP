#include<iostream>
using namespace std;
int main(){
	int sellPrice, costPrice, profitOrloss;
	
	cout<<"Enter Cost Price of product: "<<endl;
	cin>>costPrice;
	cout<<"Enter selling Price of product: "<<endl;
	cin>>sellPrice;
	if(sellPrice>costPrice){
		profitOrloss=sellPrice-costPrice;
		cout<<"Profit of Rs."<<profitOrloss;
	}
	else if(costPrice>sellPrice){
		profitOrloss= costPrice-sellPrice;
		cout<<"Loss of Rs."<<profitOrloss;
	}
	else{
		cout<<"No Profit & No Loss";
	}
}
