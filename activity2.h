#ifndef ACTIVITY2_
#define ACTIVITY2_

#include "activity1.h"

using namespace std;

class Square : public Shape
{
        public:
                Square (int w, int h)
                {
                        setWidth(w);
                        setHeight(h);
                }
                int getArea()
                {
                        int x = getWidth() * getHeight();
                        return x;
                }
};

class Triangle : public Shape
{
        public:
                Triangle(int w, int h)
                {
                        setWidth(w);
                        setHeight(h);
                }
                int getArea()
                {
                        float x = getWidth() * getHeight();
                        float y = x/2;
                        int z = (int) y;
                        return z;
                }

};
void changeShape(Square &s);

#endif
                                
