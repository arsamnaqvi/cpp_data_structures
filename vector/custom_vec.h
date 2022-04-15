
namespace custom{

template <typename T>
class vec {
    protected:
        unsigned int _size;
        unsigned int _capacity;
        T* _data;

    public:
        vec();
        vec(unsigned int n);
        vec(unsigned int n, T val);
        ~vec();
        vec operator= (const vec& x);
        unsigned int size();
        unsigned int capacity();
        bool empty();
        T& operator[] (const int& i);
};//end class vec

};// end namespace custom