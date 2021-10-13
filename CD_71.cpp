#include <iostream>
#include <string>


int main() {

	std::string STR;
	int T;
	std::cin >> T;
	
	while (T--) {
		std::cin >> STR;
		if (STR.length() > 10) {

			int nChar = STR.length() - 2;
			std::string Strnchar = std::to_string(nChar);
			std::string Newstr;


			Newstr = STR.substr(0, 1) + Strnchar + STR.substr(STR.length() - 1, 1);

			std::cout << Newstr << "\n";
		}
		else
		{
			std::cout << STR << "\n";
		}

	}

	return 0;
}
