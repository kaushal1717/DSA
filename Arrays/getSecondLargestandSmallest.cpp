#include<iostream>
#include<vector>
using namespace std;
int getSecondLargest(int n, vector<int>& a){
    int largest=a[0];
    int secondLargest=-1;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            secondLargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>secondLargest){
            secondLargest=a[i];
        }
    }
    return secondLargest;
}
int getSecondSmallest(int n, vector<int>& a){
    int smallest=a[0];
    int secondsmallest=INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            secondsmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]>smallest && a[i]<secondsmallest){
            secondsmallest=a[i];
        }
    }
    return secondsmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> result(2);
    result[0] = getSecondLargest(n,a);
    result[1] = getSecondSmallest(n,a);
    return result;
}
int main(void)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(2); 
    ans = getSecondOrderElements(n,arr);
    cout << ans[0] << endl;
    cout << ans[1] << endl;
}
