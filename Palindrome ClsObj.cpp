//Reverse number
#include<iostream>
using namespace std;
class palindrome{
	int num;
	public:
	void set(){
		cout<<"Enter number: ";
		cin>>num;
	}
	int cal(){
		int rev=0, temp=num;
		while(temp>0){
			rev=rev*10 + temp%10;
			temp/=10;
		}
		return rev;
		}
		
	
	void disp(){
		if(num==cal()){
			cout<<"Entered number is Palindrome";
		}
		else
		{
			cout<<"Entered number is not Palindrome";
		}
	}
};
int main(){
	palindrome obj;
	obj.set();
	obj.cal();
	obj.disp();
}
