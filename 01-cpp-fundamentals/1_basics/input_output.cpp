#include<iostream>
#include<limits>

int main(){

    //Example 1: Taking integer as input

    int a, b, c;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    c=a+b;
    std::cout<<"Sum is "<<c<<std::endl;

    ///////////////////////////////////////

    //Example 2: Taking string as input

    std::string name;
    std::cout<<"May I know your name? "; 
    std::cin>>name;

    // std::cin >> reads input only until the first whitespace.
    // For example, if the user enters: "Taylor Swift"
    // then `name` becomes "Taylor" and the remaining input " Swift\n"
    // stays in the input buffer.
    //
    // When std::getline() is called immediately after, it will read the leftover
    // newline character '\n' from the buffer and return an empty string without
    // waiting for new user input.
    //
    // To prevent this, we clear the input buffer using:
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //
    // The <limits> header is required because it provides std::numeric_limits.
    // std::numeric_limits<std::streamsize>::max() represents the maximum number
    // of characters that can be ignored from the input stream.
    //
    // This effectively discards everything remaining in the buffer until the
    // newline character '\n' is found, ensuring that the following getline()
    // correctly waits for fresh input from the user.

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Hello Mr/Mrs/Miss "<<name<<std::endl;

    ////////////////////////////////////////////////////////////////////////////

    //Example 3: Taking input using getline

    std::string good_name;
    std::cout<<"May I know your name? ";
    std::getline(std::cin, good_name);
    std::cout<<"Welcome Miss "<<good_name<<std::endl;

    ////////////////////////////////////////////////////

    return 0;
}