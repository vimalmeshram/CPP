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
		cout<<"Enter id, name, mobile no.";
		cin>>id>>name>>mob;
	}
	void one::disp(){
		cout<<id<<name<<mob;
	}
	
	int main(){
		one ob;
		ob.set();
		ob.disp();
	}
