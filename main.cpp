//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
double num1;
  double num2;
  double num3;
  double num4;
public:
Quaternion(double nu1, double nu2, double nu3, double nu4){
    num1 = nu1;
    num1 = nu2;
    num1 = nu3;
    num1 = nu4;
Quaternion();
Quaternion(int);
Quaternion(const Quaternion&);
Quaternion& operator=(const Quaternion&);
bool operator==(const Quaternion &rhs)const{return num == rhs.num;
}
void operator==(const Quaternion&);
void operator+=(const Quaternion&);
void operator-=(const Quaternion&);
void operator*=(const Quaternion&);
private:
double Quaternion;
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
