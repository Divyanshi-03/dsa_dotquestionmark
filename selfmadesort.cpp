//make a sort function in which a number whose sum of digits is less comes first

#include <iostream>
#include<algorithm>
using namespace std;
int sum(int n)
{
  int s=0;
  while(n!=0)
  {
    s=s+(n%10);
    n=n/10;
  }
  return s;
}
int selfmadesort(int n1,int n2)
{
   int s1=sum(n1);
   int s2=sum(n2);
   return s1<s2;
}
int main() {
  int a[]={256, 123, 53,111};
  int n =sizeof(a)/sizeof(a[0]);
  sort(a,a+n,selfmadesort);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

  
}
