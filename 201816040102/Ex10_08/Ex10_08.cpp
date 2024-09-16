#include<iostream> 
#include"Complex.h" 
using namespace std; 
int main() 
{ 
    Complex x; 
    Complex y(4.0,3.0); 
    Complex z(3.0,1.0);  
    cout<<"x: "; 
    cout<<x; 
    cout<<"\ny: "; 
    cout<<y; 
    cout<<"\nz: "; 
    cout<<z;
    
    x=y+z; 
    cout<<"\n\nx = y + z:"; 
    cout<<x; 
    cout<<" = "; 
    cout<<y; 
    cout<<" + "; 
    cout<<z;
    
    x=y-z; 
    cout<<"\n\nx = y - z:"; 
    cout<<x; 
    cout<<" = "; 
    cout<<y; 
    cout<<" - "; 
    cout<<z; 
    
    x=y*z; 
    cout<<"\n\nx = y * z:"; 
    cout<<x; 
    cout<<" = "; 
    cout<<y; 
    cout<<" * "; 
    cout<<z; 
    
    if ( y == z ) 
      cout << "y equals z" ; 
   if ( y != z ) 
      cout << "y is not equal to z" ; 
}
//This part from the book
