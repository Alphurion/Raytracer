#include <cmath>
#include <numbers>
#include <string>
#include "Ray.h"

class Object
{
  Position origin;
  std::string color;
  float A, B, C, D;
  public: 
  friend class Cube;
  friend class Sphere;
  friend class Ellipse;

  virtual bool checkIntersection(Ray v);

};

class Cube : Object
{

  public:
  virtual bool checkIntersection(Ray v);
  Cube(Position position, float A, float B, float C, float D, std::string color);
  ~Cube();

};

class Sphere : Object
{

};

class Ellipse : Object
{

};