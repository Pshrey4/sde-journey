// Algorithm: Union of Two Sorted Arrays

// Approach:
// Sort both arrays first.
// Use two pointers, i and j, to traverse the two sorted arrays.
// Compare the current elements of both arrays and add the smaller element
// to the union array.
// If both elements are equal, add the element only once and move both pointers.
// Before inserting an element, check the last element of union_arr
// to avoid adding duplicates.
// After one array is completely traversed, add the remaining elements
// from the other array while avoiding duplicates.

// Time Complexity: O(n log n + m log m) (sorting both arrays dominates the traversal)
// Space Complexity: O(n + m) (union array stores the unique elements)

#include <bits/stdc++.h>

int main(){

    int arr1_size;

    std::cout<<"Enter size of first array: ";
    std::cin>>arr1_size;

    std::vector<int> arr1(arr1_size);

    std::cout<<"Enter elements of first array: "<<std::endl;

    for(int i=0; i<arr1_size; i++){

        std::cin>>arr1[i];

    }

    std::sort(arr1.begin(), arr1.end());

    std::cout<<"First Array: "<<std::endl;

    for(int i=0; i<arr1_size; i++){

        std::cout<<arr1[i]<<" ";

    }

    std::cout<<std::endl;

    int arr2_size;

    std::cout<<"Enter size of second array: ";
    std::cin>>arr2_size;

    std::vector<int> arr2(arr2_size);

    std::cout<<"Enter elements of second array: "<<std::endl;

    for(int i=0; i<arr2_size; i++){

        std::cin>>arr2[i];

    }

    std::sort(arr2.begin(), arr2.end());

    std::cout<<"Second Array: "<<std::endl;

    for(int i=0; i<arr2_size; i++){

        std::cout<<arr2[i]<<" ";

    }

    std::cout<<std::endl;

    std::vector<int> union_arr;

    int i = 0, j = 0;

    while(i<arr1_size && j<arr2_size){

        if(arr1[i] < arr2[j]){

            if(union_arr.empty() || union_arr.back() != arr1[i]){

                union_arr.push_back(arr1[i]);

            }

            i++;

        }
        else if(arr2[j] < arr1[i]){

            if(union_arr.empty() || union_arr.back() != arr2[j]){

                union_arr.push_back(arr2[j]);

            }

            j++;

        }
        else{

            if(union_arr.empty() || union_arr.back()!= arr1[i]){

                union_arr.push_back(arr1[i]);

            }

            i++;

            j++;

        }

    }

    while(i < arr1_size){

        if(union_arr.empty() || union_arr.back() != arr1[i]){

            union_arr.push_back(arr1[i]);

        }

        i++;

    }

    while(j < arr2_size){

        if(union_arr.empty() || union_arr.back() != arr2[j]){

            union_arr.push_back(arr2[j]);

        }

        j++;

    }

    std::cout<<"Union Array: "<<std::endl;

    for(int k=0; k<union_arr.size(); k++){

        std::cout<<union_arr[k]<<" ";

    }

    std::cout<<std::endl;
    
    return 0;

}

