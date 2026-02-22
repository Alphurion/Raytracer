#include <cmath>

struct Position
{
  float x, y, z;
  
  Position(float x, float y, float z);
};

class Ray
{
  //A ray will have a constant theta with an increasing radius
  float theta, radius;
  
  public:
  Ray(float x, float y);
  Ray(float theta, float radius);

  bool operator==(Ray v) const;
  bool operator==(Position pos) const;
  bool operator!=(Ray v) const;
  bool operator==(Position pos) const;

};