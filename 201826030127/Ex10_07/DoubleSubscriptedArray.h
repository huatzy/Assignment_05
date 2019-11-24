#ifndef DOUBLESCRIPTEDARRAY_H_INCLUDED
#define DOUBLESCRIPTEDARRAY_H_INCLUDED
#include<iostream>
using namespace std;
class Array
    {
      public:
         explicit Array(int=3,int=5);
          Array(const Array &arrayTocopy);
          ~Array();
          int getsize();
        friend  istream &operator>>(istream &input,Array &);
        friend  ostream &operator<<(istream &output, const Array &);
        int &operator()( const int &,const int &);
       const int  &operator()(const int , const int ) const;
        const Array& operator=(const  Array & );
        bool operator==(const  Array &) const;
        bool  operator!=(const Array &right) const;
        void  display() const;
      private:
          int row;
          int colum;
          int *ptr;
   };
#endif // DOUBLESCRIPTEDARRAY_H_INCLUDED
