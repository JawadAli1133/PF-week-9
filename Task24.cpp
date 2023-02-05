#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter a sentence: ";
    getline(cin,name);
    int count = name.length();
    for(int i=0;i<count;i++)
    {
        if(name[i]=='a' ||name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            continue;
        }
        if(name[i]=='A' ||name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
        {
            continue;
        }
        cout<<name[i];
    }
}