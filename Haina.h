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
    bool costum();
    int detergent;
    void set_id(int n);
    bool operator <(const haina& h)const;
    bool operator == (const haina&f)const;
    int getDetergent();
    friend ifstream operator >> (ifstream & in, const haina& h)const;
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
ifstream& operator >> (ifstream& in, const haina& h){
        cin >> h.temp >> h.color >> h.greutate >> h.costum >> h.detergent;
        return in;}
