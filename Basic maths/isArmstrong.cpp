#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int x){
    int temp = x;
    int sum = 0;
    int cnt = 0;
    while (x != 0)
    {
        x /= 10;
        cnt++;
    }
    x = temp;
    while (x != 0)
    {
        int rem = x % 10;
        sum += pow(rem,cnt);
        x /= 10;
    }
    return sum == temp;

}
int main(void){
    int num;
    cout<<boolalpha;
    cin>>num;
    cout<<isArmstrong(num);
}