#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
public:
	Array() : size_(0), ar_(new T[0]()){};//初期化のため「new T[0]()」=>()をつける
	Array(unsigned int n) : size_(n), ar_(new T[n]()) {};
	Array(const Array &obj) : size_(obj.size()), ar_(obj.copyAr()) {};
	Array &operator = (const Array &obj) {
		if (this != &obj) {
			this->size_ = obj.size();
			T *arDst = obj.copyAr();
			//copyが成功したらすげ替え
			delete [] this->ar_;
			this->ar_ = arDst;
		}
		return (*this);
	};
	~Array(){
		delete [] this->ar_;
	};

	unsigned int	size() const {
		return this->size_;
	};
	T *copyAr() const {
		T *arDst = new T[this->size_]();
		for (unsigned int i=0;i<this->size_;i++) {
			arDst[i] = this->ar_[i];
		}
		return (arDst);
	}

	T &operator[](unsigned int index) {
		if (index >= this->size_)
			throw std::out_of_range("Array index out of bounds");
		return this->ar_[index];
	}

	const T &operator[](unsigned int index) const {
		if (index >= this->size_)
			throw std::out_of_range("Array index out of bounds");
		return this->ar_[index];
	}
private:
	unsigned int	size_;
	T				*ar_;
};

#endif //ARRAY_HPP
