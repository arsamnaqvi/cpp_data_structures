
namespace custom {

template <typename T> class vector {
protected:
  unsigned int _size;
  unsigned int _capacity;
  T *_data;

public:
  class iterator {};
  // constructors and destructors
  vector();
  vector(unsigned int n);
  vector(unsigned int n, T val);
  ~vector();

  // element access
  T &at(unsigned int pos);
  T &operator[](const int &i);
  T &front();
  T &back();
  T *data();

  // iterators
  iterator begin() noexcept;
  iterator end() noexcept;
  iterator rbegin() noexcept;
  iterator rend() noexcept;

  // capacity
  bool empty();
  unsigned int size();
  unsigned int max_size();
  void reserve(unsigned int new_cap);
  unsigned int capacity();
  void shrink_to_fit();

  // modifiers
  void clear();
  iterator insert(const iterator pos);
  // others
  vector operator=(const vector &x);
}; // end class vector

}; // end namespace custom