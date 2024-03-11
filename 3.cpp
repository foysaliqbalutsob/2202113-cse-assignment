#include<iostream>
using namespace std;

int C = 45;

int main()
{
    int A,B,C;

    cout<<"Ener the value of A "<<endl;
    cin>>A;

    cout<<"Ener the value of B "<<endl;
    cin>>B;

    C = A + B; 
   
    cout<<"the sum is : "<<C<<endl;
    cout<<"the global c is "<<::C<<endl;



    return 0;
}