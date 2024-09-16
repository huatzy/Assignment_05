#include"DoubleScriptedArray.h"
using namespace std;
Array::Array(int rows,int colums)
          :row(rows),colum(colums)
          {
              ptr=new int (colum*row);
          }
          int Array::getsize()
          {
              int size=colum*row;
              return size;
          }
          Array::~Array()
            {
            delete [] ptr;
            }
        Array::Array(const Array &arrayTocopy)
        {
           ptr=new int(getsize());
            for(int i=0;i<getsize();i++)
            {
                ptr[i]=arrayTocopy.ptr[i];
            }
        }
       istream &operator>>(istream &input,Array &right)
        {
            for(int  i=0;i<right.getsize();i++)
            input>>right.ptr[i];
            return input;
        }
        ostream &operator<<(ostream &output, const Array &right)
        {
            for(int  i=0;i<right.getsize();i++)
            output<<right.ptr[i];
            return output;
        }
        const int &Array::operator()(const int r, const int c)  const
         {
             if(r>row||c>colum)
                throw
                invalid_argument("Out the array");
             return ptr[r*colum+c];
         }
        int &Array::operator()(const int &r , const int &c )
       {
           if(r>row||c>colum)
                throw
                invalid_argument("Out the array");
             return ptr[r*colum+c];
       }
       const Array& Array::operator=(const Array &right)
       {
           if(&right!=this)
           {
               if(getsize()!=right.getsize())
               {
                   delete []ptr;
                   ptr=new int (right.getsize());
               }
               for(int  i=0;i<right.getsize();i++)
               {
                   ptr[i]=right.ptr[i];
               }
           }
           return *this;
       }
        bool Array::operator==(const Array &right) const
        {
         if(getsize()!=right.getsize())
            return false;
         for(int i=0;i<getsize();i++)
         {
             if(ptr[i]!=right.ptr[i])
                return false;
         }
         return true;
        }
         bool  Array::operator!=(const Array &right1) const
         {
            if((operator==(right1))==true)
                return false;
            return true;
         }
         void Array::display() const
         {
             for(int  i=0;i<getsize();i++)
             {
                if(i%colum==0&&i!=0)
                    cout<<endl;
                cout<<ptr[i];
             }
         }
