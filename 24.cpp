#include <iostream> 
#include <math.h> 
using namespace std; 

int main()
{
    double sum = 0, a; 
    int n, i;           

   
    cout << "\n\n Find the sum of the series 1 + 1/2^2 + 1/3^3 +.....+ 1/n^n:\n";
    
    cout << " Input the value for nth term: ";
    cin >> n; // Read the value entered by the user

    for (i = 1; i <= n; ++i) 
    {
        a = 1 / pow(i, i); 
        cout << "1/" << i << "^" << i << " = " << a << endl; 
        sum += a; 
    }

    cout << " The sum of the above series is: " << sum << endl;

    return 0; 
}