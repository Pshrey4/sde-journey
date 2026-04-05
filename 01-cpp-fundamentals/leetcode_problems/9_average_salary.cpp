// Problem: Average Salary Excluding the Minimum and Maximum Salary
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/

// Approach:
// - Take input array of salaries
// - Traverse array once to calculate:
//     - total sum
//     - minimum salary
//     - maximum salary
// - Subtract min and max from total sum
// - Divide by (n - 2) to get average

// Edge Cases:
// - Minimum valid size (length = 3)
// - Duplicate values in array
// - Salaries containing minimum allowed value

// Mistakes:
// - Initially tried removing elements equal to min and max (failed for duplicates)
// - Added unnecessary filtering instead of adjusting formula

// Learnings:
// - Use (sum - min - max) instead of filtering elements
// - One-pass traversal is more efficient
// - Input validation should use loops to ensure correctness

#include<iostream>

int main(){

    int length;

    std::cout<<"Enter array length: ";
    std::cin>>length;

    //Enter salary array length
    while(length<3){
        std::cout<<"Invalid array length. Renter: ";
        std::cin>>length;
    }

    float salary_array[length];

    std::cout<<"Enter salaries in array: "<<std::endl;

    //Filling the array using for loop
    for(int i=0; i<length; i++){
        std::cin>>salary_array[i];
        while(salary_array[i]<1000){
            std::cout<<"Salary amout too low. Renter: ";
            std::cin>>salary_array[i];
        }
    }

    //Print array for verification
    for(int i=0; i<length; i++){
        std::cout<<salary_array[i]<<" ";
    }

    std::cout<<std::endl;

    float min_salary = salary_array[0], max_salary = salary_array[0], salary_sum = 0, average_salary;

    //Calculating sum of salaries as well as maximum and minimum salaries 
    for(int i=0; i<length; i++){
        salary_sum += salary_array[i];

        if(min_salary > salary_array[i]){
            min_salary = salary_array[i];
        }

        if(max_salary < salary_array[i]){
            max_salary = salary_array[i];
        }
    }

    //Calculating average salary excluding minimum and maximum salary
    average_salary = (salary_sum - max_salary - min_salary) / (length - 2);

    std::cout<<"Average Salary: "<<average_salary<<std::endl;

    return 0;
}