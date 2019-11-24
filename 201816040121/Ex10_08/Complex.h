//Ex10_08:ComplexPro.h
//ComplexPro class definition.
#ifndef COMPLEXPRO_H
#define COMPLEXPRO_H
using namespace std;
class ComplexPro
{
public:
	friend ostream& operator<<(ostream&, const ComplexPro&);
	friend istream& operator>>(istream&, ComplexPro&);
	ComplexPro(double = 0.0, double = 0.0);//constructor complex
	ComplexPro operator*(const ComplexPro&);//overloaded product calculator
	bool operator==(const ComplexPro&) const;//overloaded equality
	bool operator!=(const ComplexPro&) const;//overloaded inequality
private:
	double real;//real part
	double imaginary;//imaginary part
};
#endif // !COMPLEXPRO_H

