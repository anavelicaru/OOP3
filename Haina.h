#pragma once
//functiile le scriu in afara clasei!!
class haina{
private:
    int id;
    int gr;
    int col;
    int temperatura;
    bool costum;

public:
bool operator <(const haina& h)const
{
        return (id<h.id);
}
int temp()
{
    return temperatura;
}
bool operator == (const haina&f)const
{
  return (id==f.id);
}
int color()
{ return col;
}
int greutate()
{
 return gr;
}
void set_id(int n)
{
  id=n;
}
bool costum()
{
    return cost;
}
}

