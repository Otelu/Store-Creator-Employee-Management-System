#include <iostream>
#include <string>
#ifndef ANGAJATI_H_INCLUDED
#define ANGAJATI_H_INCLUDED

using namespace std;



class angajat
{
    string nume;
    string prenume;
    string CNP;
    string functie;
    float salariu;
    int varsta;



public:

    static int nrAngajati;
    angajat()
    {
        nrAngajati++;
    };

    angajat(string n,string p, string c, string f, float s, int v)
    {
        nrAngajati++;
        this->nume = n;
        this->prenume = p;
        this->CNP = c;
        this->functie = f;
        this->salariu = s;
        this->varsta = v;


    };

    angajat(const angajat & x)
    {
        this->nume = x.nume;
        this->prenume = x.prenume;
        this->CNP = x.CNP;
        this->functie = x.functie;
        this->salariu = x.salariu;
        this->varsta = x.varsta;
        nrAngajati++;

    };


    angajat& operator = (const angajat& a)
    {
        nume = a.nume;
        prenume = a.prenume;
        CNP = a.CNP;
        functie = a.functie;
        salariu = a.salariu;
        varsta = a.varsta;
        return *this;

    }


    float operator + (float marire_salariu)
    {
        return this->salariu + marire_salariu;


    }

    friend ostream& operator << (ostream & out, angajat & a)
    {
        out<<"Nume: " << a.nume << endl;
        out<< "Prenume: " << a.prenume <<endl;
        out << "CNP: " << a.CNP << endl;
        out << "Varsta: " << a.varsta << endl;
        out << "Funcite: " << a.functie << endl;
        out << "Salariu: " << a.salariu << endl;
        return out;
    }

    friend istream& operator >> (istream & in, angajat & a)
    {

      cout << "  Angajat  " << endl;
      cout << "Introduceti numele: ";
      in >> a.nume;
      cout << "Introduceti prenumele: ";
      in >> a.prenume;
      cout << "Introduceti CNP: ";
      in >> a.CNP;
      cout << "introduceti varsta: ";
      in >> a.varsta;
      cout << "Introduceti functia: ";
      in >> a.functie;
      cout << "Introduceti salariu: ";
      in >> a.salariu;
      return in;



    }

~angajat(){};


 void setsalariu(float amount)       //setter
    {
        this->salariu+=amount;
    }

    float getsalariu()
    {
        return this->salariu;
    }

    void afissalariu()
    {
        cout << salariu;
    }
};

int angajat::nrAngajati =0;

#endif // ANGAJATI_H_INCLUDED
