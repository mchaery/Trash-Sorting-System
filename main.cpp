#include "Trash.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
using namespace TrashSorting;

void collectTrash(ifstream& ifs, vector<const Trash*>& dump);
void printStatus(const vector<const Trash*>& dump);
void disposeAll(vector<const Trash*>& dump);

int main() {
    ifstream fTrash("trash.txt");
    if (!fTrash) {
        cerr << "failed to open file" << endl;
        exit(1);
    }
    vector<const Trash*> dump;
    string option;
    while (fTrash >> option) {
        if (option == "Trash") {
            collectTrash(fTrash, dump);
        }
        else if (option == "Status") {
            printStatus(dump);
        }
        else if (option == "Dispose") {
            disposeAll(dump);
        }
    }

}

void collectTrash(ifstream& ifs, vector<const Trash*>& dump) {
    string type;
    string name;
    double weight;
    ifs >> type >> name >> weight;
    if (type == "Plastic") {
        dump.push_back(new Plastic(name, weight));
    }
    else if (type == "Paper") {
        dump.push_back(new Paper(name, weight));
    }
    else if (type == "Can") {
        dump.push_back(new Can(name, weight));
    }
    else if (type == "Glass") {
        dump.push_back(new Glass(name, weight));
    }
    else if (type == "FoodWaste") {
        dump.push_back(new FoodWaste(name, weight));
    }
    else if (type == "GardenWaste") {
        dump.push_back(new GardenWaste(name, weight));
    }
    else if (type == "Landfill") {
        dump.push_back(new Landfill(name, weight));
    }
}

void printStatus(const vector<const Trash*>& dump) {
    cout << "There are " << dump.size() << "items collected :" << endl;
    for (const Trash* const pTrash : dump) {
        cout << '\t' << pTrash->getName() << ", " << pTrash->getWeight() << "lb" << endl;
    }
    cout << endl;
}

void disposeAll(vector<const Trash*>& dump) {
    cout << "Let's dispose all!" << endl;
    for (const Trash* const pTrash : dump) {
        cout << '\t';
        pTrash->dispose();
        delete pTrash;
    }
    dump.clear();
}
