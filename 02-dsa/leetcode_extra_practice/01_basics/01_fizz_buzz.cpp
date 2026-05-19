// Problem: Fizz Buzz
// Link: https://leetcode.com/problems/fizz-buzz/description/

// Approach:
// Traverse numbers from 1 to n.
// If a number is divisible by both 3 and 5, store "FizzBuzz".
// Else if divisible by 3, store "Fizz".
// Else if divisible by 5, store "Buzz".
// Otherwise, convert the number to string and store it in the vector.
// Return the final vector containing all answers.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> answer;

        for(int i=1; i<=n; i++){
            
            if(i % 3 == 0 && i % 5 == 0){
                answer.push_back("FizzBuzz");
            }
            else if(i % 3 == 0){
                answer.push_back("Fizz");
            }
            else if(i % 5 == 0){
                answer.push_back("Buzz");
            }
            else{
                answer.push_back(to_string(i));
            }
        }

        return answer;

    }
};