#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 18)
        std::cout << "Already eligible" << std::endl;
    else
        std::cout << "Years left until 18: " << 18 - age << std::endl;
    
    return 0;
}
