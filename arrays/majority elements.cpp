#include<iostream>
using namespace std; 
int main()
{int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int count[256]={0},flag=0;
  for(int i=0;i<n;i++)
  {
    count[a[i]]++;
    if(count[a[i]]>(n/3))
    {cout<<a[i]<<" ";
    flag++;}
  }
  
  if(flag==0)
  cout<<"No Majority Elements";
}
