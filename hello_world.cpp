#include <cstddef>
#include <iostream>

template <class T>

class vector {
  T *data;
  size_t size;

public:
  ~vector<T>() { delete[] data; }

  vector<T>() {
    data = nullptr;
    size = 0;
  }

  vector<T>(std::initializer_list<T> vec) {
    size = vec.size();
    data = new T[size];
    auto *iter = vec.begin();
    for (size_t i = 0; i < vec.size(); ++i, ++iter)
      data[i] = *iter;
  }

  vector<T>(vector<T> const &copy_vec) {
    size = copy_vec.size;
    for (size_t i = 0; i < size; ++i)
      data[i] = copy_vec.data[i];
  }

  friend std::ostream &operator<<(std::ostream &out, const vector<T> &vec) {
    for (size_t i = 0; i < vec.size; ++i)
      out << vec.data[i] << "\t\t";
    return out;
  }
};

int main() {
  vector<int> vec_int{1, 4, 6};
  vector<double> vec_double{1.6, 2.6, 3.1, 1.0};
  std::cout << vec_int << std::endl;
  std::cout << vec_double << std::endl;

  return 0;
}