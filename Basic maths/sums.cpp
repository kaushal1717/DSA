#include<iostream>
using namespace std;
int addDigits(int num) {
        int rem = 0, sum;
        while (num != 0){
            rem = num % 10;
            sum += rem;
            num /= 10;
        }
        return sum;
    //     if (sum < 10) return sum;
    //     else{
    //         num = sum;
    //         while(num != 0){
    //             rem = num % 10;
    //             sum += rem;
    //             num /= 10;
    //         }
    //         return sum;
    // }
}
int main(void){
    int num;
    cin>>num;
    cout<<addDigits(num)<<endl;
}