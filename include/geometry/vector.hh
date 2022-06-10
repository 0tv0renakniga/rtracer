#ifndef __VECTOR__HH__
#define __VECTOR__HH__
#include <iostream>
#include <cmath>
#include <geometry/point.hh>

namespace geo{

class vector{

public:
    //constructor
    vector():v_(0){}
    vector(point v): v_(v){}
    vector(point p1,point p2){
        v_ = p2-p1;
    }
    //getter
    point getp(){
        return v_;
    }
    //setter

    friend std::ostream& operator<< (std::ostream& os, const vector& v){

        os << "V"<<v.v_;
        return os;
    }
    double dot(vector other){
        double res = this->v_.getx()*other.v_.getx() +
                     v_.gety()*other.v_.gety() +
                     v_.getz()*other.v_.getz();
        return res;                
    }
    vector& operator*=(const double& scaler){
        v_.setx(v_.getx()*scaler);
        v_.sety(v_.gety()*scaler);
        v_.setz(v_.getz()*scaler);

        return *this;
    }
    double mag(){
        return std::sqrt(std::pow(v_.getx(),2)+
                         std::pow(v_.gety(),2)+
                         std::pow(v_.getz(),2));
    }
    

    //add normailze
    void norm(){
        double m = mag();
        v_.setx(v_.getx()/m);
        v_.sety(v_.gety()/m);
        v_.setz(v_.getz()/m);
    }
private:
    point v_;

};//class vector

double mag(vector vec){
    return vec.mag();

}

}
#endif 