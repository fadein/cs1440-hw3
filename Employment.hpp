#pragma once
#include <string> 
#include <ostream>


class Employment {
	public:
		std::string   area_fips;
		unsigned      annual_avg_estabs;
		unsigned      annual_avg_emplvl;
		long unsigned total_annual_wages;

		Employment(
				std::string   _area_fips,
				unsigned      _annual_avg_estabs,
				unsigned      _annual_avg_emplvl,
				long unsigned _total_annual_wages);

		friend std::ostream& operator<<(std::ostream& os, const Employment& emp);  
};
