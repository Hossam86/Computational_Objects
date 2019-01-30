#ifndef VECTOR_H
#define VECTOR_H
template <class T, int N>
class vector
{
private:
  T components[N];

public:
  vector(const T &t = 0);         //default constructor
  vector(const T &, int, char *); // argumet constructor
  vector(const vector &v);        //copy constructor

  const vector &operator=(const vector &v); // assignment operator
  const vector &operator=(const T &t);

  const T &operator[](int i) const { return components[i]; }
  void set(int i, const T &a) { components[i] = a; }

  const vector &operator+=(const vector &v);
  const vector &operator-=(const vector &v);
  const vector &operator*=(const T &t);
  const vector &operator/=(const T &);
  ~vector() {}
};
// #include "vector.cpp" // Includes the template methods file
#endif