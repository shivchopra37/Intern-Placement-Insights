#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1, j = num2.size() - 1;
    int carry = 0;
    string result = "";

    // Add digits from right to left
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += num1[i] - '0'; 
        if (j >= 0) sum += num2[j] - '0';

        carry = sum / 10;  // Carry for the next digit
        result += (sum % 10) + '0'; // Add current digit to result

        i--;
        j--;
    }

    reverse(result.begin(), result.end()); // Reverse the result to get the correct order
    return result;
}

// Function to remove leading zeros from a string
string removeLeadingZeros(string s) {
    int start = 0;
    while (start < s.size() && s[start] == '0') {
        start++;
    }
    // If the string becomes empty after removing leading zeros, return "0"
    return start == s.size() ? "0" : s.substr(start);
}

// Main function to get the minimum sum of two numbers formed by alternating digits
string minSum(vector<int>& arr) {
    // Step 1: Sort the array in ascending order
    sort(arr.begin(), arr.end());

    // Step 2: Create two numbers by alternating digits
    string num1 = "", num2 = "";
    
    for (int i = 0; i < arr.size(); ++i) {
        if (i % 2 == 0) {
            num1 += to_string(arr[i]);
        } else {
            num2 += to_string(arr[i]);
        }
    }

    // Step 3: Perform addition directly on strings
    string sum = addStrings(num1, num2);
    
    // Step 4: Remove leading zeros from the sum string
    return removeLeadingZeros(sum);
}

// The logic of the question is that we have to find the minimum sum of two numbers formed by alternating digits. We can solve this problem by following these steps: Sort the array in ascending order. Create two numbers by alternating digits. Perform addition directly on strings. Remove leading zeros from the sum string. The time complexity of this solution is O(NlogN), where N is the size of the input array. The space complexity is O(N) because we are using two strings to store the numbers.