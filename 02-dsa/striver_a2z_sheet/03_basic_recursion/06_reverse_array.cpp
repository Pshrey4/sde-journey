// Problem: You are given an array. The task is to reverse the array and print it.

// Approach:
// Create a new vector to store the reversed array.
// Traverse the original array from left to right.
// Place each element at its correct reversed position in the new vector.
// Return the reversed vector.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<algorithm>

// Method 1: Brute Force 
std::vector<int> reverse_array(std::vector<int> &arr){
    int n = arr.size();

    std::vector<int> rev(n);

    for(int i=0; i<n; i++){
        rev[n-1-i] = arr[i];
    }

    return rev;
}

// Method 2:
// void reverse_array(std::vector<int> &arr){
//     int p1 = 0;

//     int p2 = arr.size() -1;

//     while (p1<p2)
//     {
//         std::swap(arr[p1], arr[p2]);
//         p1++;
//         p2--;
//     }
    
// }


int main(){
    
    std::vector<int> arr = {1, 2, 3, 4, 5};

    std::cout<<"Array: "<<std::endl;
    for(int i: arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    // Brute Force Method:
    std::vector<int> rev_arr = reverse_array(arr);
    std::cout<<"Reversed Array: "<<std::endl;
    for(int i: rev_arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;  
    
    // Method 2:
    // reverse_array(arr);
    // std::cout<<"Reversed Array: "<<std::endl;
    // for(int i: arr){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    // Method 3: Builtin Function
    // std::reverse(arr.begin(), arr.end());
    // std::cout<<"Reversed Array: "<<std::endl;
    // for(int i: arr){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    return 0;
}