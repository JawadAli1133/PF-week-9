#include<iostream>
using namespace std;
int main()
{
   int size,num,count=0;
   cout<<"Enter the size of array: ";
   cin>>size;
   int number[size];
   int smallest;
   for(int i=0;i<size;i++)
   {
    cout<<"Enter number "<<i+1<<" : ";
    cin>>number[i]; 
    smallest = number[0];
    if(smallest>number[i])
    {
        smallest= number[i];
    }
    else
    {
         smallest= smallest;
    }
   }
   cout<<"Smallest is: "<<smallest;

}   