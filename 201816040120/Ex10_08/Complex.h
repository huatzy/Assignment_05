#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;
class Complex
{
    friend std::ostream& operator<<(std::ostream & , const Complex &);
    friend std::istream& operator>>(std::istream & , Complex &);
public:
    explicit Complex (double = 0.0,double = 0.0);
    Complex operator*(const Complex &) const;
    bool operator==(const Complex &) const;
    bool operator!=(const Complex & right) const
    {
        return!(*this == right);
    }
private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H_INCLUDED
