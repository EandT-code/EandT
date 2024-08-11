#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter Base Number : ";
    cin>>a;
    cout<<"Enter Exponent : ";
    cin>>b;
     if(a==0 && b==0) 
    {
        cout<<"Not defined";
    }
    bool flag = true;
    if(b < 0)
    {
        flag = false; //true means power positive
        b = -b;
    }
    float pow = 1;
    for(int i=1; i<=b; i++)
    {
        pow *= a;
    }
    if(flag == false) 
    {
    pow =1/pow;
    b=-b;
    }
   
    cout<<a<<" raised to the power " <<b << " is : " <<pow;
}
