// Problem: Happy Number
// https://leetcode.com/problems/happy-number/description/

// Approach:
// - Repeatedly replace number with sum of squares of its digits
// - Use an array to store previously seen sums
// - If sum becomes 1 → Happy Number
// - If a sum repeats → cycle detected → Not Happy Number

// Edge Cases:
// - number = 1 → Happy Number
// - number enters a cycle (e.g., 4 → 16 → ... → 4)
// - Invalid input (number <= 0)

// Mistakes:
// - Initially caused infinite loop by not handling cycles
// - Declared storage inside loop (reset every iteration)
// - Checked after storing instead of before

// Learnings:
// - Cycle detection is important in iterative problems
// - Store previous states to avoid infinite loops
// - Variables inside loops reset every iteration
// - Order matters: check first, then store

#include<iostream>

int main(){

    int number;

    std::cout<<"Enter a number: ";
    std::cin>>number;

    //Loop to check invalid input
    while(number<=0){
        std::cout<<"Invalid Input. Renter: ";
        std::cin>>number;
    }

    int temp = number, digit, sum = 0, previous_sum[100], count = 0;

    //Loop where actual working is done
    while(temp!=0){

        //This piece of code helps to add the squares of digits of a number
        digit = temp % 10;
        sum += digit * digit;
        temp /= 10;

        //When number becomes 0 it checks a few things
        if(temp==0){

            //If sum = 1 then ouput stop iteration
            if(sum==1){
                std::cout<<"Happy Number"<<std::endl;
                return 0;
            }

            //Loop checks if sum is equal to any previous sum in array
            for(int i=0; i<count; i++){

                //if equal sum found in array the end the program
                if(previous_sum[i] == sum){
                    std::cout<<"Not Happy Number"<<std::endl;
                    return 0;
                }
            }

            //store sum in array
            previous_sum[count++] = sum;
            temp = sum;
            sum = 0;
        }
    }

    return 0;
}