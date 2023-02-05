#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a name: ";
    getline(cin,name);
    int count = name.length();
    for(int i=0;i<count;i++)
    {
        name[i]=name[i]+1;
        cout<<name[i];
    }
    
}