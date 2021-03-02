//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

 class Quaternion{
  double q;
  double p;
  double r;
  double n;
public:
  Quaternion(double a, double b, double c, double d){
    q = a;
    p = b;
    r = c;
    n = d;
  }

  Quaternion operator+(const Quaternion& z)const{
    Quaternion here{0,0,0,0};
    here.q = this->q + z.q;
    here.p = this->p + z.p;
    here.r = this->r + z.r;
    here.n = this->n + z.n;
    return here;
  }
  Quaternion operator-(const Quaternion& z)const{
    Quaternion minus{0,0,0,0};
    minus.q = this->q - z.q;
    minus.p = this->p - z.p;
    minus.r = this->r - z.r;
    minus.n = this->n - z.n;
    return minus;
  }
  Quaternion operator*(const double& yn)const{
    Quaternion multi{0,0,0,0};
    multi.q = this->q * yn;
    multi.p = this->p * yn;
    multi.r = this->r * yn;
    multi.n = this->n * yn;
    return multi;
  }
  bool operator==(const Quaternion& z)const{
    if (this->q == z.q){
      if (this->p == z.p){
        if (this->r == z.r){
          if (this->n == z.n){
            return true;
          }
          else{
            return false;
          }
        }
        else{
          return false;
        }
      }else{
        return false;
      }
    }
    else{
      return false;
    }
  }
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
