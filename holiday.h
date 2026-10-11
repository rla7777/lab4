#pragma once
#include "dayOfyear.h"
namespace KimMinSeo2693032
{
class holiday
{
dayOfyear d;
bool parkingEnforcement;
public: 
holiday(dayOfyear d0={1,1}, bool p0=false)
:d{d0}, parkingEnforcement{p0}
{}
holiday(int m, int d, bool p)
:d{m,d}, parkingEnforcement{p}
{}
void print() const
{
    d.print();
    if (parkingEnforcement) 
    std::cout<<"Parking laws will be enforced.\n";
    else
    std::cout << "Parking laws will not be enforced.\n";

}
const dayOfyear& getDate()const {return d; }
void setDate(const dayOfyear& d0) 
{d=d0; }
};
}
