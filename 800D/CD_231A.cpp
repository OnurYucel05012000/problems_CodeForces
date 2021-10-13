#include <iostream>

int main() {

	
	int T;
	std::cin >> T;
	short a, b, c;
	short problem =0;

	while (T--) {
		std::cin >> a >> b >> c;
		if (a + b + c >= 2)problem++;


	}std::cout << problem << "\n";

	return 0;
}
