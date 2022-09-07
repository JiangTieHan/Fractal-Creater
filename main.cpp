#include <iostream>
#include "FractalCreator.h"
#include "RGB.h"

int main() {
	FractalCreator fractalCreator(800, 600);
	fractalCreator.run("test.bmp");

	std::cout << "Finished." << std::endl;
	return 0;
}