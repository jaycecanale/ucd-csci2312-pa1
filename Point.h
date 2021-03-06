// A 3-dimensional point class!
// Coordinates are double-precision floating point.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z;

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // three-argument constructor
  double distanceTo(Point&);

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);

  // Accessor methods
  double getX();
  double getY();
  double getZ();
};

#endif // __point_h
