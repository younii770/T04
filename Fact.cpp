#include <iostream>

using namespace std;

int main()
{
    int n, sum=1;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
       if(sum<n)
       {
        sum=sum*i;
       }


    }
    if(sum==n)
    {
        cout<<"\nYes !!";
    }
    else
        cout<<"\nNo !!";
    return 0;
}
