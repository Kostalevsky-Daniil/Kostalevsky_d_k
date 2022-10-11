#include <iostream>

int main() {
    int y, s1, s2, s3, s4;
    std::cin >> y;
    for (y++; y <= 9100; y++) {
        s1 = y / 1000;
        s2 = (y / 100) % 10;
        s3 = (y / 10) % 10;    
        s4 = y % 10;
        if (s1 != s2 and s2 != s3 and s3 != s4 and s1 != s4 and s2 != s4 and s1 != s3) {
            std::cout << y;
            break;
        }
    }
    return 0;
}
