#pragma once
#include <string>;
#include <cstdint>
#include <memory>
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "FractalCreator.h"

using namespace xiaolei;

class FractalCreator
{
private:
	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_histogram;
	std::unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total;
public:
	FractalCreator(int width, int height);
	~FractalCreator();

private:
	void calculateIteration();
	void calculateTotalIterations();
	void drawFractal();
	void addZoom(const Zoom& zoom);
	void writeBitMap(std::string name);

public:
	void run(std::string name);
};

