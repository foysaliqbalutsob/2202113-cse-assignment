#include<iostream>
using namespace std;

class basic{
public :
int a;
int b;
void getvalue(void)
{
    a=5;
    b=9;
}
void putvalue(void){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
};
int main(){
    basic x;
    x.getvalue();
    x.putvalue();
    return 0;
}