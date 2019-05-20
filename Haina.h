#pragma once
class haina{
private:
    int gr;
    int col;
    int temperatura;
    bool costum;
protected:
    int id;
public:
    int temp();
    int color();
    int greutate();
    void set_id(int n);
    bool costum();
    bool operator <(const haina& h)const;
    bool operator == (const haina&f)const;
}

int haina :: temp(){
    return temperatura;
}
int haina :: color(){
     return col;
}
int haina :: greutate(){
     return greutate;
}
void haina :: set_id(int n){
  id=n;
}
bool haina :: costum(){
    return cost;
}
bool haina :: operator < (const haina&f)const{
        return (id<h.id);
}
bool haina :: operator == (const haina&f)const{
        return (id==h.id);
}

