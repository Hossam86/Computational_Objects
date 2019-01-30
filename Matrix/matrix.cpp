#include "matrix.hpp"

template <class T, int M, int N>
const matrix<T, M, N> &matrix<T, M, N>::operator+=(const matrix<T, M, N> &m)
{
    vector<vector<T, M>, N>::operator+=(m);
    return *this;
}
template <class T, int M, int N>
const matrix<T, M, N> &matrix<T, M, N>::operator-=(const matrix<T, M, N> &m)
{
    vector<vector<T, M>, N>::operator-=(m);
    return *this;
}

template <class T, int M, int N>
const matrix<T, M, N> &matrix<T, M, N>::operator*=(const T &t)
{
    for (int i = 0; i < N; ++i)
    {
        set(i, (*this)[i] * t);
    }
    return *this;
}
template <class T, int M, int N>
const matrix<T, M, N> &matrix<T, M, N>::operator/=(const T &t)
{
    for (int i = 0; i < N; i++)
    {
        set(i, (*this[i] / t));
    }
    return this;
}