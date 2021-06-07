#include "Container.h"

template <class T>
void Container<T>::Add(T a) {
    m_data_.push_back(a);
}

template <class T>
Iterator<T, Container> Container<T>::*CreateIterator() {
    return new Iterator<T, Container<T>>(this);
}
