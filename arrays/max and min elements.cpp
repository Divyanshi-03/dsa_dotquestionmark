#include<climits>
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
int min_element()
{
  int min=INT_MAX;
  for(int i=0;i<filled;i++)
  {
    if(aray[i]<min)
    min=aray[i];
  }
  return min;
}
int max_element()
{
  int max=INT_MIN;
  for(int i=0;i<filled;i++)
  {
    if(aray[i]>max)
    max=aray[i];
  }
  return max;
}


};

int main()
{
  array a;
  a.print_element();
  cout<<endl;
  cout<<a.max_element()<<endl;
  cout<<a.min_element()<<endl;
  
}
