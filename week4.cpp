#include <iostream>
using namespace std;

int main() {
    double stations[] = {10.5, 20.0, 35.2, 50.1};
    
    // Iteration: Loop through station offsets
    for (int i = 0; i < 4; i++) {
        // Selection: Check boundary condition
        if (stations[i] > 30.0) {
            std::cout << "Station " << stations[i] << ": Outside boundary" << std::endl;
        } else {
            std::cout << "Station " << stations[i] << ": Inside boundary" << std::endl;
        }
    }
    return 0;
}
