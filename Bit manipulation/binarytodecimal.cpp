#include<iostream>
#include<math.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans+=pow(2,i);
        }
        n/=10;
        i++;
    }
    cout<<ans<<endl;
}