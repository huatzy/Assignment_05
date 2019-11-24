#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
     friend std::istream &operator>>(std::istream &input,Complex &); //declare a friend for the function called operator>>
     friend std::ostream &operator<<(std::ostream &output,Complex &);
public:
    Complex(double = 0.0,double = 0.0); //constructor for Complex
    Complex operator*(const Complex &);
    bool operator==(Complex &); //declare the function for operator==
    bool operator!=(Complex &);
private:
    double real; //data member called real
    double imaginary; //data member called imaginary
};
#endif
