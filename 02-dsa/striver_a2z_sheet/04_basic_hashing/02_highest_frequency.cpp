// Problem: Given an array of size n. Find the highest and lowest frequency element.

// Approach:
// Take the array elements as input.
// Use an unordered_map to store the frequency of each element.
// Traverse the map to find the maximum and minimum frequencies.
// Store all elements having maximum frequency in one vector.
// Store all elements having minimum frequency in another vector.
// Print all maximum and minimum frequency elements with their frequencies.

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<unordered_map>
#include<vector>

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


    int max_frequency = 0;
    int min_frequency = arr_length;

    // When I used only one variable here it is difficult to store if there are more than one max or min frequency elements
    // int max_element;
    // int min_element;

    std::vector<int> max_elements;
    std::vector<int> min_elements;    

    for(auto i: mp){
        int element = i.first;
        int count = i.second;

        if(count > max_frequency){
            max_frequency = count;       
            max_elements.clear();
            max_elements.push_back(element);
        }
        else if(count == max_frequency){
            max_elements.push_back(element);
        }

        if(count < min_frequency){
            min_frequency = count;
            min_elements.clear();
            min_elements.push_back(element);
        }
        else if(count == min_frequency){
            min_elements.push_back(element);
        }
    }

    std::cout << "Maximum Frequency Elements: "<<std::endl;
    for(int i : max_elements){
        std::cout<<i<<"->"<<max_frequency<<std::endl;
    }

    std::cout << "Minimum Frequency Elements: "<<std::endl;
    for(int i : min_elements){
        std::cout<<i<<"->"<<min_frequency<<std::endl;
    }

    return 0;
}