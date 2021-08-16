// method 1 

#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

double factorial(double n)
{
    if(n==0)
    return 1;
    
    else return n*factorial(n-1);
    
}

int main()
{
    double n,r;
    cin>>n>>r;
    cout<<"nCr="<< factorial(n)/(factorial(r)*factorial(n-r));

    return 0;
}

********************************************************************************************************************************************************************
// method 2 
// same code can be used to print pascals triangle as ncr= n-1cr + n-1cr-1 
#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

double nCr(int n, int r)
{
    if(r==0|| r==n)
    return 1;
    else 
    return nCr(n-1,r)+nCr(n-1,r-1);
    
}

int main()
{
    double n,r;
    cin>>n>>r;
    cout<<"nCr="<<nCr(n,r) ;

    return 0;
}
