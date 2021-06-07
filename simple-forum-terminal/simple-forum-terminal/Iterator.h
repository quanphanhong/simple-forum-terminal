#include <iostream>
#include <vector>

template <typename T, typename U>
class Iterator {
public:
    typedef typename std::vector<T>::iterator iter_type;
    Iterator(U *p_data, bool reverse = false) : m_p_data_(p_data) {
        m_it_ = m_p_data_->m_data_.begin();
    }

    void First();
    void Next();
    bool IsDone();
    iter_type Current();

private:
    U *m_p_data_;
    iter_type m_it_;
};
