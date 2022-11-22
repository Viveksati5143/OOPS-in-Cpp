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
    friend void Display(EqTriangle );
};
void Display(EqTriangle et){
    cout<<"Circumference : "<<et.circumference<<endl;
    cout<<"Area : "<<et.area<<endl;
}

int main()
{
    EqTriangle et;
    et.setA(3);
    
    Display(et);    
    return 0;
}
