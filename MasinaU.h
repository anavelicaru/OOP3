#pragma once
#include "Haina.h"
#include "Masina.h"
//masina de uscat are ca diferenta faptul ca
//functioneaza pe baza numarului de itemi, nu cantitatea

class masinaU
{
    int itemMax;
    int nrItemi;
    set<haina> L;
    public:
    masinaU();
    bool add_haina(haina);
    void set_masinaU(int);
    set<haina> turn_on();
};
masinaU::masinaU()
{
    nrItemi=0;
}
virtual bool masinaU::add_haina(haina x)
{
    if(nrItemi+1()<itemMax) //daca am unde sa adaug
          nrItemi++;
          L.insert(x);
          return 1;
         }
         else
  return 0;
}

void masinaU::set_masinaU(int n)
{
    itemMax=n;
}

set<haina> masinaU::turn_on() //o functie din masina care foloseste mai multe haine
{
    set<haina> X;
    if(nrItemi>=itemMax/2)
    {
       X=L;
       L.erase(L.begin(),L.end());
    }
    return X;
}
