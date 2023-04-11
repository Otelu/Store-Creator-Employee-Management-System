#include <iostream>
#include <string>
#include "angajati.h"
#ifndef magazin_H
#define magazin_H

using namespace std;
class magazin
{
    string nume_magazin;
    string adresa_magazin;
    string cod_identif;
    int nrang;
    angajat* ang;

public:

    magazin(){}
    magazin(string nm, string am, string ci, int nr, angajat* a)
    {
        this->nume_magazin = nm;
        this->adresa_magazin = am;
        this->cod_identif = ci;
        this->nrang = nr;
        this->ang = new angajat [nrang];
        for(int i = 0; i < nrang; i++)
        {
            ang[i] = a[i];
        }

    }

    magazin(const magazin & z)
    {
        this->nume_magazin = z.nume_magazin;
        this->adresa_magazin = z.adresa_magazin;
        this->cod_identif = z.cod_identif;
        this->nrang = z.nrang;
        this->ang = new angajat [z.nrang];
        for(int i = 0; i < nrang; i++)
        {
            ang[i] = z.ang[i];
        }

    }
        magazin& operator = (const magazin& m)
    {
        nume_magazin = m.nume_magazin;
        adresa_magazin = m.adresa_magazin;
        cod_identif = m.cod_identif;
        nrang = m.nrang;
        ang = m.ang;
        return *this;

    }



    friend ostream& operator << (ostream & out, magazin & m)
    {
        out<<"Nume: " << m.nume_magazin << endl;
        out<< "Adresa: " << m.adresa_magazin <<endl;
        out << "Cod de identificare: " << m.cod_identif << endl;
        out << "Numar angajati: " << m.nrang << endl;
        return out;
    }

    friend istream& operator >> (istream & in, magazin & m)
    {
      cout << "  Magazin  " << endl;
      cout << "Introduceti numele: ";
      in >> m.nume_magazin;
      cout << "Introduceti adresa: ";
      in >> m.adresa_magazin;
      cout << "Introduceti codul de identificare: ";
      in >> m.cod_identif;
      cout << "Introduceti numarul de angajati: ";
      in >> m.nrang;

      m.ang = new angajat [m.nrang];
      for(int i = 0; i < m.nrang ; i++)
      {
          in >> m.ang[i];
      }


      return in;
    }
    ~magazin(){}



    void setnrang(int value)
    {
        nrang = value;
    }

    int getnrang()
    {
        return this->nrang;
    }

    void arata_ang()
    {
        for(int i = 0; i < nrang; i++)
            cout << this->ang[i];
        cout << endl;
    }
    angajat& operator[](int i)
    {
        return ang[i];
    }

void marire_salariu(int procent){
        cout<<"Salariile angajatilor s-au marit cu "<<procent<<"%"<<endl;
        for(int i=0;i<nrang;i++)
        {
            float s=this->ang[i].getsalariu();
            this->ang[i].setsalariu((procent*s)/100);
        }
    }


};
#endif
