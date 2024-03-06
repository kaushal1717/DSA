#include<iostream>
#include<vector>
using namespace std;
int maxElement(vector<int>& arr, int n){
	int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    return arr[max];
}
int main(void){
	int n;
	vector<int> arr(n);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	cout << maxElement(arr, n) << endl;
}