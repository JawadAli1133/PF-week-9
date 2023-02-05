#include<iostream>
using namespace std;
int main()
{
   int size,num,count=0;
   cout<<"Enter the size of array: ";
   cin>>size;
   cout<<"Enter number you want to find: ";
   cin>>num;
   int number[size];
   for(int i=0;i<size;i++)
   {
    cout<<"Enter number "<<i+1<<" : ";
    cin>>number[i];
    if(number[i]==num)
    {
    count++;
    }
   }
   if(count>0)
   {
    cout<<"Number '"<<num<<"' found "<<count<<" times in array ";
   }
   else
   {
    cout<<"Number not found ";
   }
}   