// Problem: Maximum 69 Number
// https://leetcode.com/problems/maximum-69-number/description/

// Approach:
// - Validate input to ensure all digits are either 6 or 9 (local practice)
// - Convert number to string
// - Traverse from left to right
// - Replace the first occurrence of '6' with '9'
// - Convert back to integer

// Edge Cases:
// - Number contains only 9s → no change
// - Single digit input (6 → 9, 9 → unchanged)
// - Invalid input (digits other than 6 or 9)

// Mistakes:
// - Used incorrect condition (digit != 6 || digit != 9) which was always true

// Learnings:
// - Use && when checking "not equal to both values"
// - Greedy approach: change first '6' → '9' for maximum value
// - Keep validation separate from core logic

#include<iostream>
#include<string>

int main(){

    int number;   

    while(true){

        std::cout<<"Enter number (digits should only be 6 or 9): ";
        std::cin>>number;

        int temp = number;
        bool valid = true;

        while(temp>0){
            int digit = temp % 10;

            if(digit!=6 && digit!=9){
                valid = false;
                break;
            }

            temp /= 10;
        }

        if(valid) break;

        std::cout<<"Invalid input. Try again."<<std::endl;
    }

    std::string str = std::to_string(number);

    for(int i=0; i<str.length(); i++){
        if(str[i] == '6'){
            str[i] = '9';
            break;
        }
    }

    int maximum = std::stoi(str);

    std::cout<<"Maximum: "<<maximum<<std::endl;    

    return 0;
}