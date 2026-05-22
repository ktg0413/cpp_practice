const int dmv =17; // dmv is a named constant
int var = 17; // var is not a constant

constexpr double max1 = 1.4square(dmv); // Ok if square(17) is a constant expression
constexpr duble max2 = 1.4*square(var); // error var is not a constant expression
const double max3 = 1.4*square(var); // ok may be ecaluated at run time

dobule sum(const vector<double>&); // sum will not modify its argument
vector<double> v {1.2, 3.4, 4.5}; // v is not a constant

const double s1 = sum(v); // ok evaluated at run time
constexpr double s2 = sum(v); // error sum(v) not constant expression

// what is evaluated at run time??