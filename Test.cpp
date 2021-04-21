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
}

TEST_CASE("UNARY +"){
    // - onary
    NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_EQ(+b2, b1); //
    CHECK_EQ(+a1, a1); //
}

TEST_CASE("UNARY -"){
    // - onary
     NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_EQ(b2, -b1); //
}
    
TEST_CASE("operator *"){
    NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_EQ(3*a1, NumberWithUnits(6,"km"));
    CHECK_EQ(a1*3, NumberWithUnits(6,"km"));
    CHECK_EQ(b2*0, NumberWithUnits(0 ,"m"));
    CHECK_EQ(b1*-2, NumberWithUnits(-7 ,"m"));
    }


TEST_CASE("throw"){
    NumberWithUnits a1{2, "km"};
    NumberWithUnits a2{3, "km"};
    NumberWithUnits b1{3.5, "m"};
    NumberWithUnits c1{3, "kg"};
    NumberWithUnits b2{-3.5, "m"};

    CHECK_NOTHROW(a1++);
    CHECK_THROWS(a1++*3);
    CHECK_NOTHROW(a1++);
    CHECK_NOTHROW(a1++);

}
