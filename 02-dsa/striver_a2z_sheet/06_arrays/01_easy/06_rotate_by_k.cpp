// Algorithm: Rotate Array Left or Right by K Positions

// Approach:
// Normalize k using k % arr_size to avoid unnecessary full rotations.
// For right rotation:
// Reverse the entire array.
// Reverse the first k elements.
// Reverse the remaining elements.
// For left rotation:
// Reverse the entire array.
// Reverse the first n-k elements.
// Reverse the remaining k elements.
// Convert the direction input to lowercase so that inputs such as
// "RIGHT", "Right", and "right" are handled consistently.

// Time Complexity: O(n) (a constant number of reversals and traversals)
// Space Complexity: O(1) (rotation is performed in-place)

#include <bits/stdc++.h>

int main(){

    int arr_size;

    std::cout<<"Enter size of array: ";
    std::cin>>arr_size;

    std::vector<int> arr(arr_size);

    std::cout<<"Enter elements of array: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cin>>arr[i];

    }

    if(arr_size <= 1) return 0;

    int k;

    std::cout<<"How many steps should array rotate by?: ";
    std::cin>>k;

    std::string direction;

    std::cout<<"Right or Left rotate?: ";
    std::cin>>direction;

    std::transform(direction.begin(), direction.end(), direction.begin(), ::tolower);

    std::cout<<"Array Before Rotation: "<<std::endl;

    for(int i=0; i<arr_size; i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    k = k % arr_size;

    if(direction == "right"){

        std::reverse(arr.begin(), arr.end());

        std::reverse(arr.begin(), arr.begin() + k);

        std::reverse(arr.begin() + k, arr.end());

        std::cout<<"Array After Right Rotation: "<<std::endl;

        for(int i=0; i<arr_size; i++){

            std::cout<<arr[i]<<" ";

        }

        std::cout<<std::endl;

    }
    else if(direction == "left"){

        std::reverse(arr.begin(), arr.end());

        std::reverse(arr.begin(), arr.begin() + (arr_size - k));

        std::reverse(arr.begin() + (arr_size - k), arr.end());

        std::cout<<"Array After Left Rotation: "<<std::endl;

        for(int i=0; i<arr_size; i++){

            std::cout<<arr[i]<<" ";

        }

        std::cout<<std::endl;

    }

    return 0;

}

