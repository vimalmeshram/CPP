#include<iostream>
using namespace std;
class mul{
	int a, b, res;
	
	public:
		int set(){
			cout<<"Enter value of a: "<<endl;
			cout<<"Enter value of b: "<<endl;
			cin>>a>>b;
		}
		int cal(){
			res= a*b;
		}
		int dis(){
			cout<<"Multiplication of two number a and b : "<<res;
		}
};
int main(){
	mul obj;
	obj.set();
	obj.cal();
	obj.dis();
}

