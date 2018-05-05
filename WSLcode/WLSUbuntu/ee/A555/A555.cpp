#include <iostream>
using namespace std;

class C555 {
private:
    float r1, r2, c1, fr, TH, TL, dcp;
public:
    C555(float Res1=5000, float Res2=5000, float Cap1=0.000001) {r1=Res1; r2=Res2; c1=Cap1;
		cout << "Astable 555 Calculator" << endl << endl;
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;
		cout << "C1 = " << c1 << endl; }
    void setR1R2(float newRes1, float newRes2) { r1=newRes1; r2=newRes2;
		cout << "R1 change to " << r1 << endl;
		cout << "R2 change to " << r2 << endl; }
    void setC1(float newCap1) { c1=newCap1;
		cout << "C2 changed to " << c1 << endl; }
    void Freq() { fr = 1.44 /((r1 + r2 + r2) * c1);
		cout << "Frequency = " << fr << endl; }
    void High() { TH =  0.693 * (r1 + r2) * c1;
		cout << "Time High = " << TH << endl; }
    void Low() { TL = 0.693 * r2 * c1;
		cout << "Time LOw = " << TL << endl; }
    void DCP() { dcp = (TH / (TH + TL)) * 100;
		cout << "Duty Cycle Percentage = " << dcp << endl; }
};
int main() {
    C555 A555;
    A555.Freq();
    A555.High();
    A555.Low();
    A555.DCP();
    A555.setR1R2(4000,4000);
    A555.Freq();
    A555.High();
    A555.Low();
    A555.DCP();
    return 0;
}


