#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, k = 0, r = 0, c = 0;
        std::cin >> n >> k >> r >> c;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if ((i + j) % k == (c + r) % k) {
                    std::cout << 'X';
                }
                else {
                    std::cout << '.';
                }
            }
            std::cout << "\n";
        }
    }
    return 0;
}