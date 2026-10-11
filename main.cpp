#include "holiday.h"

namespace KimMinSeo2693032
{
    bool compareDayofyear(const dayOfyear& d1, const dayOfyear& d2)
    {
        return d1.getMonth()==d2.getMonth()&& d1.getDay()==d2.getDay();
        }
}

int main()
{
    using namespace KimMinSeo2693032;
    holiday h1; h1.print();
    holiday h2{dayOfyear{12,25}, true}; h2.print();
    
    if (compareDayofyear(h1.getDate(), h2.getDate()))
    std::cout << "same\n";
else
std::cout << "not same \n";
    return 0;
}