#include<iostream>
using namespace std;
int main(){
    const int p = 10;
    cout<<"p = "<<p<<endl;
    for(int i=1;i<=p;i++){
        int x =0;
        cout<<x<<endl;
        x++;
    }
    for(int i=1;i<=p;i++){
        static int y =0;
        cout<<y<<endl;
        y++;
    }
    return 0;
}
