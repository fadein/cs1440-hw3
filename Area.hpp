#pragma once

#include <string>
#include <iostream>

class Area {
	public:
		std::string	area_fips;
		std::string	area_title;

		Area(
			std::string	_area_fips,
			std::string	_area_title);

		friend std::ostream& operator<<(std::ostream& os, const Area& a);
};

