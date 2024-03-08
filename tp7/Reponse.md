

## Exercice 1 - Appels polymorphes (20min)

Pour chacun des appels ci-dessous, déterminez le type dynamique et le type statique des instances sur lesquels l'appel est réalisé.  
Déduisez-en la fonction qui sera appelée au moment de l'exécution du programme.
```c++
class Animal
{
public:
    virtual void move() { std::cout << "Moving!" << std::endl; }

    void type() const { std::cout << "Animal" << std::endl; }
};

class Carnivore
{
public:
    void can_eat_meat() const { std::cout << "Yum!" << std::endl; }
    void can_eat_plant() const { std::cout << "Berk!" << std::endl; }
};

class Herbivore
{
public:
    virtual void can_eat_meat() const { std::cout << "Berk!" << std::endl; }
    virtual void can_eat_plant() const { std::cout << "Yum!" << std::endl; }
};

class Bird: public Animal, public Carnivore, public Herbivore
{
public:
    void move() const { std::cout << "Flying!" << std::endl; }
    void type() { std::cout << "Bird" << std::endl; }

    void can_eat_plant() { std::cout << "Miam!" << std::endl; }
};

class Tiger: public Animal, public Carnivore
{
public:
    void move() override { std::cout << "Running!" << std::endl; }
    void type() const { std::cout << "Tiger" << std::endl; }
    
    void can_eat_meat() const { std::cout << "Miam!" << std::endl; }
};

int main()
{
    Tiger tiger;
    Animal& tiger_as_animal = tiger;
    Carnivore& tiger_as_carn = tiger;

    Bird bird;
    Animal& bird_as_animal = bird;
    Herbivore& bird_as_herb = bird;
    Carnivore& bird_as_carn = bird;

    tiger.move();                  // I1 Dyn: Tiger , Stat: Animal, Tiger::move
    tiger_as_animal.move();        // I2 Dyn: Tiger, Stat: Animal, Tiger::move
    
    bird.move();                   // I3 Dyn: Bird , Stat: Animal, Bird::move
    bird_as_animal.move();         // I4 Dyn: Bird , Stat: Animal, Animal::move

    bird.can_eat_plant();          // I5 Dyn: Bird , Stat: Animal, Bird::can_eat_plant
    bird_as_herb.can_eat_plant();  // I6 Dyn: Bird , Stat: Herbivore, Herbivore::can_eat_plant
    bird_as_carn.can_eat_plant();  // I7 Dyn: Bird , Stat: Carnivore, Carnivore::can_eat_plant

    tiger.can_eat_plant();         // I8 Dyn: Tiger , Stat: Carnivore, Carnivore::can_eat_plant
    tiger.can_eat_meat();          // I9 Dyn: Tiger , Stat: Animal, Tiger::can_eat_meat
    tiger_as_carn.can_eat_meat();  // I10 Dyn: Tiger  , Stat: Carnivore, Carnivore::can_eat_meat

    bird.type();                   // I11 Dyn: Bird, Stat: Animal, Bird::type
    bird_as_animal.type();         // I12 Dyn: Bird, Stat: Animal, Animal::type
    tiger_as_animal.type();        // I13 Dyn: Tiger, Stat: Animal, Animal::type

    return 0;
}
```

## Exercice 2 - Donjons (1h40)

L'objectif de ce programme est de créer une simulation dans laquelle différentes entitées évoluent à l'intérieur d'un donjon et peuvent potentiellement intéragir entre elles.

### A. Existant

2. Prenez connaissance du contenu des fichiers pré-existants et répondez aux questions suivantes :
- Dans [Dungeon.cpp](dungeon/Dungeon.cpp), quel est le rôle de la fonction `display` ?
>    Display sert a afficher le donjon
- Dans [Dungeon.cpp](dungeon/Dungeon.cpp), quel est le rôle de la fonction `update` ?
>   update sert a rafraichir le placement des objets dans le donjon
- Quelle variable du `main` porte l'ownership des entitées ?
> La variable all_entities