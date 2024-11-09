#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findPairWithTargetSum(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] + arr[j] == target){
                return {i, j}; 
            }
            else{
                printf("No pair found with the given target sum.");
            }
        }
    }
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = findPairWithTargetSum(arr, target);
    
    if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No pair found with the given target sum." << endl;
    }
    
    return 0;
}

// The Logic i thought in this code is that i will take two loops and check if the sum of the two elements is equal to the target sum then i will return the indices of the two elements.