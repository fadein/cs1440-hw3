#include <iostream>
#include <iomanip>

#include "Employment.hpp"
#include "Area.hpp"
#include "Database.hpp"
#include "Loop.hpp"
#include "Stats.hpp"
#include "Sort.hpp"

int main(void) {
	std::cout << count_all_empl(software_publishing)
		<< " FIPS areas reporting across the software publishing industry" << std::endl;

	std::cout << count_all_empl(all_industries)
		<< " FIPS areas reporting across all industries" << std::endl;

	std::cout << "Total annual wages over all industries in 2016 is $"
		<< total_annual_wages(all_industries) << std::endl
		<< "And the average wage is $"
		<< std::setprecision(12)
		<< mean_annual_wages(all_industries) << std::endl;

	std::cout << "There are " << count_all_areas(fips_areas)
		<< " FIPS area codes in the database" << std::endl;

	std::cout << "10 unsorted FIPS areas:\n";
	for (int i = 0; i < 10; ++i)
		std::cout << fips_areas[i] << std::endl;
	// sort the first 10 fips areas
	sort_area_by_fips_code(fips_areas, 10);
	std::cout << "\n\n10 sorted FIPS areas:\n";
	for (int i = 0; i < 10; ++i)
		std::cout << fips_areas[i] << std::endl;
}
