#include <iostream>

int main() {
    int cost, savings;
    std::cout << "Enter the cost of the game: ";
    std::cin >> cost;
    std::cout << "Enter your savings: ";
    std::cin >> savings;
    
    if (savings >= cost)
        std::cout << "You can buy the game! Remaining balance: " << savings - cost << std::endl;
    else
        std::cout << "You need " << cost - savings << " more dollars." << std::endl;
    
    return 0;
}
