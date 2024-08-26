#include <iostream>

int main() {
    int total_distance = 42, daily_run;
    std::cout << "Enter distance run today: ";
    std::cin >> daily_run;
    
    total_distance -= daily_run;
    
    if (total_distance <= 0)
        std::cout << "Marathon completed!" << std::endl;
    else
        std::cout << "Distance remaining: " << total_distance << " km" << std::endl;
    
    return 0;
}
