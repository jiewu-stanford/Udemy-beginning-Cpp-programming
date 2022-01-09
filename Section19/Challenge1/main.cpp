#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
	std::string name;
	long population;
	double cost;
};


struct Country {
	std::string name;
	std::vector<City> cities;
};


struct Tours {
	std::string title;
	std::vector<Country> countries;
};


int main()
{
	Tours tours
	{
		"Tour Ticket Prices from Miami",
		{
			{
				"Colombia", {
					{"Bogota",8778000,400.98},
					{"Cali",2401000,424.12},
					{"Medellin",2464000,350.98},
					{"Cartagena",972000,345.34}
				},
			},
			{
				"Brazil", {
					{"Rio De Janiero",135000000,567.45},
					{"Sao Paulo",11310000,975.45},
					{"Salvador",18234000,855.99}
				},
			},
			{
				"Chile", {
					{"Valdivia",260000,569.12},
					{"Santiago",7040000,520.00}
				},
			},
			{
				"Argentina", {
					{"Buenos Aires",3010000,723.77}
				}
			},
		}
	};
	
//	std::cout << tours.title << std::endl;
//	for (auto country: tours.countries) {
//		std::cout << country.name << std::endl;
//		for (auto city: country.cities) {
//			std::cout 	<< "\t" << city.name
//						<< "\t" << city.population
//						<< "\t" << city.cost
//						<< std::endl;
//		}
//	}

	const int total_width {70};
	const int country_field_width {20};
	const int city_field_width {25};
	const int population_field_width {10};
	const int cost_field_width {15};
	
	// title
	int title_length = tours.title.length();
	std::cout 	<< std::endl << std::endl;
	std::cout 	<< std::setw((total_width-title_length)/2) << "" << tours.title << std::endl;
	std::cout 	<< std::endl;
	
	// header
	std::cout 	<< std::setw(country_field_width) << std::left << "Country"
				<< std::setw(city_field_width) << std::left << "City"
				<< std::setw(population_field_width) << std::right << "Population"
				<< std::setw(cost_field_width) << std::right << "Price" << std::endl;
	std::cout 	<< std::setw(total_width) << std::setfill('-') << "" << std::endl;
	
	// format
	std::cout << std::setfill(' ');
	std::cout << std::setprecision(2) << std::fixed;
	
	// body (cf. header)
	for (auto country: tours.countries) {
		for (size_t ii=0;ii<country.cities.size();++ii) {
		std::cout	<< std::setw(country_field_width) << std::left << ((ii==0)?country.name:"")
					<< std::setw(city_field_width) << std::left << country.cities.at(ii).name
					<< std::setw(population_field_width) << std::right << country.cities.at(ii).population
					<< std::setw(cost_field_width) << std::right << country.cities.at(ii).cost << std::endl;
		}
	}
	
	std::cout << std::endl << std::endl;
	return 0;
}