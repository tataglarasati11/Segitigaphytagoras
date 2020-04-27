#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class bangun
{
 protected:
   double x,y,z;
       
  public:
    virtual void get_data()=0;
    virtual void display_area()=0;
};

class segitiga: public bangun
{
   public:
    void get_data(void)
    {
       cout<<"Menghitung panjang sisi dengan pytagoras \n\n";
       cout<<"masukkan nilai a = "; cin>>x;
       cout<<"masukkan nilai b = "; cin>>y;
    }
    void display_area(void)
    {
       double pytagoras;
       pytagoras =sqrt(pow(x,2)+pow(y,2));
       cout<<"nilai c adalah = "<<pytagoras<<"\n";
    }
};

