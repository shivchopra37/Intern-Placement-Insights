#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums,int target){
    int n = nums.size();
    for (int i; i<n; i++){
        if (nums[i] == target){
            return i;
        }
        if (nums[i] > target){
            return i;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    cout << searchInsert(nums, target) << endl;
    return 0;
}