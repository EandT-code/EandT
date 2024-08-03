#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Rows : ";
    cin>>r;
    cout<<"Enter Colums : ";
    cin>>c;
    int arr[r][c];
    int sum=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter Elements : ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix : "<<"\n";
      for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
       for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The Sum of Element is " <<sum;
}
