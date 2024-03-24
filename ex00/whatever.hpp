#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//swap
template <typename T> void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

//min
//algorithmのmin: https://cpprefjp.github.io/reference/algorithm/min.html
//等価な要素が 2つ以上あった場合には、最も左の要素を返す。
//subject: If the two of them are equal, then it returns the second one.
//=> 本課題では2つめの値を返す
template <typename T> T &min(T &a, T &b) {
	return ((a < b) ? a : b);
}

//max
//algorithmのmax: https://cpprefjp.github.io/reference/algorithm/max.html
//等価な要素が 2 つ以上あった場合には、最も左の要素を返す。
//subject: If the two of them are equal, then it returns the second one.
//=> 本課題では2つめの値を返す
template <typename T> T &max(T &a, T &b) {
	return ((a > b) ? a : b);
}

#endif //WHATEVER_HPP
