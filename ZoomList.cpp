#include "ZoomList.h"

xiaolei::ZoomList::ZoomList() :
	m_xCenter(0),
	m_yCenter(0),
	m_scale(1.0),
	m_width(0),
	m_height(0)
{
}

xiaolei::ZoomList::ZoomList(int width, int height) :
	m_xCenter(0),
	m_yCenter(0),
	m_scale(1.0),
	m_width(width),
	m_height(height)
{
}

std::pair<double, double> xiaolei::ZoomList::doZoom(int x, int y)
{
	double xFractal = (x - m_width / 2) * m_scale + m_xCenter;
	double yFractal = (y - m_height / 2) * m_scale + m_yCenter;
	return std::pair<double, double>(xFractal, yFractal);
}

void xiaolei::ZoomList::add(const Zoom& zoom)
{
	zooms.push_back(zoom);
	m_xCenter += (zoom.x - m_width / 2) * m_scale;
	m_yCenter += (zoom.y - m_height / 2) * m_scale;

	m_scale *= zoom.scale;
}
