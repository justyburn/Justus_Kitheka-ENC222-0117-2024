#include <iostream>

int main() {
    // Original Array
    int ids[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // Resulting Arrays
    int even[20], odd[20];
    int e = 0, o = 0;

    for (int i = 0; i < 20; i++) {
        // Logic to separate Even/Odd
        if (ids[i] % 2 == 0) even[e++] = ids[i];
        else odd[o++] = ids[i];
    }

    for (int i = 0; i < e; i++) std::cout << even[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < o; i++) std::cout << odd[i] << " ";
    
    return 0;
}
