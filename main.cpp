#include <iostream>
#include "Bitmap.h"

using namespace xiaolei;
int main()
{
	const int WIDTH = 800;
	const int HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	for (int x = 0; x < WIDTH; x++)
		for (int y = 0; y < HEIGHT; y++)
		{
			double xFractal = (x - WIDTH / 2) * 2.0 / WIDTH; 
			double yFractal = (y - HEIGHT / 2) * 2.0 / HEIGHT;
			if (xFractal < min) min = xFractal;
			if (xFractal > max) max = xFractal;

			//bitmap.setPixel(xFractal, yFractal, 255, 0, 0);
		}

	std::cout << min << ", " << max << std::endl;

	bitmap.write("test.bmp");

	std::cout << "Finished." << std::endl;
	return 0;
}