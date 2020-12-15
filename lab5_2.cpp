#include <iostream>
#include <cmath>

using namespace std;
float deg2rad(float deg)
{
    float rad;
    rad = deg*M_PI/180;
    return rad;
}
float rad2deg(float rad)
{
    float deg;
    deg = rad*180/M_PI;
    return deg;
}
float findXComponent(float len1,float len2,float rad1 ,float rad2)
{
    float vecx;
    vecx = (len1*cos(rad1))+(len2*cos(rad2));
    return vecx;
}
float findYComponent(float len1,float len2,float rad1 ,float rad2)
{
    float vecy;
    vecy = (len1*sin(rad1))+(len2*sin(rad2));
    return vecy;
}
float pythagoras(float a,float b)
{
    float c;
    c = sqrt((a*a)+(b*b));
    return c;
}
void showResult(float len,float deg)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << len << '\n';
    cout << "Direction of the resultant vector (deg) = " << deg << '\n';
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
    return 0;
}
