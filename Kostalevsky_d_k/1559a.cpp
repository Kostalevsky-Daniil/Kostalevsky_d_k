#include <iostream>
#include <vector>

int main() {
    int t = 0, n = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; i++) {
            std::cin >> v[i];
        }
        int ans = v[0];
        for (int i = 1; i < v.size(); i++) {
            ans &= v[i];
        }
        std::cout << ans << std::endl;
    }
    return 0;
}   