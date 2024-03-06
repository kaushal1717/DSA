#include<iostream>
#include<vector>
#include<map>
using namespace std;
int hashMap(vector<int> arr,int num){
    map<int,int> mp;
    for (size_t i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    return mp[num];
}
int main(void){
    vector<int> arr{0,1,1,1,5,6};
    int num;
    cin >> num;
    cout<<hashMap(arr,num);
}
