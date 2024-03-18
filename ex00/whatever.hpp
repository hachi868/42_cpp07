#ifndef CPP07_WHATEVER_HPP
#define CPP07_WHATEVER_HPP

//swap
template <typename T> void swap(T &a, T &b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

//min
template <typename T> T min(T &a, T &b) {
	if (a < b) return (a);
	else return (b);
}

//max
template <typename T> T max(T &a, T &b) {
	if (a < b) return (b);
	else return (a);
}

#endif //CPP07_WHATEVER_HPP
