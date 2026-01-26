#include <iostream>

// Pass-by-reference (double& a, etc.) and Return-by-reference (double&)
double& getMaxBearing(double& a, double& b, double& c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    double b1 = 45.5, b2 = 120.3, b3 = 89.1;
    
    double& maxB = getMaxBearing(b1, b2, b3);
    std::cout << "Max: " << maxB << std::endl;
    
    maxB = 0.0; 
    return 0;
}