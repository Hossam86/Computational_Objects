#ifndef MATRIX_H
#define MATRIX_H
#include "../Vector/vector.hpp"
#include "../Vector/vector.cpp"

template <class T, int M, int N>
class Matrix : public vector<vector<T, M>, N>
{
private:
  // T /* data */;

public:
  Matrix();
  //implicit converter
  Matrix(const vector<vector<T, M>, N> &) {}
  //read Matrix element
  const T &operator()(int i, int j) const { return *this[i][j]; }

  //update operator
  const Matrix &operator+=(const Matrix &);
  const Matrix &operator-=(const Matrix &);
  const Matrix &operator*=(const T &);
  const Matrix &operator/=(const T &);
};
#endif
