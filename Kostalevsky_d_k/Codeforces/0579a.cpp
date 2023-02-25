#include <iostream>

int main() {
    int x = 0; 
    std::cin >> x;
    int count = 0;
    while (x != 0) {
        count += x & 1;
        x = x >> 1;
    }
    std::cout << count;
    return 0;
}