// Problem: Sum of Unique Elements
// https://leetcode.com/problems/sum-of-unique-elements/description/

// Approach:
// - Traverse the array
// - For each element:
//     - Count how many times it appears (using inner loop)
//     - If duplicate found → mark duplicates as 0
//     - If count > 1 → mark original element as 0
// - Finally, sum all remaining elements (unique ones)

// Edge Cases:
// - All elements same → sum = 0
// - All elements unique → sum = total sum
// - Minimum array size (length = 1)

// Mistakes:
// - Initially tried removing duplicates based on position (incorrect)
// - Did not count occurrences properly
// - Needed full comparison to determine uniqueness

// Learnings:
// - Counting occurrences is key to handling duplicates

#include<iostream>

int main(){
    int length;

    std::cout<<"Enter array length: ";
    std::cin>>length;

    //Loop to check if length entered is valid
    //Length should be [1, 100] both inclusive
    while(length<=0 || length>100){
        std::cout<<"Invalid length. Renter: ";
        std::cin>>length;
    }

    int array[length];

    std::cout<<"Enter elements of an array: "<<std::endl;

    //Loop to enter elements in array
    for(int i=0; i<length; i++){
        std::cin>>array[i];

        //Loop to check if entered element is valid
        //Array elements should be between [1, 100] both inclusive
        while(array[i]<=0 || array[i]>100){
            std::cout<<"Invalid element. Renter: ";
            std::cin>>array[i];
        }
    }

    std::cout<<"Array Elements: "<<std::endl;

    //Loop to print the array (optional)
    for(int i=0; i<length; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    //Loop to check for unique elements
    for(int i=0; i<length; i++){

        int count = 1;

        //if element is 0 then continue to next iteration
        if(array[i] == 0){
            continue;
        }

        //Loop for comparing each element to check if same or unique
        for(int j=i+1; j<length; j++){
            if(array[i] == array[j]){
                array[j] = 0;
                count++;
            }            
        }

        if(count>1){
            array[i] = 0;
        }
    }

    int sum = 0;

    //Loop to sum all elements in array
    for(int i=0; i<length; i++){
        sum += array[i];
    }

    std::cout<<"Sum of Unique Elements: "<<sum<<std::endl;

    return 0;
}