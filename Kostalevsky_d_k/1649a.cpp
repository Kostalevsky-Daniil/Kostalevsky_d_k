#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::vector<int> v;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            std::cin >> temp;
            v.push_back(temp);
        }
        int lhs = 0;
        while (lhs + 1 < n && v[lhs + 1]) {
            ++lhs;
        }
        int rhs = n - 1;
        while (rhs > 0 && v[rhs - 1]) {
            --rhs;
        }
        int answ = rhs - lhs;
        answ = (answ > 0) ? answ : 0;
        std::cout << answ << std::endl;
    }
    return 0;
}
