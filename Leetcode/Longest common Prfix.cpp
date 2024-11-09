#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findCommonPrefix(vector<string>& strs) {
    if (strs.empty()) 
    return ""; 

    string prefix = strs[0]; 
    
    for (int i = 1; i < strs.size(); ++i) {
        int j = 0;
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        } 
        prefix = prefix.substr(0, j);
        if (prefix.empty()) 
        return "";
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = findCommonPrefix(strs);
    if (!result.empty()) {
        cout << "The common prefix is: " << result << endl;
    } else {
        cout << "No common prefix found." << endl;
    }
    return 0;
}
