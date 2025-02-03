#include<iostream>
using namespace std;
class one{
	int a, b;
	int *ptr;
	public:
		one(int x, int y, int z){
			a=x;
			b=y;
			ptr = new int;
			*ptr=z;
		}
		void disp(){
			cout<<a<<endl<<b<<endl<<*ptr<<endl;
		}
		~one(){
			cout<<"Destructor executed";
		}		
};

int main(){
	one ob1(10, 20, 30);
	ob1.disp();
}
