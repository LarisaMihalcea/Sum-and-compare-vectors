#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

class Point{
private:
    double x,y,z;

public:
    Point(double x_, double y_, double z_): x{x_}, y{y_}, z{z_}{}
    Point(): Point{0,0,0}{}
    Point(double x_, double y_): Point{x_, y_, 0}{}

    double getX() const{
        return x;
    }
    double getY() const{
        return  y;
    }
    double getZ() const{
        return z;
    }

    double getAbsoluteValue(){
        return sqrt(x*x + y*y + z*z);
    }

    void display_point(){
        cout<<fixed<<setprecision(3);
        if(x>0) cout<<"+"<<x<<'i';
        else if(x<0) cout<<x<<'i';
        if(y>0) cout<<"+"<<y<<'j';
        else if(y<0) cout<<y<<'j';
        if(z>0) cout<<"+"<<z<<'k';
        else if(z<0) cout<<z<<'k';
        cout<<endl;
    }

};

int main() {
    double x,y,z;
    vector<Point> points;
    while(cin>>x){
        getchar();
        cin>>y;
        if(getchar()==';'){
            cin>>z;
            points.push_back(Point(x,y,z));
        }
        else points.push_back(Point(x,y));
    }

    double x_sum{0}, y_sum{0}, z_sum{0};

    for(auto i: points){
        x_sum+=i.getX();
        y_sum+=i.getY();
        z_sum+=i.getZ();
    }

    Point sum{x_sum,y_sum,z_sum};
    double sum_absolute_val{0};
    sum_absolute_val = sum.getAbsoluteValue();

    for(auto i:points){
        if(i.getAbsoluteValue()>=sum_absolute_val){
            i.display_point();
        }
    }

    return 0;
}
