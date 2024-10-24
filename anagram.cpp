// C++ Code to check if two Strings are anagrams of 
// each other using sorting

#include <algorithm>
#include <iostream>
using namespace std;

// Function to check if two strings are anagrams
bool areAnagrams(string &s1, string &s2) {
    
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    return s1 == s2;
}

int main() {
    string s1 = "geeks";
    string s2 = "kseeg";
    cout << (areAnagrams(s1, s2) ? "true" : "false") << endl;

    return 0;
}
