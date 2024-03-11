#include<iostream>
using namespace std;



int main()
{
int x = 9;
int *p;
p = &x;


cout<<"the value of x "<<*p<<endl;
float *a = new float (40.45);
cout<<"the value of adress p = "<<*(a)<<endl;

int *arr = new int [3];
arr[0] = 20;
arr[1] =30;
arr[2]= 40;
delete [] arr;
cout<< "the value of arr[0] = "<<arr[0]<<endl;
cout<< "the value of arr[1] = "<<arr[1]<<endl;
cout<< "the value of arr[2] = "<<arr[2]<<endl;

}