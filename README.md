# This message is brought to you by the number 1

Employment and wage data courtesy the US Federal Government Bureau of Labor and
Statistics

* https://www.bls.gov/cew/datatoc.htm
* https://data.bls.gov/cew/doc/titles/industry/industry_titles.htm
* https://data.bls.gov/cew/doc/titles/area/area_titles.htm
* https://data.bls.gov/cew/doc/titles/ownership/ownership_titles.htm
* https://data.bls.gov/cew/doc/layouts/csv_annual_layout.htm


## Crunching Numbers

Compute the following statistics on both the national aggregate data as well as
the software publishing industry data:

* Mean annual salary
* Standard Deviation of salaries
* Top 10 annual salaries, displayed with human-recognizable Area Title
* Bottom 10 annual salaries, displayed with human-recognizable Area Title
* Median annual salary, displayed with human-recognizable Area Title
* Mode of annual salaries, along with the number of areas representing that value
* Number of unique salaries in the dataset

## Sorting things out

It will be easier to compute some of the required statistics if you first sort
the datasets. Besides, I just want you to sort these arrays in a few different
ways.

Write comparators to use with the qsort() function (#include <cstdlib>) to sort
the datasets on the following keys:

1. Employment
  * on the numeric values
  * by the fips area codes

2. Area
  * by the fips area codes

You will demonstrate that the arrays are sorted by printing the first and last
5 elements of the arrays.
