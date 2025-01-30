//positive and negative integer
#include<iostream>
using namespace std;
class isNum{
	int num;
	public:
	void set(){
		cout<<"Enter any number: ";
		cin>>num;
	}
	void cal(){
	if(num>0){
		cout<<"Entered number is Positive integer";
	}
	else if(num<0){
	cout<<"Entered number is Negative integer";
	}
	else{
		cout<<"You entered Zero";
	}
	}
};
int main(){
	isNum obj;
	obj.set();
	obj.cal();
}
