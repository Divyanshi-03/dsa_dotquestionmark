#include<iostream>
using namespace std;

class array
{
private:
int size;
int *aray;
int filled;
public:
array()
{
  size = 10;
  aray=new int[size];
  for(int i=0;i<7;i++)
  {
    aray[i]=i+1;
  }
  filled =7;
}
void print_element()
{
  for(int i=0;i<filled;i++)
  cout<< aray[i]<<" ";
}

int elements_sumdifference()
{
  int even_sum=0,odd_sum=0;
  for(int i=0;i<filled;i++)
  {if(i%2==0||i==0)
    even_sum+=aray[i];
  else
  odd_sum+=aray[i];  
  }
  if(odd_sum>even_sum)
  return (odd_sum-even_sum);
  else
  return (even_sum-odd_sum); 
}

};

int main()
{
  array a;
  a.print_element();
  cout<<endl;
  cout<< a.elements_sumdifference();
}
