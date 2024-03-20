#ifndef ITER_HPP
#define ITER_HPP

template <typename T> class Array {
public:
	Array() : size_(0), ar_(new T){};//new T[0]?
	Array(unsigned int n) : size_(n), ar_(new T[n]) {};
	Array(const Array &obj) : size_(obj.size()), ar_(obj.copyAr()) {
	};
	Array &operator = (const Array &obj) {
		if (this != &obj) {
			this->size_ = obj.size();
			delete [] this->ar_;
			this->ar_ = obj.copyAr();
		}
		return (*this);
	};
	~Array(){
		delete [] ar_;
	};
	unsigned int	size() const {
		return size_;
	};
	T *copyAr() {
		T * arDst = new T[size_];
		for (unsigned int i=0;i<size_;i++;) {
			arDst[i] = ar_[i];
		}
		return (arDst);
	}
private:
	T				*ar_;
	unsigned int	size_;
}

#endif //ITER_HPP
