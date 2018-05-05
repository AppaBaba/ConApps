#include <iostream>
using namespace std;

class Res {
private:
    float rt, r1, r2;
public:
    Res(float Res1=10, float Res2=20) {r1=Res1; r2=Res2;
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl; }
    void setR1R2(float newRes1, float newRes2) { r1=newRes1; r2=newRes2;
		cout << "R1 change to " << r1 << endl;
		cout << "R2 change to " << r2 << endl; }
    void sRes() { rt =r1 + r2;
		cout << "Total Serrial Resistace = "; }
    void pRes() { rt =  1/(1/r1 + 1/r2);
		cout << "Total Parallel Resistance = "; }
    void TotalR() { cout << rt << " ohms" << endl; }
};
int main() {
    Res Rt;
    Rt.sRes();
    Rt.TotalR();
    Rt.pRes();
    Rt.TotalR();
    Rt.setR1R2(20,40);
    Rt.sRes();
    Rt.TotalR();
    Rt.pRes();
    Rt.TotalR();
    return 0;
}


