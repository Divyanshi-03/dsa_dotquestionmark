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

double taylorseries(double x, double n)
{
    if(n==0)
    return 1; 
    else 
    return pow(x,n)/factorial(n) + taylorseries(x,n-1);
}



int main()
{
    double m,n;
    cin>>m>>n;
    cout<<taylorseries(m,n);

    return 0;
}
***********************************************************************************************************************************************************
// better method 
double taylorseries(double x, double n)
{
    if(n==0)
    return 1; 
    else
    static int pow=1,fac=1;
    double term=taylorseries(x,n-1)
    pow=pow*x;
    fac=fac*n
   
    return (term + pow/fac) ;
}
// loop for this (withoit recursion method
double taylorloop(int x, int n)
{
    double series=1;
    double num =1, den=1;
    for( int i=0;i<n;i++)
    {
        num=num*x;
        den*=i;
        series+=num/den;}
    return series; }
************************************************************************************************************************************************************
// method 3 
// using homers rule 
double taylor(double x, double n)
{
    static double temp =1;
    if(n==0)
        return temp;
    else{
        temp = 1+ (x/n*temp);
        return taylor(x,n-1);}
}
    

