#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for (size_t i = 0; i < n; i++)
    {
        int j = i;
        while (j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
    
}
int main(void){
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }    
}