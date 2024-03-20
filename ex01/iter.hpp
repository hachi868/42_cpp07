#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void iter(T *ar, size_t len, void (*f)(T)) {
	for(size_t i=0; i<len; i++)
		f(ar[i]);
}

#endif //ITER_HPP
