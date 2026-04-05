// Problem: Number of 1 bits
// https://leetcode.com/problems/number-of-1-bits/description/

// Approach:
// Method 1 (Using bitset):
// - Convert number to binary string using bitset
// - Traverse the string and count number of '1's
// - Uses extra space

// Method 2 (Bit Manipulation - Preferred):
// - Traverse while number > 0
// - Check last bit using (number & 1)
// - Add result to count
// - Right shift number (number >>= 1)
// - Repeat until number becomes 0

// Edge Cases:
// - Input = 0 → output = 0
// - Large numbers with many bits set
// - Negative numbers (important in signed representation)

// Mistakes:
// - Initially relied on string conversion (extra space)
// - Ignored behavior of negative numbers in bit manipulation

// Learnings:
// - (number & 1) checks if last bit is set (1 or 0)
// - Right shift (>>) moves bits to the right
// - Bit manipulation is more efficient than string conversion
// - Bitset can be used for visualization but not optimal

#include<iostream>
#include<string>
#include<bitset>

int main(){

    int number, count = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number;
    
    //Method 1: I used bitset to convert and then iterate through the string
    //this approach uses extra space
    // std::string str = std::bitset<32>(number).to_string();

    // for(int i=0; i<str.length(); i++){
    //     if(str[i] == '1'){
    //         count++;
    //     }
    // }

    //Method 2: Bit Manipulation
    //this approach is preferred as does not require extra space
    while(number>0){
        count += (number & 1);
        number>>=1;
    }

    std::cout<<"Number of 1 bits: "<<count<<std::endl;

    return 0;
}