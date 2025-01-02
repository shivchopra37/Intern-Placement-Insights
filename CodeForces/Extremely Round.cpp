#include <iostream>
using namespace std;

int Extremelyroungcount(int n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        int powerof10 = 1;
        while (d * powerof10 <= n) {
            ++count;
            powerof10 *= 10;
        }
    }
    return count;
}

int main() {
   int t;
   cin >> t;
   while (t--){
    int n;
    cin >> n;
    cout << Extremelyroungcount(n) << endl;
   }
}