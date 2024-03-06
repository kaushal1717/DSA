#include<iostream>
using namespace std;
string isPrime(int n){
    int cnt = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            cnt++;
        }
        
    }
    if (cnt > 0 || n == 1)
    {
        return "No";
    }
    return "Yes";
    
}
int main(void){
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
}