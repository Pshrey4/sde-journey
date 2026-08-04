// Algorithm: Second Largest and Second Smallest Elements

#include <bits/stdc++.h>

// Method 1: Brute Force

// Approach:
// If the array contains fewer than two elements, a second smallest
// and second largest element do not exist.
// Sort the array in ascending order.
// Traverse from the beginning to find the first element greater than
// the smallest element. This is the second smallest element.
// Traverse from the end to find the first element smaller than
// the largest element. This is the second largest element.
// If no distinct second smallest or second largest element exists,
// return -1 for both.

// Time Complexity: O(n log n) (sorting the array dominates the runtime)
// Space Complexity: O(1)

// int main(){

//     int arr_size;

//     std::cout<<"Enter size of array: ";
//     std::cin>>arr_size;

//     std::vector<int> arr(arr_size);

//     std::cout<<"Enter elements of array: "<<std::endl;

//     for(int i=0; i<arr_size; i++){

//         std::cin>>arr[i];

//     }

//     std::cout<<"Array: "<<std::endl;

//     for(int i=0; i<arr_size; i++){

//         std::cout<<arr[i]<<" ";

//     }

//     std::cout<<std::endl;

//     int sec_small=0, sec_large=0;

//     if(arr_size > 1){

//         sort(arr.begin(), arr.end());

//         int i=0, j=arr_size-1;

//         while(arr[i] <= arr[0] && i < arr_size){

//             i++;

//         }

//         if(arr[i] != arr[0]){

//             sec_small = arr[i];

//         }

//         while(arr[j] >= arr[arr_size-1] && j > 0){

//             j--;

//         }

//         if(arr[j] != arr[arr_size-1]){

//             sec_large = arr[j];

//         }

//     }    

//     if(sec_small == 0 && sec_large == 0){

//         sec_small = -1;

//         sec_large = -1;

//     }

//     std::cout<<"Second Smallest: "<<sec_small<<std::endl;

//     std::cout<<"Second Largest: "<<sec_large<<std::endl;

//     return 0;

// }

// Method 2: Better Approach

// Approach:
// If the array contains fewer than two elements, a second smallest
// and second largest element do not exist.
// Traverse the array once to find the smallest and largest elements.
// Traverse the array again to find the smallest element greater than
// the smallest (second smallest) and the largest element smaller than
// the largest (second largest).
// Return the second smallest and second largest elements.

// Time Complexity: O(n) (two linear traversals of the array)
// Space Complexity: O(1)

// int main(){

//     int arr_size;

//     std::cout<<"Enter size of array: ";
//     std::cin>>arr_size;

//     std::vector<int> arr(arr_size);

//     std::cout<<"Enter elements of array: "<<std::endl;

//     for(int i=0; i<arr_size; i++){

//         std::cin>>arr[i];

//     }

//     std::cout<<"Array: "<<std::endl;

//     for(int i=0; i<arr_size; i++){

//         std::cout<<arr[i]<<" ";

//     }

//     std::cout<<std::endl;

//     int smallest = INT_MAX, sec_small = INT_MAX;
//     int largest = INT_MIN, sec_large = INT_MIN;

//     if(arr_size < 2){

//         sec_small = -1;

//         sec_large = -1;

//     }
//     else{

//         for(int i=0; i<arr_size; i++){

//             if(arr[i] < smallest){

//                 smallest = arr[i];

//             }

//             if(arr[i] > largest){

//                 largest = arr[i];

//             }

//         }

//         for(int i=0; i<arr_size; i++){

//             if(arr[i] < sec_small && arr[i] != smallest){

//                 sec_small = arr[i];

//             }

//             if(arr[i] > sec_large && arr[i] != largest){

//                 sec_large = arr[i];

//             }

//         }

//     }

//     if(sec_small == INT_MAX) sec_small = -1;

//     if(sec_large == INT_MIN) sec_large = -1;

//     std::cout<<"Second Smallest: "<<sec_small<<std::endl;

//     std::cout<<"Second Largest: "<<sec_large<<std::endl;

//     return 0;

// }


// Method 3: Optimal Approach

// Approach:
// If the array contains fewer than two elements, a second smallest
// and second largest element do not exist.
// Traverse the array once to find the smallest and second smallest elements.
// Whenever a new smallest element is found, update both smallest and second smallest.
// Otherwise, update the second smallest if the current element is greater than
// the smallest but smaller than the current second smallest.
// Similarly, traverse the array once to find the largest and second largest elements.
// Whenever a new largest element is found, update both largest and second largest.
// Otherwise, update the second largest if the current element is smaller than
// the largest but greater than the current second largest.
// If no distinct second smallest or second largest element exists, return -1.

// Time Complexity: O(n) (two linear traversals of the array)
// Space Complexity: O(1)

int main(){

    int arr_size;

    std::cout<<"Enter size of array: ";
    std::cin>>arr_size;

    std::vector<int> arr(arr_size);

    std::cout<<"Enter elements of array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    std::cout<<"Array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    int smallest = INT_MAX, sec_small = INT_MAX;
    int largest = INT_MIN, sec_large = INT_MIN;

    if(arr_size < 2){

        sec_small = -1;

        sec_large = -1;

    }
    else{

        for(int i=0; i<arr_size; i++){

            if(arr[i] < smallest){

                sec_small = smallest;

                smallest = arr[i];

            }
            else if(arr[i] < sec_small && arr[i] != smallest){

                sec_small = arr[i];

            }

        }

        for(int i=0; i<arr_size; i++){

            if(arr[i] > largest){

                sec_large = largest;

                largest = arr[i];

            }
            else if(arr[i] > sec_large && arr[i] != largest){

                sec_large = arr[i];

            }
            
        }

    }

    if(sec_small == INT_MAX) sec_small = -1;

    if(sec_large == INT_MIN) sec_large = -1;

    std::cout<<"Second Smallest: "<<sec_small<<std::endl;

    std::cout<<"Second Largest: "<<sec_large<<std::endl;

    return 0;

}





