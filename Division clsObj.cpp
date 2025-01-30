#include<iostream>
using namespace std;
class div{
	int a, b, res;
	
	public:
		int set(){
			cout<<"Enter value of a: "<<endl;
			cout<<"Enter value of b: "<<endl;
			cin>>a>>b;
		}
		int cal(){
			res= a/b;
		}
		int dis(){
			cout<<"Division of two number a and b : "<<res;
		}
};
int main(){
	div obj;
	obj.set();
	obj.cal();
	obj.dis();
}

