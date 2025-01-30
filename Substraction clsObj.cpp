#include<iostream>
using namespace std;
class sub{
	int a, b, res;
	
	public:
		int set(){
			cout<<"Enter value of a: "<<endl;
			cout<<"Enter value of b: "<<endl;
			cin>>a>>b;
		}
		int cal(){
			res= a-b;
		}
		int dis(){
			cout<<"Substraction of two number a and b : "<<res;
		}
};
int main(){
	sub obj;
	obj.set();
	obj.cal();
	obj.dis();
}

