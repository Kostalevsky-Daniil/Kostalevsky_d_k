#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0, sx = 0, sy = 0, d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        if ((sx + d >= n and sy + d >= m) or (sx - d <= 1 and sy - d <= 1) or (sx + d >= n and sx - d <= 1) or (sy + d >= m and sy - d <= 1)) {
            std::cout << -1 << std::endl;
        }
        else {
            std::cout << (m - 1) + (n - 1) << std::endl;
        }
    }
    return 0;
}