#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n < 3) {
            if (n == 0) {
                cout << "Second" << endl;
            } else if (n == 1 || n == 2) {
                cout << "First" << endl;
            }
        } else {
            if(n % 3 == 0){
                cout << "Second" << endl;
                
            }
            if(n % 3 == 1){
                cout << "First" << endl;
          
            }
            if(n % 3 == 2){
                cout << "First" << endl;
            }
        }
    } 
    return 0;
}