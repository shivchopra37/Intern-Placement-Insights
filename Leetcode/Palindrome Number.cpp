#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int x) {
   
    if (x < 0) 
    return false;
    
    int temp = x;
    int rev = 0;
    
    while (x > 0) {
        int lastdigit = x % 10;
        if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && lastdigit > 7)) {
            return false; 
        }
        rev = rev * 10 + lastdigit;
        x = x / 10;
    }
    
    return rev == temp;
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        cout << "Yes, the number is a palindrome." << endl;
    } else {
        cout << "No, the number is not a palindrome." << endl;
    }
    
    return 0;
}
// The Logic i thought in this code is that i will take a temporary variable and store the number in it and then i will reverse the number and then i will check if the reversed number is equal to the original number then i will return true else false. I create the revrse number by taking the last digit of the number and then multiplying it by 10 and adding the last digit of the number and then dividing the number by 10. This is the basic method to reverse a number. Also i check for the overflow condition by checking if the reverse number is greater than INT_MAX/10 or if the reverse number is equal to INT_MAX/10 and the last digit is greater than 7 then i will return false.