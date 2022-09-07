#pragma once
#include <string>
#include <cstdint>

namespace xiaolei {

	class Bitmap {
	private:
		int m_width{ 0 };
		int m_height{ 0 };

	public:
		Bitmap(int width, int height);
		~Bitmap();

		bool write(std::string filename);
		void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	};

}