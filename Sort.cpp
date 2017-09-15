#include <string>
#include <cstdlib>

#include "Sort.hpp"

static int cmp_area_area_fips(const void *l, const void *r) {
	if (((Area*)l)->area_fips < ((Area*)r)->area_fips)
		return -1;
	else if (((Area*)l)->area_fips > ((Area*)r)->area_fips)
		return 1;
	else
		return 0;
}

void sort_area_by_fips_code(Area *array, size_t num) {
	qsort(array, num, sizeof(Area), cmp_area_area_fips);
}


/* TODO - implement me
void sort_employment_by_area_fips(Employment *array, size_t num) {
}
*/

/* TODO - implement me
void sort_employment_by_annual_avg_estabs(Employment *array, size_t num) {
}
*/

/* TODO - implement me
void sort_employment_by_annual_avg_emplvl(Employment *array, size_t num) {
}
*/

/* TODO - implement me
void sort_employment_by_total_annual_wages(Employment *array, size_t num) {
}
*/
