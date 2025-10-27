#include <iostream>
#include "M_COMPLEX.hpp"

int main()
{
    COMPLEX* cplx1=new COMPLEX(1,2);
    COMPLEX* cplx2=new COMPLEX(2,3);
    std::cout<<cplx1->REAL()<<" "<<cplx1->IMAG()<<"\n";
    (*cplx1)=(*cplx1)+(*cplx2);
    std::cout<<cplx1->REAL()<<" "<<cplx1->IMAG()<<"\n";
    delete cplx1;
    delete cplx2;
    return 0;
}