#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void){
    int n;
    cin>>n;
    int arr[n];
    int num = sizeof(arr)/ sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int max = *max_element(arr, arr+num);

    int hash[10] = {0};

    for(size_t i = 0; i<= n; i++){
        hash[arr[i]] += 1;
    }
    int fnum;
    cin>>fnum;
    cout<< hash[fnum];
}