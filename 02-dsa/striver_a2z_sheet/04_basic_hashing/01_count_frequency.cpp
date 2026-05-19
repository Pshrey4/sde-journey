// Problem: Given an array, find the number of occurrences of each element in the array.

// Approach:
// Take the array elements as input.
// Use an unordered_map to store frequencies of elements.
// Traverse the array and increment the count of each element in the map.
// Traverse the map and print each element with its frequency.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<unordered_map>

int main(){
    int arr_length;

    std::cout<<"Enter length of array: ";
    std::cin>>arr_length;

    int arr[arr_length];

    std::unordered_map<int, int> mp;

    std::cout<<"Enter elements of an array: "<<std::endl;

    for(int i=0; i<arr_length; i++){
        std::cin>>arr[i];
        // Use map to store the frequencies of the elements entered
        mp[arr[i]]++;
    }

    // Print using foreach loop
    for(auto i: mp){
        std::cout<<i.first<<"->"<<i.second<<std::endl;
    }
 
    // Brute force approach
    // Time Complexity: O(num_length * n)
    // int num_length;
    // std::cout<<"Enter how many numbers frequency you want to know: ";
    // std::cin>>num_length;
    // for(int i=0; i<num_length; i++){
    //     int number;
    //     std::cout<<"Enter number: ";
    //     std::cin>>number;
    //     int count = 0;
    //     for(int j=0; j<arr_length; j++){
    //         if(arr[j]==number){
    //             count++;
    //         }
    //     }
    //     std::cout<<number<<"->"<<count<<std::endl;
    // }

    return 0;
}