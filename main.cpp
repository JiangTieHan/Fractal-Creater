#include <iostream>
#include "Bitmap.h"

using namespace xiaolei;
int main()
{
	Bitmap bitmap(800, 600);

	bitmap.setPixel(100, 100, 255, 255, 255);
	bitmap.write("test.bmp");

	std::cout << "Finished." << std::endl;
	return 0;
}