//Operator Overloading using Friend Function
#include <iostream>
using namespace std;

class EqTriangle{
    float a;
    float circumference;
    float area;
public:
    void setA(float length){
        a = length;
        circumference = a*3;
        area = (1.73 * a * a)/4;
    }
    friend ostream& operator<<(ostream& COUT, EqTriangle& et);
};

    ostream& operator<<(ostream& COUT, EqTriangle& et){
    COUT << "Name: "<<et.circumference << endl;
    COUT << "Subscribers: " << et.area << endl;
    return COUT;
    }

int main()
{
    EqTriangle et;
    et.setA(3);  

    cout<<et;
    return 0;
}