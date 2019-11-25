#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend std::ostream &operator<<( std::ostream&, const Complex& ) ;//Input and output operations on functions with friend function
    friend std::istream &operator>>( std::istream&, Complex &);//Input and output operations on functions with friend function
public:
    explicit Complex( double = 0.0 ,double = 0.0 );//Initialize double value to zero
    Complex operator+( const Complex & ) const;
    Complex operator-( const Complex & ) const;
    Complex operator*( const Complex & ) const;
    /*Determine if two complex numbers are equal*/
    bool operator==(Complex &);//
    bool operator!=(Complex &);//
private:
    double real;
    double imaginary;
};

#endif // COMPLEX_H_INCLUDED
