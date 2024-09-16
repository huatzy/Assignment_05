#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
   DoubleSubscriptedArray <int>a(3,4),b(5,6);
   cin >> a;
   cout << "a" << a;
   cin >> b;
   cout << "b" << b;
   b = a;
   cout << "b is : " << b;
   return 0;
}
