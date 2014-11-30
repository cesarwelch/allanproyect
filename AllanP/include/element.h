
#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <iostream>
using namespace std;

class element
{
    public:
        element();
        element(int x, string y){
        id=x;
        name = y;};
        virtual ~element();
        int Getid() { return id; }
        void Setid(int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

    element operator=(element asd) {
    Setid(asd.Getid());
    Setname(asd.Getname());
    }

    bool operator==(const Fraction& lhs, const Fraction& rhs) {
    return lhs.num() == rhs.num() && lhs.den() == rhs.den();
    }


    protected:
    private:
        int id;
        string name;
};

#endif // ELEMENT_H
