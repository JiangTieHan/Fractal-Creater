#include "Bitmap.h"

xiaolei::Bitmap::Bitmap(int width, int height) :
	m_width(width),
	m_height(height)
{
}

xiaolei::Bitmap::~Bitmap()
{
}

bool xiaolei::Bitmap::write(std::string filename)
{
	return false;
}

void xiaolei::Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue)
{
}


