#include <string>
#include "list.cpp"

template class List<char>;
template class List<char16_t>;
template class List<char32_t>;
template class List<wchar_t>;

template class List<short>;
template class List<int>;
template class List<long>;
template class List<long long>;

template class List<float>;
template class List<double>;
template class List<long double>;

template class List<std::string>;