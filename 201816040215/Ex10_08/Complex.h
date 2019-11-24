//Fig. 10.14: Complex.h
//Complex class definitopn
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complex
{
    friend std::ostream &operator<<( std::ostream &,const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &,DoubleSubscriptedArray & );
public:
    explicit Complex( double  = 0.0 );// constructor
    Complex operator+( const Complex & ) const;// addtion
    Complex operator-( const Complex & ) const;// subtraction
    Complex operator*( const Complex & ) const;//
    bool operator==( const Complex & ) const;
    bool operator!=( const Complex &right ) const
    {
        return !( *this == right );
    }
    void print() const;// output
private:
    double real;// real part
    double imaginary;// imaginary part
};//end class Complex


#endif // COMPLEX_H_INCLUDED
