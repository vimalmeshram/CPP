#include<iostream>
using namespace std;
   class one{
  int a, b, res;
  public:
  void set(){
  	cout<<" Enter value of a & b";
  	cin>>a>>b;
  }
  void calc(){
  	res= a+b;
  }
  void disp(){
  	cout<<res;
  }
  
  
  };
  int main(){
  	one ob;
  	ob.set();
  	ob.calc();
  	ob.disp();
  }
