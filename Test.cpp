#include "doctest.h"
#include "NumberWithUnits.hpp"

using namespace ariel;
TEST_CASE("operator +"){
    NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_EQ(a1+a2, NumberWithUnits(5,"km")); // same unit
    CHECK_EQ(a1+b1, NumberWithUnits(2.0035 ,"km"));
    CHECK_EQ(b1+a1, NumberWithUnits(2003.5 ,"m"));
    CHECK_THROWS(a1 + c1);

    // + onary
    CHECK_EQ(+b2, b1); //
    CHECK_EQ(+a1, a1); //

}


TEST_CASE("operator -"){
    NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_EQ(a2-a1, NumberWithUnits(1,"km")); // same unit
    CHECK_EQ(a1-b1, NumberWithUnits(2.0035 ,"km"));
    CHECK_EQ(b1+a1, NumberWithUnits(2003.5 ,"m"));
    CHECK_THROWS(a1 + c1);

    // - onary
    CHECK_EQ(+b2, b1); //
    CHECK_EQ(+a1, a1); //
        CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //
    CHECK_EQ(+a1, a1); //


}
    






    NumberWithUnits u1{500, "cm"};
    NumberWithUnits u2{1000, "cm"}; //10 meter
    NumberWithUnits u3{50, "m"};
    NumberWithUnits u4{5000, "m"}; //5 km
    NumberWithUnits u5{2, "km"};
    NumberWithUnits u6{2, "km"};
    NumberWithUnits u7{200, "g"};
    NumberWithUnits u8{1000, "g"}; //1 kg
    NumberWithUnits u9{500, "kg"};
    NumberWithUnits u10{1200, "kg"}; //1.2 ton
    NumberWithUnits u11{1.5, "ton"};
    NumberWithUnits u12{2, "ton"};
    NumberWithUnits u13{30, "sec"};
    NumberWithUnits u14{60, "sec"}; //1 min
    NumberWithUnits u16{30, "min"};
    NumberWithUnits u17{0.5, "hour"};
    NumberWithUnits u18{60, "hour"};