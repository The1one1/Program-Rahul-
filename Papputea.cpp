#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    short n,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
        k++;
        }
    }
    int y=(k/2+k%2+1);
    (y%2==0)?cout<<y/2:cout<<y/2+1;
   
}