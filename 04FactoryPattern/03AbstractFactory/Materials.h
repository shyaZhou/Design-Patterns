#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include <iostream>
struct Dough {};
struct Sauce {};
struct Cheese {};
struct Veggies {};
struct Pepperoni {};
struct Clams {};
struct ThinCrustDough : public Dough {
    ThinCrustDough()
    {
        std::cout << "Use ThinCrustDough\n";
    }
};
struct MarinaraSauce : public Sauce {
    MarinaraSauce()
    {
        std::cout << "Use MarinaraSauce\n";
    }
};
struct PlumPotatoSauce : public Sauce {
    PlumPotatoSauce()
    {
        std::cout << "Use PlumPotatoSauce\n";
    }
};
struct ReggianoCheese : public Cheese {
    ReggianoCheese()
    {
        std::cout << "Use ReggianoCheese\n";
    }
};
struct MozzarellaCheese : public Cheese {
    MozzarellaCheese()
    {
        std::cout << "Use MozzarellaCheese\n";
    }
};
struct SlicedPepperoni : public Pepperoni {
    SlicedPepperoni()
    {
        std::cout << "Use SlicedPeperoni\n";
    }
};
struct FreshClams : public Clams {
    FreshClams()
    {
        std::cout << "Use FreshClams\n";
    }
};
struct FrozenClams : public Clams {
    FrozenClams()
    {
        std::cout << "Use FrozenClams\n";
    }
};
struct Garlic : public Veggies {
    Garlic()
    {
        std::cout << "Use Garlic\n";
    }
};
struct Eggplant : public Veggies {
    Eggplant()
    {
        std::cout << "Use Eggplant\n";
    }
};
struct Onion : public Veggies {
    Onion()
    {
        std::cout << "Use Onion\n";
    }
};
struct Mushroom : public Veggies {
    Mushroom()
    {
        std::cout << "Use Mushroom\n";
    }
};
struct RedPepper : public Veggies {
    RedPepper()
    {
        std::cout << "Use RedPepper\n";
    }
};
struct BlackOlive : public Veggies {
    BlackOlive()
    {
        std::cout << "Use BlackOlive\n";
    }
};
#endif