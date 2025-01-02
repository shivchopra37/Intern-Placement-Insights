#include <bits/stdc++.h>
using namespace std;

int sort_array(int arr[], int n){
    sort(arr, arr + n);
}

// int largestElement(int arr[], int n){
//     int max = arr[0];
//     for (int i = 0; i < n; i++){
//         if (arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort_array(arr, n);
    cout << arr[n-1] << endl;
    // cout << largestElement(arr, n) << endl;
}