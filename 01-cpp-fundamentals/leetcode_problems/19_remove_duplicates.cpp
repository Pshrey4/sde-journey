// Problem: Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

// Approach:
// - Sort array (for local use)
// - Use two pointers:
//     - i → traverses array
//     - k → position to place next unique element
// - Compare current element with previous
// - If different → place at index k and increment k
// - First k elements will be unique

// Edge Cases:
// - length = 1
// - all elements same
// - no duplicates

// Mistakes:
// - Initially tried complex shifting logic
// - Overcomplicated duplicate removal

// Learnings:
// - Sorted arrays allow simple adjacent comparison
// - Overwrite instead of deleting elements
// - Two-pointer technique simplifies logic

#include<iostream>

int main(){

    int length;

    std::cout<<"Enter length of array: ";
    std::cin>>length;

    //Loop to check valid length
    while(length<1){
        std::cout<<"Invalid length. Renter: ";
        std::cin>>length;
    }

    int array[length];

    std::cout<<"Enter elements of array: "<<std::endl;

    //Loop to take array elements as input
    for(int i=0; i<length; i++){
        std::cin>>array[i];

        //Loop to check valid array element input
        while(array[i]<-100 || array[i]>100){
            std::cout<<"Invalid input. Renter: ";
            std::cin>>array[i];
        }

    }

    //Sorting the array using brute force in non-decreasing order
    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(array[i]>array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    std::cout<<"Array Elements: "<<std::endl;

    //Loop to print array
    for(int i=0; i<length; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    //Loop to remove duplicates from array
    int k = 1;

    for(int i=1; i<length; i++){
        if(array[i] != array[i-1]){
            array[k] = array[i];
            k++;
        }
    }

    std::cout<<"Final array: "<<std::endl;

    //Loop to give back length and print array
    for(int i=0; i<k; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"Length: "<<k<<std::endl;

    return 0;
}