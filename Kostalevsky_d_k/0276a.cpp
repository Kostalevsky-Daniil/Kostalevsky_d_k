#include <iostream>
 
int main() {
    int n = 0, k = 0, max = -10000000000, max1 = -10000000000;
    std::cin >> n;
    std::cin >> k;
    while (n > 0) {
        int f = 0, t = 0, temp = 0;
        std::cin >> f;
        std::cin >> t;
        if (t >= k) {
            max = f - (t - k);
        }
        else {
            max = f;
        }
        if (max1 < max) {
            max1 = max;
        }
        else {
            max = max1;
        }
        n--;
    }
    std::cout << max1;
    return 0;
}
