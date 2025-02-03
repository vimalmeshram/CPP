#include<iostream>
using namespace std;
   class one{
   	int a, b;
   	public:
   		one(){
   			a=10;
   			b=20;
		   }
		   void disp(){
		   	cout<<a<<endl<<b<<endl;
		   }
		   ~one(){
			cout<<"Destructor executed";
		}
   };
   int main(){
   	one ob1, ob2;
   	ob1.disp();
   	ob2.disp();
   }
