#include<iostream>
using namespace std;
long long sumofDivisors(int N){
    long long  sum = 0;
    for (size_t i = 0; i <=N; i++)
    {
        int div = N/i;
        sum += div*i;
    }    
    return sum;
}
int main(void){
    int x ;
    cin>>x;
    cout<<sumofDivisors(x);
}