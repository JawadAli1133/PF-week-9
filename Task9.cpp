#include<iostream>
using namespace std;
int main()
{
   string name;
   int i=0,count1=0;
   char ch;
   cout<<"Enter a name: ";
   getline(cin,name);
   int count=name.length();
   for(int i=0;i<count;i++)
   {
      if(name[i]=='a' ||name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
      {
         count1 = count1+1;
      }
      if(name[i]=='A' ||name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
      {
         count1 = count1+1;
      }
   }
   if(count1>0)
   {
     cout<<"Vowel Letters found "<<count1<<" times ";
   }
   if(count1<=0)
   {
     cout<<"Vowel letters not found ";
   }
  
}   