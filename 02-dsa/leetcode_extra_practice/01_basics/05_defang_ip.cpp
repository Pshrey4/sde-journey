// Problem: Defanging an IP address
// Link: https://leetcode.com/problems/defanging-an-ip-address/description/?envType=problem-list-v2&envId=dxb72fe2

// Approach:
// Traverse each character of the IP address string.
// If the character is '.', replace it with "[.]".
// Otherwise, append the character as it is to the answer string.
// Return the final defanged IP address.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

// Method 1: Using for loop
class Solution {
public:
    string defangIPaddr(string address) {

        string defang = "";

        int l = address.length();

        for(int i=0; i<l; i++){

            if(address[i] == '.'){
                defang += "[.]";
            }
            else{
                defang.push_back(address[i]);
            }

        }

        return defang;
        
    }
};

// Method 2: Using foreach loop
class Solution {
public:
    string defangIPaddr(string address) {

        string defang = "";

        for(char ch: address){
            if(ch == '.'){
                defang += "[.]";
            }
            else{
                defang += ch;
            }
        }

        return defang;
        
    }
};