#include<iostream>
#include<math.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n) ;

    return 0;
}
*********************************************************************************************************************************************************************
//using memorization 
int memory[1000]
int fibonacci(int n)
{
    if(n<=1)
    {  memory[n]=n;
    return n;}
    else
    {
        if(memory[n-1]==-1)
        {
            memory[n-1]= fibonacci(n-1);
            }
        if(memory[n-2]==-1)
        { 
            memory[n-2]= fibonacci(n-2);
            }
        memory[n]=memory[n-1]+memory[n-2];
        return memory[n];
    }
}
