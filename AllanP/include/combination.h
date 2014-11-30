#ifndef COMBINATION_H
#define COMBINATION_H
#include <cstring>
#include "element.h"

class combination
{
    public:
        combination();
        combination(element el1, element el2, element el3, int sc, int idd ){elem1 = el1; };
        virtual ~combination();
        element Getelem1() { return elem1; }
        void Setelem1(element val) { elem1 = val; }
        element Getelem2() { return elem2; }
        void Setelem2(element val) { elem2 = val; }
        element Getelemr() { return elemr; }
        void Setelemr(element val) { elemr = val; }
        int Getscore() { return score; }
        void Setscore(int val) { score = val; }
        int Getid() { return id; }
        void Setid(int val) { id = val; }
    protected:
    private:
        element elem1;
        element elem2;
        element elemr;
        int score;
        int id;
};

#endif // COMBINATION_H
