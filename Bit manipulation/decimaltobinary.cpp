#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
    int n;
    cout<<"num : ";
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    cout<<ans;
}