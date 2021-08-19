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
void search(int key)
{int i;
for( i=0;i<filled;i++)
{
  if( aray[i]==key)
  {
    cout<< "key found at index "<<i<<endl;
    //called transposition(it makes the more searched one come forward reducing time complexity) 
    int temp = aray[i];
    aray[i]=aray[i-1];
    aray[i-1]=temp;
    break;
  }
  
}if(i==filled)
cout<<"not found"<<endl;}


};

int main()
{
  array a;
  a.print_element();
  int key;
  cout<<"enter key"<<endl;
  cin>>key;
  a.search(key);
  a.print_element();
  
}
