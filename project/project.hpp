#ifndef PROJECT_HPP
#define PROJECT_HPP

namespace project
{

using string = const char*;

class Animal
{
public:
    enum class Species
    {
        Cat,
        Dog
    };

    Animal(Species species) :
        species(species)
    {}

    virtual void talk() = 0;
    project::string name = "animal";
    Species species;
};

class Cat : public Animal
{
public:
    Cat() :
        Animal(Animal::Species::Cat)
    {}

    void talk() override;
    project::string catAlias = "cat";
};

class Dog : public Animal
{
public:
    Dog() :
        Animal(Animal::Species::Dog)
    {}

    void talk() override;
    void foo(const project::string&);
    project::string dogAlias = "dog";
};

}

#endif // PROJECT_HPP;
