#include<iostream>
using namespace std;
class one{
	int a, b;
	public:
		one(int x, int y){
			a=x;
			b=y;
		}
		one(one &ob1){
			a=ob1.a;
			b=ob1.b;
		}
		void disp(){
			cout<<a<<endl<<b<<endl;
		}
};
int main(){
	one ob1(10, 20);
	one ob2(ob1);
	ob1.disp();
	ob2.disp();
}
