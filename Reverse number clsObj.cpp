//Reverse number
#include<iostream>
using namespace std;
class reverse{
	int num;
	public:
	void set(){
		cout<<"Enter number: ";
		cin>>num;
	}
	int cal(){
		int rev=0, temp=num;
		while(temp>0){
			rev=rev*10+temp%10;
			temp/=10;
		}
		return rev;
	}
	void disp(){
		cout<<"Original number: "<<num<<endl;
		cout<<"Reverse form of original number: "<<cal();
	}
};
int main(){
	reverse obj;
	obj.set();
	obj.cal();
	obj.disp();
}
