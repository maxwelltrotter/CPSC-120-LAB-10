
#include "ray.h"

Point3 Ray::origin() const { 
  // Complete this method
  return origin_;
}

Vec3 Ray::direction() const {
  // Complete this method
  return direction_;
}

Point3 Ray::at(double t) const {
  // Complete this method
  return origin_ + (t * direction_);
}

std::ostream& operator<<(std::ostream& out, const Ray& r) {
  out << "Ray(origin=" << r.origin() << ", direction=" << r.direction() << ")";
  return out;
}
