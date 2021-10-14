#include <iostream>
 
int main() {
	int i=0, j=0;
	int x;
	while (true) {
		std::cin >> x;
 
		if (x == 1)break;
		
 
		j++;
		if (j == 5) {
			j = 0;
			i++;
		}
	
	}
 
	
	
	std::cout << abs(2 - i) + abs(2 - j)<<"\n";
	
	std::cin >> i;
}
