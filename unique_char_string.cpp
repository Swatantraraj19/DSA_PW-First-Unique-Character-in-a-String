#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCounts;

    for (char c : s) {
        charCounts[c]++;
    }


    for (int i = 0; i < s.length(); i++) {
        if (charCounts[s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {

    // Example 1

    string s1 = "leetcode";
    int index1 = firstUniqChar(s1);
    cout << "Output for Example 1: " << index1 << endl;

    // Example 2

    string s2 = "loveleetcode";
    int index2 = firstUniqChar(s2);
    cout << "Output for Example 2: " << index2 << endl;

    // Example 3
    
    string s3 = "aabb";
    int index3 = firstUniqChar(s3);
    cout << "Output for Example 3: " << index3 << endl;

    return 0;
}