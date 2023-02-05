#include<iostream>
using namespace std;
int main()
{
   string name;
   int i=0;
   cout<<"Enter a name: ";
   getline(cin,name);
   int count = name.length();
   cout<<count<<" Characters "<<endl;
   for(int i=count-1;i>=0;i--)
   {
      cout<<name[i];
   }
}     