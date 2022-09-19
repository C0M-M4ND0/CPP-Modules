#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class	Array
{
	private:
		T	*array;
		unsigned int	size_;
	public:
		Array(void){
			size_ = 0;
			array = nullptr;
		};

		Array(unsigned int n){
			size_ = n;
			array = new T[size_]();
		};

		Array(const Array<T> &src){
			size_ = src.size_;
			if (size_ > 0)
			{
				array = new T[size_]();
				for (unsigned int i = 0; i < size_;i++)
					array[i] = src.array[i];
			}
			else
				array = nullptr;
		};

		Array &operator=(const Array<T> &rhs){
			if (size_ > 0)
				delete[] array;
			size_ = rhs.size_;
			if (size_ > 0)
			{
				array = new T[size_]();
				for (unsigned int i = 0; i < size_;i++)
					array[i] = rhs.array[i];
			}
			else
				array = nullptr;
			return (*this);
		};

		T& operator[](unsigned int idx){
			if (idx >= size_)
				throw std::out_of_range("Out of Range");
			return (array[idx]);
		};

		const T& operator[](unsigned int idx) const{
			if (idx >= size_)
				throw std::out_of_range("Out of Range");
			return (array[idx]);
		};

		unsigned int size(void) const {
			return (size_);
		};

		~Array(void){
			delete[] array;
		};
};

#endif
