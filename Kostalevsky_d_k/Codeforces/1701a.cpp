#include<iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while (t > 0) {
        int c = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int x = 0;
                std::cin >> x;
                c += x;
            }
        }
        if (c == 4) {
            std::cout << 2 << std::endl;
        }
        else if (c > 0) {
            std::cout << 1 << std::endl;
        }
        else {
            std::cout << 0 << std::endl;
        }
        t -= 1;
    }
}