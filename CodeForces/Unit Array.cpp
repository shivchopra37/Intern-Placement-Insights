#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0; 
        int neg_count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == -1) {
                neg_count++;
            }
        }
        int operations = 0;
        while (sum < 0) {
            sum += 2;
            operations++;
            neg_count--;
        }
        if (neg_count % 2 != 0) {
            operations++;
        }
        cout << operations << endl;
    }
    return 0;
}