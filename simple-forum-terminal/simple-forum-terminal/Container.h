#include "Iterator.h"

template <class T>
class Container {
    friend class Iterator<T, Container>;

public:
    void Add(T a);
    Iterator<T, Container> *CreateIterator();

private:
    std::vector<T> m_data_;
};
