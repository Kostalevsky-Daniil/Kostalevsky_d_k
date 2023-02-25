#include <iostream>

int main() {
    int x = 0;
    int m = 0;
    std::cin >> x >> m;
    while (x % m >= 0) {
    int a = x % m;
    x += a;
    if (x == m) {
        std::cout << "Yes";
        break;
    }
    else if (x % m != 0) {
        std::cout << "No";
        break;
    }
    }
    return 0;
}