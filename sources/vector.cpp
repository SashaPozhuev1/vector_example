#include <algorithm>
#include <cassert>

#include "vector.hpp"

vector_t::vector_t()
{
	//
	elements_ = nullptr;
	size_ = 0;
	capacity_ = 0;
	//
}

vector_t::vector_t(vector_t const & other)
{
	//
	size_ = other.size_;
	capacity_ = other.capacity_;
	
	elements_ = new int [ capacity_ ];
	for ( std::size_t i = 0; i < size_; ++i ) {
		elements_[ i ] = other.elements_[ i ];
	}
	//
}

vector_t & vector_t::operator =(vector_t const & other)
{
	//
	delete[] elements_;
	
	size_ = other.size_;
	capacity_ = other.capacity_;
	
	elements_ = new int [ capacity_ ];
	for ( std::size_t i = 0; i < size_; ++i ) {
		elements_[ i ] = other.elements_[ i ];
	}
	//
	return *this;
}

bool vector_t::operator ==(vector_t const & other) const
{
	//
	if ( size_ != other.size_ && capacity_ != other.capacity_){
	return false;	
	}
	else {
		for ( std::size_t i = 0; i < size_; ++i ) {
			if ( elements_[i] != other.elements_[i] ) {
				return false;
			}
		}
	}
	//
	return true;
}

vector_t::~vector_t()
{
	delete[] elements_;
}

std::size_t vector_t::size() const
{
    return size_;
}

std::size_t vector_t::capacity() const
{
    return capacity_;
}

void vector_t::push_back(int value)
{
	//
	if (size_ + 1 > capacity_) {
	
		int newsize_ = size_ + 1;
		int newcapacity_ = capacity * 2;
		int * newelements_ = new int [newcapacity_];
		
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
	//
}

void vector_t::pop_back()
{
	//
	
	//
}

int & vector_t::operator [](std::size_t index)
{
	return elements_[0];
}

int vector_t::operator [](std::size_t index) const
{
	return 0;
}

bool operator !=(vector_t const & lhs, vector_t const & rhs)
{
	return true;
}
