#include<iostream>
using namespace std;
class one{
	static int a;
	public:
		static void set(){
			a++;
		}
		void disp(){
			cout<<a<<endl;
		}
};
int one::a;
int main(){
	one ob1, ob2, ob3;
	ob1.disp();
	ob2.disp();
	ob3.disp();
	one::set();
	ob1.disp();
	ob2.disp();
	ob3.disp();
	
}
