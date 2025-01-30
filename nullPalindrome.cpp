// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class palindrome{
    int num, temp,rem;
    public: 
    void set(){
        cout<<"Enter number: ";
        cin>>num;
    }
    int cal(){
        temp=num;
        int rev=0;
        while(temp>0){
            rem=temp%10;
            rev=temp*10 + rem;
            temp=temp/10;
        }
    return rev;
    }
    int disp(){
        if(num==cal()){
            cout<<"it is palindrome no.";
        }else{
            cout<<"not palindrome";
        }
        return 0;
    }
};
int main() {
    palindrome obj;
    obj.set();
    obj.cal();
    obj.disp();
    return 0;
}
