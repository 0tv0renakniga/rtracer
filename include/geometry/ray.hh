#ifndef __RAY__HH__
#define __RAY__HH__
#include "vector.hh"

namespace geo{

class ray{


public:
    //constructor
    ray():p_(),v_(){

    }
    ray(const point& p , const vector& v):p_(p) , v_(v){
        // the noob way
        //p_ = p; 
        //v_ = v;
    }
    //setter
    void setPoint(const point& p){
        p_ = p;
    }
    void setVector(const vector& v){
        v_ = v;
    }

    //getter
    point getPoint(){
        return p_;
    }

    vector getVector(){
        return v_;
    }
    
    friend std::ostream& operator<< (std::ostream& os, const ray& r){

        os << "R("<<r.p_<<","<<r.v_<<")";
        return os;
    }




private:
    point p_;
    vector v_;

};

}







#endif
