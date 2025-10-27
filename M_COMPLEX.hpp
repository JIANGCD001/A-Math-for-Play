/*
Copyright (C) Jiang Chenduan 2025
MIT Licence
*/

#pragma once

#ifndef __M_COMPLEX_HPP__
#   define __M_COMPLEX_HPP__

#   ifndef __M_BASIC__
#       include "M_BASIC.hpp"
#   endif

class COMPLEX
{
    private:
        double real;
        double imagine;
    public:
        COMPLEX()
        {
            real=0;
            imagine=0;
            return;
        }
        COMPLEX(const COMPLEX& complex)
        {
            real=complex.real;
            imagine=complex.imagine;
            return;
        }
        COMPLEX(const double rl,const double imag)
        {
            real=rl;
            imagine=imag;
            return;
        }
        ~COMPLEX()
        {
            real=0;
            imagine=0;
            return;
        }
        double REAL()
        {
            return real;
        } 
        double IMAG()
        {
            return imagine;
        }
        COMPLEX operator + (const COMPLEX& complex)
        {
            COMPLEX ans(real,imagine);
            ans.real+=complex.real;
            ans.imagine+=complex.imagine;
            return ans;
        }
        COMPLEX operator + (const double n)
        {
            COMPLEX ans(real,imagine);
            ans.real+=n;
            return ans;
        }
        COMPLEX operator - (const COMPLEX& complex)
        {
            COMPLEX ans(real,imagine);
            ans.real-=complex.real;
            ans.imagine-=complex.imagine;
            return ans;
        }
        COMPLEX operator - (const double n)
        {
            COMPLEX ans(real,imagine);
            ans.real+=n;
            return ans;
        }
        COMPLEX operator * (const COMPLEX& complex)
        {
            COMPLEX ans(0,0);
            ans.real=real*complex.real-imagine*complex.imagine;
            ans.imagine=real*complex.imagine+imagine*complex.real;
            return ans;
        }
        COMPLEX operator * (const double n)
        {
            COMPLEX ans(real,imagine);
            ans.real*=n;
            ans.imagine*=n;
            return ans;
        }
        COMPLEX operator / (const COMPLEX& complex)
        {
            COMPLEX ans(0,0);
            double under=complex.real*complex.real+complex.imagine*complex.imagine;
            ans.real=(real*complex.real+imagine*complex.imagine)/under;
            ans.imagine=(imagine*complex.real-real*complex.imagine)/under;
            return ans;
        }
        COMPLEX operator / (const double n)
        {
            COMPLEX ans(real,imagine);
            ans.real/=n;
            ans.imagine/=n;
            return ans;
        }
};

inline double ABSOLUTE(COMPLEX complex)
{
    double ans=0.0;
    ans=sqrt(pow(complex.REAL(),2)+pow(complex.IMAG(),2));
    return ans;
}

inline double ANGLE(COMPLEX complex)
{
    double ans=0.0;
    ans=complex.IMAG()/complex.REAL();
    return ans;
}

#endif