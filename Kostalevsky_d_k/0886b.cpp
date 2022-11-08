#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> v(200001, -1);
    for (int i = 0; i < n; i++) {
        int ind = 0;
        std::cin >> ind;
        v[ind] = n - i - 1;
    }
    std::cout << std::distance(v.begin(), std::max_element(v.begin(), v.end())); 
}
