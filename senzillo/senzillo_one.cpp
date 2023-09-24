#include <iostream>

int main() {
	unsigned short ust{ 0 };
	unsigned char uct{ 0 };
	unsigned short part{ 0 };
	unsigned long long ull{ 0 };

	for (ust = 0; ust < (0b1111111111111111); ust++) {
		for (uct = 0; uct < (0b11111111); uct++) {
			/*std::cout.width(6);
			std::cout.fill('0');
			std::cout << ust << " - ";
			std::cout.width(4);
			std::cout.fill('#');
			std::cout << (short)uct << " _-_ ";
			std::cout.width(16);
			std::cout.fill('X');
			std::cout << (uint64_t)ull << std::endl;*/
			if(ust>(short)uct){
				part = ust - uct;
				ull += part;
			}
		}
	}

	std::cout.width(5);
	std::cout.fill('0');
	std::cout << ust << " - ";
	std::cout.width(3);
	std::cout.fill('#');
	std::cout << (short)uct << " _-_ ";
	std::cout.width(16);
	std::cout.fill('0');
	std::cout << (uint64_t)ull << std::endl;
	std::cout <<
		sizeof(ust ) << " ust  " <<
		sizeof(uct ) << " uct  " <<
		sizeof(ull ) << " ull  " <<
		sizeof(part) << " part " << std::endl;

	std::cin.get();
}