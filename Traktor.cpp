//
//  Traktor.cpp
//  lab4
//
//  Created by Żaneta Larwa on 14.12.2016.
//  Copyright © 2016 Żaneta Larwa. All rights reserved.
//

#include "Traktor.hpp"
Traktor::Traktor()
{
    size=0;
    setlimitTr(40);
    setPredkosc(getLimitTr());
    
}
Traktor::Traktor(double pr)
{
    size=0;
    
    setlimitTr(pr);
    setPredkosc(getLimitTr());

}
Traktor::Traktor(double pr, Urzadzenie ur)
{
    size=0;
    setlimitTr(pr);
    addUrzadzenie(ur);
    
}
void Traktor::setlimitTr(double lp)
{
    limitTr=lp;
}

double Traktor::getLimitTr()
{
    return limitTr;
}
void Traktor::addUrzadzenie(Urzadzenie ur)
{
    if (size < maxIlUrz)  {listaUrz[size]=ur; size++; minPr();}
}
void Traktor::minPr()
{
    setPredkosc(getLimitTr());
    for(int i=0; i<size;i++)
    {
        if(listaUrz[i].getPredkosc()<getPredkosc()) setPredkosc(listaUrz[i].getPredkosc());
    }
}
string Traktor::getPar()
{
    string par="Traktor o maksymalnej predkosci: "+std::to_string( getLimitTr())+"km/h .";
    if (size!=0)
    {
        par+="Ma doczepione nastepujace maszyny rolnicze:\n";
        for(int i=0; i<size;i++)
        {
            par+="\t"+listaUrz[i].getPar()+"\n";
        }
        par+="Traktor moze jechac z nastepujaca maksymalna predkoscia: " + std::to_string(getPredkosc())+" km/h.";
    }
    else par+=" Traktor nie ma doczepionych zadnych maszyn rolniczych ";
    return par;
}


