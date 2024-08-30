#include<iostream>

int main(){
    int x; //1st variable to store user input
    int y; //2nd variable to store user's another input

    //Prompting my user to enter two numbers
    std::cout << "Please enter two numbers: ";
    //This line helps us to take two numbers as input
    std::cin >> x >> y; 
    
    /*
    Output:
    The next line prints two numbers in my terminal
    */
    std::cout<< "The two numbers are: "<< x << " and " << y << std::endl;

    return 0;
}