#include <iostream>
#include <string>
using namespace std;
class Animal
{
    private:
    int lifespan;
    string speciesName, habitat;
    static int animalCount;
    public:
    Animal()
    {
        speciesName=" ";
        habitat=" ";
        animalCount++;
        lifespan=0;
    }
    Animal(int lifeSpan, string species, string hab)
    {
        lifespan = lifeSpan;
        speciesName = species;
        habitat = hab;
        animalCount++;
    }
    ~Animal()
    {
        cout<<"Animal record archieved: "<<speciesName<<endl;
    }
    void addAnimal()
    {
        cout<<"Enter species name: ";
        cin>>speciesName;
        cout<<"Habitat of animal: ";
        cin>>habitat;
        cout<<"Enter lifespan:";
        cin>>lifespan;
        cout<<"Animal Count: ";
        cin>>animalCount;
    }
    void display()
    {
        cout<<"Species Name: "<<speciesName<<endl;
        cout<<"Animal lifespan: "<<lifespan<<endl;
        cout<<"Habitat: "<<habitat<<endl;
    }
    static void totalAnimal()
    {
        cout<<"Total Animals created: "<<animalCount<<endl;
    }
    friend class Bird;
};
int Animal::animalCount=0;
class Bird
{
    int wingSpan;
    string canFly, migratory, featherColour;
    void fly()
    {

    }
    public:
    void input()
    {
        cout<<"Enter Wing Span:";
        cin>>wingSpan;
        cout<<"Can the bird fly?";
        cin>>canFly;
        cout<<"Is the bird migratory?";
        cin>>migratory;
        cout<<"Feather Colour: ";
        cin>>featherColour;
    }
    void display(Animal &a)
    {
        cout<<"Wing Span: "<<wingSpan<<endl;
        cout<<"Can it fly: "<<canFly<<endl;
        cout<<"Is the bird migratory: "<<migratory<<endl;
        cout<<"Feather Colour: "<<featherColour<<endl;
        cout<<"Species +name: "<<a.speciesName<<endl;
        cout<<"Habitat of animal: "<<a.habitat<<endl;
        cout<<"Animal Count: "<<Animal::animalCount<<endl;
    }
};
int main()
{
    Animal anm;
    Bird brd;
    anm.addAnimal();
    anm.display();
    brd.input();
    brd.display(anm);
    Animal::totalAnimal();
    return 0;
}