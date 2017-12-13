#ifndef UNTITLED1_ELEMENT_H
#define UNTITLED1_ELEMENT_H
#include <vector>

class Element {

private: int *arr;
    int numb;
public: vector<isotope> mas;
    Element(int *arr, int numb, const vector <isotope> &mas);
    int *getArr() const {
        return arr;
    }
    void setArr(int *arr) {
        Element::arr = arr;
    }
    int getNumb() const {
        return numb;
    }
    void setNumb(int numb) {
        Element::numb = numb;
    }
    const vector <isotope> &getAA() const {
        return mas;
    }
    void setmas(const vector <isotope> &mas) {
        Element::mas = mas;
    }
    Element(int numb) : numb(numb) {}
    void getinfo(){
        for (auto it : mas){
            cout<<"name = "<<it.getName()<<", iz = "<<it.getIz()<<", n = "<<it.getN()<<", a = "<<it.getA()<<"*g/mole, fm = "<<it.getFm()<<endl;
        }
    };
};
#endif