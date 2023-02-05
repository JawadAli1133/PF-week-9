#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of second array: ";
    cin>>size;
    int number1[2];
    int number2[size];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter number "<<i+1<<" of first array :";
        cin>>number1[i];
    }

    for(int j=0;j<size;j++)
    {
        cout<<"Enter number "<<j+1<<" of second array :";
        cin>>number2[j];
    }
    cout<<number1[0]<<" ";
    for(int i=0;i<size;i++)
    {
        cout<<number2[i]<<" ";
    }
    cout<<number1[1];

}