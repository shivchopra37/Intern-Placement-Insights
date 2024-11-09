#include <iostream>
using namespace std;

int winner(int a, int b, int c) {
    if (a == b) {
        if (c % 2 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    } else if (a > b) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        winner(a, b, c);
    }
    return 0;
}

// Another code of Buttons
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long a, b, c;
//         cin >> a >> b >> c;
//         long long total_buttons = a + b + c;
//         if (total_buttons % 2 == 1) {
//             cout << "First" << endl;
//         } else {
//             cout << "Second" << endl;
//         }
//     }
//     return 0;
// }