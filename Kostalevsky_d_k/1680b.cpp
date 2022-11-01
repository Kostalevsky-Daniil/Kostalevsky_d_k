#include <iostream>
#include <string>
 
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n = 0, m = 0;
        std::cin >> n >> m;
        int l = 100, hl = 0, h = 1000;
        std::string s;
        for (int i = 0; i < n; i++) {
            std::cin >> s;
            for (int k = 0; k < m; k += 1) {
                if (s[k] == 'R') {
                    if (k < l) {
                        l = k;
                        hl = i;
                    }
                    if (n < h) {
                        h = i;
                    }
                }
            }
        }
                    if (hl == h) {
                std::cout << "YES" << std::endl;
            } else {
                std::cout << "NO" << std::endl;
            }
        
    }
    return 0;
}