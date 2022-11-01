#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        std::vector<int> v(202);
        int n = 0;
        int x = 0;
        std::cin >> n;
        std::cin >> x;
        for (int i = 0; i < n; i++) {
            int k = 0;
            std::cin >> k;
            v[k] = 1;
        }
        for (int i = 1; i < v.size(); i++) {
		    if (v[i] == 0 and x != 0) {
		        x -= 1;
		        v[i] = 1;
            } 
            if (x == 0 and v[i] == 0){
		        std::cout << i - 1 << std::endl;
		        break;
		    }
        }
    } 
    return 0;
}