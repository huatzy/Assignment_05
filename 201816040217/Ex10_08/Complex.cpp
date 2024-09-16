#include"Complex.h"


Complex::Complex(double realPart, double imaginaryPart)
:real(realPart),
imaginary(imaginaryPart)
{

}
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex(real + operand2.real,
                   imaginary + operand2.imaginary);
}

Complex Complex::operator-(const Complex &operand2) const
{
    return Complex (real - operand2.real,
                    imaginary - operand2.imaginary);
}

Complex Complex::operator*(const Complex &operand2) const
{
    return Complex ((real * operand2.real) - (imaginary * operand2.imaginary),
                    (imaginary * operand2.real) + (real * operand2.imaginary));
}

Complex Complex::operator/(const Complex &operand2) const
{
    return Complex (((real * operand2.real) + (imaginary * operand2.imaginary)) / (operand2.real*operand2.real+operand2.imaginary*operand2.imaginary),
                    ((imaginary * operand2.real) + (real * operand2.imaginary)) / (operand2.real*operand2.real+operand2.imaginary*operand2.imaginary));
}

istream &operator>>( istream &input, Complex &a)
{
        input >> a.real;
        input >> a.imaginary;

    return input;
}

bool Complex::operator==(const Complex &right)const
{
   if(this->real == right.real)
        if(this->imaginary == right.imaginary)
            return true;
   else
        return false;
}

bool Complex::operator!=(const Complex &right)const
{
   if(this->real == right.real)
        if(this->imaginary == right.imaginary)
            return false;
   else
        return true;
}
ostream &operator<<(ostream &output, const Complex &a)
{
    output<<a.real<<" + "<<a.imaginary;


    return output;
}
