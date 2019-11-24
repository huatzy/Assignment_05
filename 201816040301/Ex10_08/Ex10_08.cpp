#include <iostream>

#include "Rectangle.h"

#include "Point.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {



    Point n1(5,5),n2(8,5),n3(5,2),n4(8,2);

    Rectangle r1(n1,n2,n3,n4);

    cout<<"length is :"<<r1.setlength()<<endl;

    cout<<"width is :"<<r1.setwidth()<<endl;

    r1.square();

    cout<<"perimeter is :"<<r1.setperimeter()<<endl;

    cout<<"area is :"<<r1.setarea()<<endl;

	return 0;

}
