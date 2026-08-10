// Algorithm: Rotate Array Left or Right by K Positions

// Approach:


// Time Complexity: 
// Space Complexity: 

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

        std::reverse(arr.begin(), arr.begin() + (k+1));

        std::reverse(arr.begin() + (k+1), arr.end());

        std::cout<<"Array After Left Rotation: "<<std::endl;

        for(int i=0; i<arr_size; i++){

            std::cout<<arr[i]<<" ";

        }

        std::cout<<std::endl;

    }

    return 0;

}

