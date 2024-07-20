#ifndef __ROTARYMARS__VECTORIO__
#define __ROTARYMARS__VECTORIO__
#include <iostream>
#include <vector>
template<class T>
std::istream& operator>>(std::istream&in,std::vector<T>&v){
	for(T&i:v)in>>i;
	return in;
}
template<class T>
std::ostream& operator<<(std::ostream&out,std::vector<T>&v){
	for(T&i:v)out<<i<<' ';
	return out;
}
#else
#endif
