#include<iostream>
using namespace std;
class add{
	int a, b, res;
	
	public:
		int set(){
			cout<<"Enter value of a: "<<endl;
			cout<<"Enter value of b: "<<endl;
			cin>>a>>b;
		}
		int cal(){
			res= a+b;
		}
		int dis(){
			cout<<"Addition of two number a and b : "<<res;
		}
};
int main(){
	add obj;
	obj.set();
	obj.cal();
	obj.dis();
}

