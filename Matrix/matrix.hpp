#ifndef MATRIX_H
#define MATRIX_H
template <class T, int M, int N>
class matrix : public vector<vector<T, M>, N>
{
private:
  T /* data */;

public:
  matrix();
  //implicit converter
  matrix(const vector<vector<T, M>, N> &) {}
  //read matrix element 
  const T &operator()(int i, int j) const { return *this[i][j] }
};
#endif