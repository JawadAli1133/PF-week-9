#include<iostream>
using namespace std;
int main()
{
   string name;
   int i=0,count=0,count1=0;
   cout<<"Enter a name: ";
   getline(cin,name);
   while(name[i]!='\0')
   {
     i =i +1;
     count = count+1;
     if(name[i]==' ')
     {
        count1=count1+1;
     }
   }
   cout<<count<<" characters"<<endl;
   if(count%2==0)
   {
     cout<<"Even number of characters ";
   }
   else
   {
   cout<<"Odd number of characters ";
   }
   
}
