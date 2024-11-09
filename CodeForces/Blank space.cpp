#include <iostream>
using namespace std;
int maxConsecutiveZeros(int arr[], int n) {
    int maxCount = 0;
    int currentCount = 0;
    
    for(int i = 0; i < n; ++i) {
        if(arr[i] == 0) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }
    
    return maxCount;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << maxConsecutiveZeros(arr, n) << endl;
    }
    return 0;

}