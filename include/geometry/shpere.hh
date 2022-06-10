#ifndef __SPHERE__HH__
#define __SPHERE__HH__
#include "ray.hh"

namespace geo{

class sphere
{
private:
    /* data */
    point p_;
    double r_;

public:
    sphere():p_(),r_(0){}
    sphere(point p , double r):p_(p),r_(r){}

    void setPoint(point p){
        p_=p;
    }

    void setRadius(double r){
        r_=r;
    }
    
    point getPoint(){
        return p_;
    }

    double getRadius(){
        return r_;
    }

    point intersect(ray r){
        ///somtheing eqn on r 
        //look up inter
        
        //return point

    }


};

}

#endif
