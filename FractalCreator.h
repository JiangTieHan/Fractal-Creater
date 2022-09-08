#pragma once
#include <string>;
#include <cstdint>
#include <memory>
#include "Mandelbrot.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "FractalCreator.h"
#include "RGB.h"

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
	std::vector<int> m_ranges;
	std::vector<RGB> m_colors;
	std::vector<int> m_rangesTotal;

	bool m_bGotFirstRange;

public:
	FractalCreator(int width, int height);
	~FractalCreator();

private:
	void calculateIteration();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitMap(std::string name);
	int getRange(int iterations) const;

public:
	void addZoom(const Zoom& zoom);
	void addRange(double rangeEnd, const RGB& rgb);
	void run(std::string name);
};

