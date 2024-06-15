#ifndef __ROTARYMARS__INVERSE_ELEMENT__
#define __ROTARYMARS__INVERSE_ELEMENT__ 1
#include <cstdlib>
#include <template/isprime.hpp>
#include <template/powmod.hpp>
template<class T>
T inverse_element(T x, T mod){
    if(!ISPRIME(mod))abort();
    return POWMOD(x,mod-2,mod);
}
#else
#endif
