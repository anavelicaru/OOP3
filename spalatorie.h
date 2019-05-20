#pragma once
#include "Haina.h"
#include "Masina.h"
#include "masinaS.h"
#include "MasinaU.h"
#include <vector>
#include <set>
#include "client.h"

/*
1) vine un client cu un id si numarul de haine si ce haine;
fac citireClient;
2) clientul asta intra in lista de asteptare, cu nr haine &cnp
22) citesc hainele; // gen fisa hainelor
3) iau prima haina; parcurg lista de haine,
vad daca pot sa o spal; daca da, intra in masina, daca nu,
intra in lista de asteptare -> push_back
4)in masina de spalat, vad daca pot porni masina; daca da, o pornesc
scot hainele din ea si o pun; daca scos, returnez ceva???
5) verific hainele pe care le-am scos; daca pot sa stors, storc,
daca nu, pun in lista de asteptare;
6) acelasi lucru pentru masina de uscat;
7) ???
*/

class Spalatorie{
private:
    int nMasini, nMasiniS, nMasiniU;
    vector <masina> masiniU; //masini spalat usor
    vector <masina> masiniG; //masini spalat greu
    vector <masina> masiniStors;
    vector <masinaU> masiniUscat;
    vector <haina> haine; //vector de haine murdare    vector <haina> haineS;
    vector <haina> haineU;//cozi pt operatii
    map <int, client> clientAstept; //cand o haina e gata, o pun in client
    map <int, client> clientTerminat;
//cand o haina e gata, stiu unde o pun
//verific daca i-au fost spalate toate hainele
public:
    void citireClient();
    // citesc cnp, hainele,



};
void Spalatorie::citireClient(client C){
    int i;
    cin>>C.id;
    nrHaine = getNrHaine();
    for (i=1; i<=n; i++){
        cin >> haine[i];
    }
}



