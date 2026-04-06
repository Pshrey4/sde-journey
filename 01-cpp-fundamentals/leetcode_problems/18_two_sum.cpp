// Problem: Two Sum
// https://leetcode.com/problems/two-sum/description/

// Approach:
// - Use two nested loops to check all possible pairs
// - For each pair (i, j):
//     - If array[i] + array[j] == target → print indices

// Edge Cases:
// - Minimum array size (length = 2)
// - Negative numbers in array
// - Duplicate elements (e.g., [3,3], target = 6)

// Mistakes:
// - None (logic implemented correctly)

// Learnings:
// - Use nested loops to generate all pairs (i < j)

#include<iostream>

int main(){

    int length, target;

    std::cout<<"Enter length of array: ";
    std::cin>>length;

    //Loop to check valid length
    while(length<2){
        std::cout<<"Invalid length. Renter: ";
        std::cin>>length;
    }

    int array[length];

    std::cout<<"Enter elements of array: "<<std::endl;

    //Loop to input array elements
    for(int i=0; i<length; i++){
        std::cin>>array[i];
    }

    std::cout<<"Array: "<<std::endl;
    
    //Loop to print array
    for(int i=0; i<length; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"Enter target to check: ";
    std::cin>>target;

    int count = 0;

    //Loop to check if sum of two elements in an array is equal to target
    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(array[i]+array[j] == target){
                std::cout<<"Indices ["<<i<<","<<j<<"] gives target"<<std::endl;
                count++;
            }
        }
    }

    if(count==0){
        std::cout<<"No match found"<<std::endl;
    }

    return 0;
}