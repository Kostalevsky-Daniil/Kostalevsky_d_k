#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        int count = 0;
        std::string c;
        std::string s;
        std::cin >> n;
        std::cin >> c;

        for (int i = 0; i < n; i++) {
            std::string s1;
            std::cin >> s1;
            s += s1;
        }
        
    }
    return 0;
} 