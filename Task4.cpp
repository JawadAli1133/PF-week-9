#include<iostream>
using namespace std;
int main()
{
   int size,num,count=0;
   cout<<"Enter the size of array: ";
   cin>>size;
   cout<<"Enter number you want product with: ";
   cin>>num;
   int number[size];
   for(int i=0;i<size;i++)
   {
    cout<<"Enter number "<<i+1<<" : ";
    cin>>number[i]; 
   }
   for(int i=size-1;i>=0;i--)
   {
      cout<<number[i]*num<<" ";
   }
  
}   