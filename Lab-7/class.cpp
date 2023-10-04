#include<bits/stdc++.h>
using namespace std;
///base class
class  vehicle{
protected:
    string model;
    int year;

public:
    vehicle(string m,int y):model(m),year(y){}
    virtual void display()
    {
        cout<< "model:" << model<<endl;
        cout<< "year:" << year<<endl;

    }

            };
            ///derived class
            class Car:
                public vehicle{
                private:
                    string color;
                    double weight;
                    public:
                    Car(string m,int y,string c,double w):vehicle(m,y),color(c),weight(w){}
                    void display()override{
                    vehicle::display();
                    cout<< "color:" << color<<endl;
                    cout<< "weight:" << weight<<endl;
                    }
                    };
