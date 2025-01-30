#include<iostream>
using namespace std;
class one{
	int id;
	char name[20];
	char mob[20];
	public:
		void set();
		void disp();
};
void one::set(){
	cout<<"Enter id name mobile number";
	cin>>id>>name>>mob;
}
void one::disp(){
	cout<<id<<name<<mob;
}
int main(){
	one ob[3];
	for(int i=0;i<3;i++){
		ob[i].set();
		
	}
	for(int i=0;i<3;i++){
		ob[i].disp();
	}
}
