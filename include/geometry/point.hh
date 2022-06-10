#ifndef __POINT__HH__
#define __POINT__HH__
#include <iostream>

namespace geo{

class point{

public:
    point(): x(0),y(0),z(0) {} //default constructor
    point(const double x_ ,const double y_ ,const double z_): x(x_) ,y(y_), z(z_) {}//intilization constructor
    point(const double v_): x(v_), y(v_) , z(v_) {}
    ~point(){}

    //getter member function of point
    double getx() const {return x;}
    double gety() const {return y;}
    double getz() const {return z;}

    //setter member function of point
    void setx(const double x_){ x = x_; }
    void sety(const double y_){ y = y_; }
    void setz(const double z_){ z = z_; }

    //operator overload.. tell how to use defined operator
    friend std::ostream& operator<< (std::ostream& os, const point& p){

        os <<"("<< p.x<<", "<< p.y << ", " << p.z<<")";
        return os;
    }//

    //diff of points
    point operator-(const point& other){
        point result(x-other.x,y-other.y,z-other.z);
        //result.z = this->z -other.z;
        return result;

    }
    point operator+(const point& other){
        point result(x-other.x,y-other.y,z-other.z);
        return result;
    } 
private:
    double x,y,z;

};//class point

}
#endif 