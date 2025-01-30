#include<iostream>
using namespace std;
int main(){
	float phy, che, bio, math, computer;
	float percentage, total;
	char grade;
	cout<<"Enter marks of Physics: "<<endl;
	cin>>phy;
	cout<<"Enter marks of Chemistry: "<<endl;
	cin>>che;
	cout<<"Enter marks of Biology: "<<endl;
	cin>>bio;
	cout<<"Enter marks of Mathematics: "<<endl;
	cin>>math;
	cout<<"Enter marks of Computer: "<<endl;
	cin>>computer;
	total=phy+che+bio+math+computer;
	percentage=(total/500)*100;
	if(percentage<=80){
		grade='B';
	}
	else if(percentage<=90){
		grade='A';
	}
	else if(percentage<=70){
		grade='C';
	}
	else if(percentage<=60){
		grade='D';
	}
	else if(percentage<=40){
		grade='E';
	}
	else {
		grade='F';
	}
	cout<<"Percentage: "<<percentage<<endl;
	cout<<"Grade: "<<grade<<endl;
}
