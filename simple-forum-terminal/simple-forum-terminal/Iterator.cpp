#include "Iterator.h"

template <typename T, typename U>
void Iterator<T, U>::First() {
    m_it_ = m_p_data_->m_data_.begin();
}

template <typename T, typename U>
void Iterator<T, U>::Next() {
    m_it_++;
}

template <typename T, typename U>
bool Iterator<T, U>::IsDone() {
    return (m_it_ == m_p_data_->m_data_.end());
}

template <typename T, typename U>
Iterator<T, U>::iter_type Iterator<T, U>::Current() {
    return m_it_;
}
