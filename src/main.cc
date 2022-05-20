#include <iostream>
#include "geometry/point.hh"
int main(int argc,char* argv[]){
    std::cout<<"hello"<<std::endl;
    
    geo::point p1;
    geo::point p2(1,2,3);
    geo::point p3(4);


    
    p1.setx(2);
    p1.sety(5);
    p1.setz(7);

    std::cout<<"point p1 = "<<p1<< std::endl;
    
    
    
    return 0;
}