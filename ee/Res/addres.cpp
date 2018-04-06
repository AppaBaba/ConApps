#include <iostream>
using namespace std;

class Res {
private:
    int rt, r1, r2;
public:
    Res(int Res1=10, int Res2=20) {r1=Res1; r2=Res2; }
    void setR1R2(int newRes1, int newRes2) { r1=newRes1; r2=newRes2; }
    void AddRes() { rt=r1+r2; }
    void TotalR() { cout << "Total Resistance " << rt << " ohms" << endl; }
};
int main() {
    Res Rt;
    Rt.AddRes();
    Rt.TotalR();
    Rt.setR1R2(20,40);
    Rt.AddRes();
    Rt.TotalR();
    return 0;
}


