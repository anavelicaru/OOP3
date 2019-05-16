#pragma once
//#include <vector>
#include <set>
#include "Haina.h"

class masina
{
    int capacit;
    int greu_curenta;
    int temp_rid;
    int color;
    set<haina> L; //L retine continutul masinii
    public:
    masina();
    bool add_haina(haina);
    void set_masina(int);
    set<haina> turn_on();
};
masina::masina()
{
    temp_rid=-1;
    color=-1;
    greu_curenta=0;
}
virtual bool masina::add_haina(haina x)
{
    if(greu_curenta+x.greutate()<=capacit) //daca am unde sa adaug
        if(temp_rid==-1) //daca e goala masina
         {temp_rid=x.temp(); //ii setez temperatura, temp_rid indica temperatura din maina
          color=x.color();
          greu_curenta+=x.greutate();
          L.insert(x);
          return 1;
         }
         else
         {
             if(temp_rid==x.temp()&&color==x.color())
             {

                 greu_curenta+=x.greutate();
                 L.insert(x)
                 return 1;
             }
         }

  return 0;
}

void masina::set_masina(int n)
{
    capacit=n;
}

set<haina> masina::turn_on() //o functie din masina care foloseste mai multe haine
{
    set<haina> X;
    if(greu_curenta>=capacit/2)
    {
       greu_curenta=0;
       temp_rid=-1;
       color=-1;
       X=L;
       L.erase(L.begin(),L.end());
    }
    return X;
}
