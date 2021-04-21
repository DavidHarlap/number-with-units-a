#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

namespace ariel {
class NumberWithUnits {
   private:
    double num;
    string unit;

   public:
    //static map<string, map<string, double>> _unitsConverter = {};
    
    NumberWithUnits(double v, string u) : num(v), unit(u) {}

    static void read_units(ifstream& units_file);

      // equal and not-equal operators
    bool operator==(const NumberWithUnits& n) const;
    bool operator!=(const NumberWithUnits& n) const;

    // bigger-then and smaller-then operators
     bool operator>(const NumberWithUnits& n ) const ;
     bool operator<(const NumberWithUnits& n ) const ;

    // bigger-equal-then and smaller-ewual-then operators
    bool operator>=(const NumberWithUnits& n ) const  ;
    bool operator<=(const NumberWithUnits& n ) const  ;

    // plus and minus unary
    NumberWithUnits& operator+();
    NumberWithUnits& operator-() const;


// add and sub operators
    NumberWithUnits operator+(const NumberWithUnits& n) const;
    NumberWithUnits operator-(const NumberWithUnits& n) const;


    // add-equal, sub-equal operators
    NumberWithUnits operator+=(const NumberWithUnits& other);
    NumberWithUnits operator-=(const NumberWithUnits& other);


    // incriment operators
    NumberWithUnits& operator++();
    const NumberWithUnits& operator++(int flagForPostfix);

    // decriment operators
    NumberWithUnits& operator--();
    const NumberWithUnits& operator--(int flagForPostfix);

    
    
    // multiplication by double from left
    friend NumberWithUnits operator*(double num, const NumberWithUnits& n);

    // multiplication by double from right
    NumberWithUnits& operator*(const double num)const;

    // output and input
    friend ostream& operator<<(ostream& os, const NumberWithUnits& n);
    friend istream& operator>>(istream& is, NumberWithUnits& n);
};
}  // namespace ariel
