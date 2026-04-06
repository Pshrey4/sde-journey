// Problem: Largest Perimeter Triangle (Brute force only)
// https://leetcode.com/problems/largest-perimeter-triangle/description/

// Approach:
// - Generate all possible triplets using three nested loops
// - For each triplet:
//     - Check triangle validity using:
//         a + b > c
//         b + c > a
//         a + c > b
// - If valid:
//     - Calculate perimeter
//     - Update maximum perimeter
//     - Print valid triangle (for debugging)
// - If no valid triangle found → output accordingly

// Edge Cases:
// - Array size < 3 → no triangle possible
// - No valid triangle → return 0 / print message
// - All elements same → valid triangle
// - Large values → potential overflow (future concern)

// Mistakes:
// - None (logic implemented correctly)

// Learnings:
// - Triangle validity conditions are essential
// - Brute force using combinations (i < j < k)
// - Tracking maximum value while iterating
// - Debug printing helps understand logic

#include<iostream>

int main(){

    int length;

    std::cout<<"Enter length of array: ";
    std::cin>>length;

    //Loop to check valid length input
    while(length<3){
        std::cout<<"Invalid length. Renter: ";
        std::cin>>length;
    }

    int array[length];

    std::cout<<"Enter elements of array: "<<std::endl;

    //Loop to input array elements
    for(int i=0; i<length; i++){
        std::cin>>array[i];

        //Loop to check valid input of array elements
        while(array[i]<1){
            std::cout<<"Invalid element. Renter: ";
            std::cin>>array[i];
        }
    }
   
    std::cout<<"Array: "<<std::endl;

    //Loop to display array
    for(int i=0; i<length; i++){
        std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    int sum = 0, count = 0, max_perimeter = 0;

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            for(int k=j+1; k<length; k++){
                if(array[i]+array[j] > array[k] &&
                   array[j]+array[k] > array[i] &&
                   array[i]+array[k] > array[j]){
                    sum = array[i] + array[j] + array[k];
                    std::cout<<"["<<array[i]<<","<<array[j]<<","<<array[k]<<"] can form a triangle with perimeter "<<sum<<std::endl;
                    count++;
                    if(max_perimeter<sum){
                        max_perimeter = sum;
                    }
                }
            }
        }
    }

    

    if(count==0){
        std::cout<<"No triangle is formed"<<std::endl;
    }
    else{
        std::cout<<"Maximum perimeter: "<<max_perimeter<<std::endl;
    }

    return 0;
}