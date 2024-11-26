#include "Trash.h"
#include <iostream>
#include <string>

using namespace std;

namespace TrashSorting {

	Trash::Trash(const string& name, double weight) : name(name), weight(weight) {}

    const string& Trash::getName() const { return name; }

    double Trash::getWeight() const { return weight; }

    void Trash::setType(const string& aType) { type = aType; }

    const string& Trash::getType() const { return type; }

    Trash::~Trash() {
        cout << "\t[ " << getName() << " is disposed ]\n\n";
    }

    //======================================


    Recyclable::Recyclable(const string& name, double weight) : Trash(name, weight) {
        setType("Recyclable");
    }

    void Recyclable::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType()
            << "! Please remove labels and crush me before putting me in the recycling bin." << endl;
    }


    Organic::Organic(const string& name, double weight) : Trash(name, weight) {
        setType("Organic");
    }

    void Organic::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please compost me or place me in the green bin." << endl;
    }


    Landfill::Landfill(const string& name, double weight) : Trash(name, weight) {
        setType("Landfill");
    }

    void Landfill::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please dispose of me in the landfill bin." << endl;
    }

//======================================

    Plastic::Plastic(const string& name, double weight) : Recyclable(name, weight) {}

    void Plastic::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please remove the label, crush me, and place me in the plastic bin." << endl;
    }

    Paper::Paper(const string& name, double weight) : Recyclable(name, weight) {}

    void Paper::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please flatten me and place me in the paper bin." << endl;
    }

    Can::Can(const string& name, double weight) : Recyclable(name, weight) {}

    void Can::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please rinse me, crush me, and place me in the can bin." << endl;
    }

    Glass::Glass(const string& name, double weight) : Recyclable(name, weight) {}

    void Glass::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please rinse me and place me in the glass bin." << endl;
    }

//======================================


    FoodWaste::FoodWaste(const string& name, double weight) : Organic(name, weight) {}

    void FoodWaste::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please place me in the compost bin." << endl;
    }


    GardenWaste::GardenWaste(const string& name, double weight) : Organic(name, weight) {}

    void GardenWaste::dispose() const {
        cout << "I am " << getName() << "! I weigh " 
            << getWeight() << "lb. I am " << getType() 
            << "! Please place me in the green bin for composting." << endl;
    }

}