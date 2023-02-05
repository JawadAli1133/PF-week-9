#include<iostream>
using namespace std;
int main()
{
   int size,sum=0;
   cout<<"Enter the size of array: ";
   cin>>size;
   int number[size];
   for(int i=0;i<size;i++)
   {
    cout<<"Enter number "<<i+1<<" : ";
    cin>>number[i];
   }
    
   for(int i=0;i<size;i++)
   {
      sum = sum+number[i];
   }
   float Average = sum/size;
   cout<<"Sum is: "<<sum<<endl;
   cout<<"Average is: "<<Average<<endl;
}