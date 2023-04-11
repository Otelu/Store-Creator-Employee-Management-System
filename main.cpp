///Constantinescu_Andrei_621BB_sg1
#include <iostream>
#include <string>
#include "angajat.h"
#include "magazin.h"
using namespace std;


magazin mag1;
void ordonare(magazin &m)
{
    for(int i = 0; i < m.getnrang()-1; i++)
        for(int j = i + 1; j < m.getnrang(); j++)
           if(m.ang[i].getsalariu() < m.ang[j].getsalariu())
            {
                angajat pahar;
               pahar = m.ang[i];
                m.ang[i] = m.ang[j];
                m.ang[j] = pahar;
            }
}


int main()
{


    magazin magazin1;
    cin >> magazin1;

 magazin1.ang[0]+15;
 cout<<endl;
 cout<<magazin1<<endl;
 magazin1.ang[0]=angajat("Iuliana","Trancau","1234556","fotbalista",9000,44);
 cout<< magazin1.ang[0]<<endl;
 magazin1.marire_salariu(20);
 ordonare(magazin1);
cout<<endl;
cout<<"Salariul angajatului cu numarul 1 este ";
magazin1[0].afissalariu();



}
