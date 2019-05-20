#pragma once
#include <vector>
#include "haina.h"
//haina vine cu o FISA pe care sunt toate detaliile
class client{
private:
    int nrHaine;
    vector <haina> haineClient;
protected:
    int id;
public:
    int getId();
    int setId();
    int getNrHaine();
};

int client::setId(int n){
    id = n}
int client::getId(){
    return id;}
int client::getNrHaine(){
    return nrHaine;}
