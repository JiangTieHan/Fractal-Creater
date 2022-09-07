#include <iostream>
#include <cstdint>
#include <memory>
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "FractalCreator.h"

using namespace std;
using namespace xiaolei;

int main() {
	int height = 600;
	FractalCreator fractalCreator(800, 600);

	fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
	fractalCreator.addZoom(Zoom(312, height - 304, 0.1));
	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitMap("test.bmp");

	cout << "Finished." << endl;
	return 0;
}