#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//swap
template <typename T> void swap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//min
template <typename T> T min(T &a, T &b) {
	return ((a < b) ? a : b);
}

//max
template <typename T> T max(T &a, T &b) {
	return ((a > b) ? a : b);
}

#endif //WHATEVER_HPP
