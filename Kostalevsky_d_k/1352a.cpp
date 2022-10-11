#include <iostream>
 
int main() {
    int t = 0;
    std::cin >> t;
    while (t != 0) {
        int y = 0, f = 5, m = 0, n = 0, k = 0;
        std::cin >> y;
        k = y;
        while (f != 0) {
            m = y % 10;
            if (m != 0) {
                n++;
            }
        y = y / 10;
        f--;
        }
        std::cout << n << std::endl;
        int n1, n2, n3, n4, n0;
        n0 = k / 10000;
        n1 = k % 10000 / 1000;
        n2 = k % 1000 / 100;
        n3 = k % 100 / 10;
        n4 = k % 10;
        if (n0 != 0) { 
            std::cout << n0 * 10000 << " "; 
        } 
        if (n1 != 0) { 
            std::cout << n1 * 1000 << " "; 
        } 
        if (n2 != 0) { 
            std::cout << n2 * 100 << " "; 
        } 
        if (n3 != 0) { 
            std::cout << n3 * 10 << " "; 
        } 
        if (n4 != 0) { 
            std::cout << n4 << std::endl; 
        } 
        t = t - 1; 
    }   
    return 0;
}
