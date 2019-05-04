#include <iostream>
#include "activity1.h"
#include "activity2.h"

using namespace std;

void changeShape(Square &s)
{
        int w;
        cout<<"Before making changes, the area of the square is " <<s.getArea()<<endl;
        cout<<"Enter the new width of the square."<<endl;
        cin>>w;
        cin.ignore();

        s.setWidth(w);
}
