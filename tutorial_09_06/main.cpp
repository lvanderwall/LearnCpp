#define quiz2

#ifdef quiz1
#include <iostream>
#include "cents.h"


int main()
{
    Cents dime(10);
    Cents nickle(5);

    if (nickle > dime)
        std::cout << "a nickle is greater than a dime.\n";
    if (nickle >= dime)
        std::cout << "a nickle is greater than or equal to a dime.\n";
    if (nickle < dime)
        std::cout << "a dime is greater than a nickle.\n";
    if (nickle <= dime)
        std::cout << "a dime is greater than or equal to a nickle.\n";

    return 0;
}
#endif // quiz1
#ifdef quiz2
#include <iostream>
#include <vector>
#include <algorithm>
#include "car.h"


int main()
{
	std::vector<Car> v;
	v.push_back(Car("Toyota", "Corolla"));
	v.push_back(Car("Honda", "Accord"));
	v.push_back(Car("Toyota", "Camry"));
	v.push_back(Car("Honda", "Civic"));

	std::sort(v.begin(), v.end()); // requires an overloaded operator<

	for (auto &car : v)
		std::cout << car << '\n'; // requires an overloaded operator<<

	return 0;
}
#endif // quiz2
