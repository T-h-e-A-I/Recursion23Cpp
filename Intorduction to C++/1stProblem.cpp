#include<iostream>
int main(){
    int number; //To store the user input

    std::cout << "Please enter a number: " ; //Prompting my user to enter a number
    std::cin  >> number;                    //Read the input from user
    /*
        This line helps us to double the number 
        and print that number in the command line or terminal
    */
    std::cout<< "The double of the given number "<< number <<" is "<< number*2 << std::endl;

    return 0;

}