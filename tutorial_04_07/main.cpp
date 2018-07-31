#define quiz1

#ifdef quiz1
#include <iostream>


// advertising struct
struct AdStatus {
    long adsShownToUser;
    double percentageClicked;   // = ads clicked / ads shown to user
    double avgEarningPerClick;  // average covering one day
};


// lets user enter an integer
long getLong()
{
    long x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');
    return x;
}


// lets user enter a double
double getDouble()
{
    double x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');
    return x;
}


// prints formatted adStatus to console
void printAdStatus(AdStatus ad)
{
    std::cout << "\n--------------- AdStatus ---------------\n";
    std::cout << " ads shown:\t\t\t"              << ad.adsShownToUser << '\n';
    std::cout << " percentage of ads clicked:\t"  << ad.percentageClicked << "%\n";
    std::cout << " average earning per click:\t"  << ad.avgEarningPerClick << "$\n";
    std::cout << "----------------------------------------\n";
    std::cout << " Money earned by ads today:\t"
              << ad.adsShownToUser * ad.percentageClicked / 100.0 // divide by 100 to convert percentage to real number
              * ad.avgEarningPerClick << "$\n";
    std::cout << "----------------------------------------\n";
}


int main()
{
    AdStatus ad;

    std::cout << "Ads shown to user:\t\t\t\t";
    ad.adsShownToUser = getLong();

    std::cout << "percentage of ads clicked (0 <= p <= 100):\t";
    ad.percentageClicked = getDouble();

    std::cout << "Average earning per click (in $):\t\t";
    ad.avgEarningPerClick = getDouble();

    printAdStatus(ad);

    return 0;
}
#endif // quiz1
