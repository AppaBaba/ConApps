#include <iostream>
using namespace std;

class Raptor
{
    public:
       void Features(){
	cout << "A Raptor is a bird of prey.\n"; 
	cout << "hooked beaks with sharp edges.\n";
	cout << "feet with sharp, curved claws or talons.\n";
	cout << "keen eyesight.\n"; }
};

class Eagle : public Raptor
{
    public:
       void Features(){
	cout << "An adult bald eagle is evenly dark brown with a white head and tail.\n"; }
};

class Opsrey : public Raptor
{
    public:
       void Features()
         { cout << "Opsrey features.\n"; }
};

int main()
{
    Raptor *r = new Raptor;
    Eagle *e = new Eagle;
    Opsrey *o = new Opsrey;

    r->Features();
    e->Features();
    o->Features();

    return 0;
}