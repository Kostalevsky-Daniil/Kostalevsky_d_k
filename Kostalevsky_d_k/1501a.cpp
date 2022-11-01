#include <iostream>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int ai = 0, bi = 0;
		int time = 0;
		std::vector <int> a (101);
		std::vector <int> b (101);
		std::vector <int> c (101);
		for (int i = 1; i <= n; ++i) {
			std::cin >> a[i] >> b[i];
		}
		for (int i = 1; i <= n; ++i) {
			std::cin >> c[i];
		}
		for (int i = 0; i < n; ++i) {
			if (b[i] > time + (b[i] - a[i] + 1) / 2) {
				time = b[i];
			}
			else {
				time = time + (b[i] - a[i] + 1) / 2;
			}
			time += a[i + 1] - b[i] + c[i + 1];
		}
		std::cout << time << std::endl;
	}
	return 0;
}