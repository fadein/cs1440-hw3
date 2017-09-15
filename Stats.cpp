#include "Stats.hpp"
#include "Loop.hpp"

// total employment level across all FIPS areas in this dataset
long unsigned total_employment_level(Employment *array) {
	unsigned long emp = 0;

	for (int i = 0; array[i].area_fips != "END"; ++i)
		emp += array[i].annual_avg_emplvl;

	return emp;
}

// average employees per FIPS area
float average_employment_level(Employment *array) {
	int n = count_all_empl(array);
	unsigned long emp = total_employment_level(array);

	return static_cast<float>(emp) / static_cast<float>(n);
}


// total wages paid across all FIPS areas in this dataset
long unsigned total_annual_wages(Employment *array) {
	unsigned long wages = 0;

	for (int i = 0; array[i].area_fips != "END"; ++i)
		wages += array[i].total_annual_wages;

	return wages;
}


// average wage per employee represented in this dataset
float mean_annual_wages(Employment *array) {
	unsigned long n = total_employment_level(array);
	unsigned long wages = total_annual_wages(array);

	return static_cast<float>(wages) / static_cast<float>(n);
}


/* TODO - implement me
unsigned long minimum_annual_wages(Employment *array) {
	return 0UL;
}
*/


/* TODO - implement me
unsigned long maximum_annual_wages(Employment *array) {
	return 0UL;
}
*/


/* TODO - implement me
unsigned long median_annual_wages(Employment *array) {
	return 0UL;
}
*/


/* TODO - implement me
unsigned long mode_annual_wages(Employment *array) {
	return 0UL;
}
*/

/* TODO - implement me
float stdev_annual_wages(Employment *array) {
	return 0.0;
}
*/


/* TODO - implement me
unsigned long unique_annual_wages(Employment *array) {
	return 0UL;
}
*/


/* TODO - implement me
std::string loc_max_wages(Employment *array, Area *fips) {
	return std::string("");
}
*/


/* TODO - implement me
std::string loc_min_wages(Employment *array, Area *fips) {
	return std::string("");
}
*/


/* TODO - implement me
std::string loc_med_wages(Employment *array, Area *fips) {
	return std::string("");
}
*/


/* TODO - implement me
void top_10_fips_areas_by_salary(Employment *array, Area *fips) {
}
*/


/* TODO - implement me
void bot_10_fips_areas_by_salary(Employment *array, Area *fips) {
}
*/
