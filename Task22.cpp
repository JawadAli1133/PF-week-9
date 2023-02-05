#include<iostream>
using namespace std;
main()
{
    float money[4];
    float price,sum=0.0;
    cout<<"Enter price of item: ";
    cin>>price;
    for(int i=0;i<4;i++)
    {
       cout<<"Enter number "<<i+1<<" : ";
       cin>>money[i];
    }
    sum = (money[0]*0.25)+(money[1]*0.10)+(money[2]*0.05)+(money[3]*0.01);
    if(sum>price)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}