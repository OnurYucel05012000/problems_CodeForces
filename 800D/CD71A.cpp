#include <iostream>
#include <string>


int main() {

	std::string STR;
	int T;
	std::cout<<"Enter T"<<"\n";
	std::cin >> T;
	
	while (T--) {
		std::cout<<"Enter word"<<"\n";
		std::cin >> STR;
		if (STR.length() > 10) {

			int nChar = STR.length() - 2;
			
			std::string Newstr;


			Newstr = STR.substr(0, 1) + std::to_string(nChar) + STR.substr(STR.length() - 1, 1);

			std::cout << Newstr << "\n";
		}
		else
		{
			std::cout << STR << "\n";
		}

	}

	return 0;
}
