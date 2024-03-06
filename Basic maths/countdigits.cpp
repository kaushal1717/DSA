#include<iostream>
using namespace std;
int cntDgts(int num){
    int cnt=0;
    while (num>0)
    {
        int rem = num % 10;
        num /=10;
        cnt++;
    }
    return cnt;
}
int cntDgtsGFG(int num){
    int temp = num;
    int cnt = 0;
    while (num>0)
    {
        int rem = num % 10;
        if (rem != 0 && temp % rem == 0)
        {
            cnt++;
        }
        num /= 10;  
    }
    return cnt;
}
int main(){
    int num;
    cin>>num;
    cout<<cntDgts(num)<<endl;
    cout<<"GFG problem"<<endl;
    cout<<cntDgtsGFG(num);

}