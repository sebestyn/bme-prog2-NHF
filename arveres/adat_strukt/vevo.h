#ifndef VEVO_H_INCLUDED
#define VEVO_H_INCLUDED

#include "raktar.h"

using namespace std;


/**
Vevők leíró osztályy
 - lehet robot vagy ember
**/

 class Vevo{
    private:
        int id;
    public:
        void print(){}

        /// Get parameters
        int get_id(){
            return this->id;
        }

        /// Set parameters
        void set_id(int id=0){
            this->id = id;
        }

 };

class Ember : public Vevo {
    private:
        int penz;
        int megvett_raktarak_szama;
    public:
        Ember(int p = 2000, int m = 0):penz(p), megvett_raktarak_szama(m){this->set_id(0);}

        /// GET parameters
        int get_penz(){return this->penz;}
        int get_megvett_raktarak_szama(){return this->megvett_raktarak_szama;}


        /// Operator: = (Enélkül is működik vmiért)
        /*Ember& operator=(Ember ember){
            this->penz = ember.get_penz();
            this->megvett_raktarak_szama = ember.get_megvett_raktarak_szama();
            return *this;
        }*/

        /// Kiírás
        void print() {
            cout << " - Ember:" << endl <<
                    "   - id "<< this->get_id() << endl <<
                    "   - Penz egyenlege: "<< this->penz << endl <<
                    "   - Megevett raktarak: "<< this->megvett_raktarak_szama << endl;
        }
};

class Robot : public Vevo {
    public:
        Robot(int id=1){this->set_id(id);}

        /// Kiírás
        void print(){
            cout << " - Robot:" << endl <<
                    "   - id "<< this->get_id() << endl;
        }
};


#endif // VEVO_H_INCLUDED
