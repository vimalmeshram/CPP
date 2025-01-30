#include<iostream>
using namespace std;
class armstrong{
	int num, temp, rem, sum;
	public:
	void set(){
		cout<<"Enter number: ";
		cin>>num;
	}
	void cal(){
		temp=num;
		while(temp!=0){
			rem=temp%10;
			sum+=rem*rem*rem;
			temp=temp/10;
		}
	}
	void disp(){
	
		if(sum==num){
			cout<<"Entered number is Armstrng number";
		}else{
			cout<<"Entered number is not Armstrng number";
		}
	}
	
};
int main(){
	armstrong obj;
	obj.set();
	obj.cal();
	obj.disp();
}
