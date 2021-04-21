/*#include "NumberWithUnits.hpp"
#include <cstdlib>

using namespace ariel;
const NumberWithUnits aa(1,"null");
static void read_units(ifstream& units_file){

}

bool operator==(const NumberWithUnits& n2) const{
     if(unit==n2.unit){
            if(val==n2.val){
                return true;
            }
        }
        return true;
}       
        
        
    bool NumberWithUnits::operator!=(const NumberWithUnits& n1) {
        return true;
        }

    // bigger-then and smaller-then operators
    bool NumberWithUnits::operator>(const NumberWithUnits& n1,const NumberWithUnits& n2) {return true;}
    bool NumberWithUnits::operator<(const NumberWithUnits& n1,const NumberWithUnits& n2) {return true;}

    // bigger-equal-then and smaller-ewual-then operators
    bool operator>=(const NumberWithUnits& n1,const NumberWithUnits& n2)  {return true;}
    bool operator<=(const NumberWithUnits& n1,const NumberWithUnits& n2)  {return true;}

    // plus and minus unary
    NumberWithUnits NumberWithUnits::operator+(){
        //return NumberWithUnits(abs(val),unit);
        return *this;

    }
    NumberWithUnits operator-(){
        //return NumberWithUnits(-abs(val),unit);
        return *this;

    }


// add and sub operators
    NumberWithUnits operator+(const NumberWithUnits& n1,const NumberWithUnits& n2){
        // return NumberWithUnits(n1.val+n2.val,n1.unit);
        return ariel::NumberWithUnits(1,"unit");

    }
    NumberWithUnits operator-(const NumberWithUnits& n1,const NumberWithUnits& n2){
        //return NumberWithUnits(n1.val-n2.val,n1.unit);  
        return ariel::NumberWithUnits(1,"unit");

    }


    // add-equal, sub-equal operators
    NumberWithUnits& operator+=(const NumberWithUnits& n){
        //val+= n.val;
        //return *this;
        return *this;

    }
    NumberWithUnits& operator-=(const NumberWithUnits& other){
        return *this;
    }


    // incriment operators
    NumberWithUnits& operator++(){
        this.val++;
        return *this;
    }
    NumberWithUnits operator++(int flagForPostfix){
        NumberWithUnits copy = *this;
        this.val++;
        return copy;
    }

    // decriment operators
    NumberWithUnits& operator--(){
        //val--;
        return *this;
    }

    NumberWithUnits operator--(int flagForPostfix){
        NumberWithUnits copy = *this;
        //val--;
        return copy;
    }

    
    
    // multiplication by double from left
    NumberWithUnits operator*(const double num, const NumberWithUnits& n) {
        return n * num;
    }

    // multiplication by double from right
    const NumberWithUnits operator*(const double num) const{
        this.val*=num;
        return *this;
    }

    // output and input
    stream& operator<<(ostream& os, const NumberWithUnits& n){
        return os << n.val <<"["<<n.unit<<"]";
    }
    istream& operator>>(istream& is, NumberWithUnits& n){
        return is;
    }
*/

#include "NumberWithUnits.hpp"
namespace ariel{

NumberWithUnits a(1, "km");
void NumberWithUnits::read_units(ifstream &file)
{
}

//matemtic operator +
//
NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &n)const
{
    
    return a;
}

NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits &other)
{
    
    return a;
}
NumberWithUnits &NumberWithUnits::operator+()
{
    return a;
}
// -
NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &n) const
{
    
    return a;
}
NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits &other)
{
    
    return a;
}
NumberWithUnits &NumberWithUnits::operator-() const
{
    return a;
}

//comper operator
bool NumberWithUnits::operator==(const NumberWithUnits &other) const
{
    return true;
}
bool NumberWithUnits::operator!=(const NumberWithUnits &other) const
{
    return true;
}

bool NumberWithUnits::operator<=(const NumberWithUnits &other) const
{
        return true;

}
bool NumberWithUnits::operator>=(const NumberWithUnits &other) const
{
      return true;
}
bool NumberWithUnits::operator<(const NumberWithUnits &other) const
{
        return true;

}
bool NumberWithUnits::operator>(const NumberWithUnits &other) const
{
        return true;

}

//perfix\postfix
 NumberWithUnits &NumberWithUnits::operator++()
{
    return *this;
}
const NumberWithUnits &NumberWithUnits::operator++(int dummy_flag_for_postfix_increment)
{
    return *this;
}
 NumberWithUnits &NumberWithUnits::operator--()
{
    return *this;
}
const NumberWithUnits &NumberWithUnits::operator--(int dummy_flag_for_postfix_increment)
{
    return *this;
}
// multi
NumberWithUnits operator*(double num, const NumberWithUnits& n) {
    return a;
}

NumberWithUnits& NumberWithUnits::operator*(const double n) const
{
        return a;
}
//input output

std::ostream&operator<<(ostream &os, const NumberWithUnits &n)
{
    return os;
}
std::istream& operator>>(istream &is, NumberWithUnits &n)
{
    return is;
}   
};