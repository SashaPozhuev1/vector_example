/*#include <algorithm>
#include <cassert>

#include "vector.hpp"

template <typename T>
vector_t<T>::vector_t()
{
	elements_ = nullptr;
	size_ = 0;
	capacity_ = 0;
}

template <typename T>
vector_t<T>::vector_t(vector_t<T> const & other)
{
	size_ = other.size_;
	capacity_ = other.capacity_;
	
	elements_ = new T [ capacity_ ];
	for ( std::size_t i = 0; i < size_; ++i ) {
		elements_[ i ] = other.elements_[ i ];
	}
}

template <typename T>
vector_t<T> & vector_t<T>::operator =(vector_t<T> const & other)
{
	if ( this != &other ) {
		delete[] elements_;
	
		size_ = other.size_;
		capacity_ = other.capacity_;
	
		elements_ = new T [ capacity_ ];
		for ( std::size_t i = 0; i < size_; ++i ) {
			elements_[ i ] = other.elements_[ i ];
		}
	}
	return *this;
}

template <typename T>
bool vector_t<T>::operator ==(vector_t<T> const & other) const
{
	if ( elements_ == other.elements_ ) {
		return true;
	}
	else if ( size_ != other.size_ || capacity_ != other.capacity_ ) {
	return false;	
	}
	else if ( size_ == other.size_ && capacity_ == other.capacity_ ) {
		for ( std::size_t i = 0; i < size_; ++i ) {
			if ( elements_[i] != other.elements_[i] ) {
				return false;
			}
		}
	}
	return true;
}

template <typename T>
vector_t<T>::~vector_t()
{
	delete[] elements_;
}

template <typename T>
std::size_t vector_t<T>::size() const
{
    return size_;
}

template <typename T>
std::size_t vector_t<T>::capacity() const
{
    return capacity_;
}

template <typename T>
void vector_t<T>::push_back(int value)
{
	if (capacity_ == 0) {
		int newsize_ = size_ + 1;
		int newcapacity_ = capacity_ + 1;
		int * newelements_ = new T [newcapacity_];
		
		for ( std::size_t i = 0; i < size_; ++i ) {
			newelements_[ i ] = elements_[ i ];
		}
		newelements_[ size_ ] = value;
		
		delete[] elements_;
		size_ = newsize_;
		capacity_ = newcapacity_;
		elements_ = newelements_;	
	}
	else if (size_ + 1 > capacity_) {
	
		int newsize_ = size_ + 1;
		int newcapacity_ = capacity_ * 2;
		int * newelements_ = new T [newcapacity_];
		
		for ( std::size_t i = 0; i < size_; ++i ) {
			newelements_[ i ] = elements_[ i ];
		}
		newelements_[ size_ ] = value;
		
		delete[] elements_;
		size_ = newsize_;
		capacity_ = newcapacity_;
		elements_ = newelements_;
	}
	else {
		elements_[ size_ ] = value;
		size_++;
	}
}

template <typename T>
void vector_t<T>::pop_back()
{
	if (size_ == 0) {
		
	}
	else if (size_ - 1 == 0) {
		int newsize_ = size_ - 1;
		int newcapacity_ = 1;
		int * newelements_ = new T [newcapacity_];	
		delete[] elements_;
		size_ = newsize_;
		capacity_ = newcapacity_;
		elements_ = newelements_;
	}
	else if ( size_ - 1 > capacity_ / 4 ) {
		size_--;
	}
	else {
		int newsize_ = size_ - 1;
		int newcapacity_ = capacity_ / 2;
		int * newelements_ = new T [newcapacity_];	
		
		for ( std::size_t i = 0; i < newsize_; ++i ) {
			newelements_[ i ] = elements_[ i ];
		}
		delete[] elements_;
		size_ = newsize_;
		capacity_ = newcapacity_;
		elements_ = newelements_;
	}
}

template <typename T>
int & vector_t<T>::operator [](std::size_t index)
{
	return elements_[index];
}

template <typename T>
int vector_t<T>::operator [](std::size_t index) const
{
	return elements_[index];
}

template <typename T>
int & at (std::size_t index)
{
	if ( index < 0 || index >= size_ ) {
		throw std::out_of_range( "Error overflow" );
	}
	return elements_[index];
}

template <typename T>
bool operator !=(vector_t<T> const & lhs, vector_t<T> const & rhs)
{
	if ( lhs == rhs ) {
		return false;	
	}
	else {
		return true;
	}
}
*/
