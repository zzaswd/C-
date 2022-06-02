#include <iostream>


int main_gugudan(int argc, char* argv[]) {

	for (int idx = 1; idx <10; idx++) {
		for (int jdx = 2; jdx < 10; jdx++) {
			//std::cout.width(10);
			std::cout << jdx << "*" << idx << "="<<jdx*idx<<'\t';
		}
		std::cout << std::endl;
	}
	return 0;
}