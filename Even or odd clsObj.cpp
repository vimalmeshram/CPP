//Even or odd
#include<iostream>
using namespace std;
class evenOdd{
	int num;
	
	public:
		int set(){
			cout<<"Enter number: "<<endl;
			cin>>num;
			}
			int cal(){
				if(num%2==0){
					cout<<"Entered number is Even number";
				}else{
					cout<<"Entered number is odd number";
				}
			}
		
};
int main(){
	evenOdd obj;
	obj.set();
	obj.cal();
}

