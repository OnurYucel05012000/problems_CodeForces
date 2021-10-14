#include <iostream>
 
int main() {
	int x;
	std::cin >> x;
	
	
	if (x <= 5) {
		std::cout << 1;
	}
	else
	{
		if (x % 5 == 0)
		{
			x /= 5;
			
		}
		else {
			x /= 5;
			x++;
			
		}
		std::cout << x;
		
	}
 
 
 
	bool qwer;
	std::cin >> qwer;
}
