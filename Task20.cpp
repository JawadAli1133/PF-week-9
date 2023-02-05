#include<iostream>
using namespace std;
main()
{
    int size;
    float sum=0;
    cout<<"Enter number of resistor: ";
    cin>>size;
    float number[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter resistance of resistor "<<i+1<<":";
        cin>>number[i];
        sum = sum + number[i];
    }
    cout<<"Sum of all resistances in series is: "<<sum<<" ohms ";
}