#include <bits/stdc++.h>
using namespace std;

class Point
{
   float x;
   int y;
   int z;
   int p;
public:
   Point(float a, int b,int c,int d)
   {
      x = a;
      y = b;
      z = c;
      p = d;
   }
   float A()  { return x; }
   int B()  { return y; }
   int C()  { return z; }
   int P()  { return p; }
};
 
class Arrange
{
public:
    float operator() ( Point& p1, Point& p2)
    {
        return p1.A() > p2.A();
    }
};
 

