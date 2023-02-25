#include <iostream>
#include <vector>

int main() {
    int n = 0;
    int a = 0;
    int b = 0;
    int t = 0;
    int c = 0;
    std::vector<int> v;
    std::cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        std::cin >> temp;
        v.push_back(temp);
        t += temp;
    }
    std::sort(v.begin() + 1, v.end());
    int s = v[0];
    for (int i = 1; i < n; i++) {
        s += v[i];
        if (1ll * b * s <= 1ll * a * v[0]) {
            c = i;
        }
    }
    std::cout << n - 1 - c << std::endl;
    return 0;
}