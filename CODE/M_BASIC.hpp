/*
Copyright (C) Jiang Chenduan 2025-2050
Software Licence, Version 1.0
*/

#pragma once

#ifndef __M_BASIC_HPP__
#   define __M_BASIC_HPP__

#   ifndef _GLIBCXX_CMATH
#       include <cmath>
#   endif

#   ifndef __M_BASIC_VERSION__
#       define __M_BASIC_VERSION__
#   endif

template<typename T>
bool BIGGER(const T a,const T b)
{
    return a>b;
}

template<typename T>
bool SMALLER(const T a,const T b)
{
    return a<b;
}

template<typename T>
T MAX(const T a,const T b)
{
    return a>b?a:b;
}

template<typename T>
T MIN(const T a,const T b)
{
    return a<b?a:b;
}

template<typename T>
T SUM(const T* param,size_t size,T zero)
{
    T ans=zero;
    for (size_t i=0;i<size;i++)
    {
        ans+=param[i];
    }
    return ans;
}

template<typename T>
T PROD(const T* param,size_t size,T unit)
{
    T ans=unit;
    for (size_t i=0;i<size;i++)
    {
        ans*=param[i];
    }
    return ans;
}

template<typename T>
T POWER(const T base,int power,T unit)
{
    T ans=unit;
    T a=base;
    while (power>0)
    {
        if (power&1)
        {
            ans*=base;
        }
        a*=a;
        power>>=1;
    }
    return ans;
}

template<typename T>
T MODPOWER(const T base,int power,T unit,T mod)
{
    T ans=unit;
    T a=base;
    while (power>0)
    {
        if (power&1)
        {
            ans=(ans*base)%mod;
        }
        a=(a*a)%mod;
        power>>=1;
    }
    return ans;
}

template<typename T>
T ABS(T item)
{
    return ABSOLUTE(item);
}

template<typename T>
T SGN(T item,T zero,T unit)
{
    if (item==zero)
    {
        return zero;
    }
    else if (item>zero)
    {
        return unit;
    }
    else
    {
        return -unit;
    }
}

#endif