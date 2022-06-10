#include <iostream>
#include "geometry/ray.hh"
int main(int argc,char* argv[]){
    std::cout<<"hello"<<std::endl;
    
    geo::point p1;
    geo::point p2(1,2,3);
    geo::point p3(4);
    p1.setx(2);
    p1.sety(5);
    p1.setz(7);
    std::cout<<"point p1 = "<<p1<< std::endl;
    
    geo::vector v1;
    geo::vector v2(p1);
    geo::vector v3(p1,p2);


    std::cout<<"v3 is : "<<v3<<std::endl;
    v3*=3;
    std::cout<<"v3 is : "<<v3<<std::endl;

    double dot_product = v2.dot(v3);
    std::cout<<"here is dot pro :"<< dot_product <<std::endl;

    std::cout<<"here is the mag of V1 :" << v2.mag() <<std::endl;
    
    geo::ray r1;
    geo::ray r2(p2,v2);

    std::cout<<"here is ray 1: "<< r2 << std::endl;
    
    
    
    
    
    return 0;
}