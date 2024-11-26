#ifndef TRASH_H
#define TRASH_H

#include <iostream>
#include <string>

namespace TrashSorting {
    class Trash {
    public:
        Trash(const std::string& name, double weight);
        virtual void dispose() const = 0;
        const std::string& getName() const;
        double getWeight() const;
        void setType(const std::string& aType);
        const std::string& getType() const;

        virtual ~Trash();
    private:
        std::string name;
        double weight;
        std::string type;
    };

    //======================================

    class Recyclable : public Trash {
    public:
        Recyclable(const std::string& name, double weight);

        void dispose() const override;
    };

    class Organic : public Trash {
    public:
        Organic(const std::string& name, double weight);

        void dispose() const override;
    };

    class Landfill : public Trash {
    public:
        Landfill(const std::string& name, double weight);

        void dispose() const override;
    };

    //======================================

    class Plastic : public Recyclable {
    public:
        Plastic(const std::string& name, double weight);

        void dispose() const override;
    };

    class Paper : public Recyclable {
    public:
        Paper(const std::string& name, double weight);

        void dispose() const override;
    };

    class Can : public Recyclable {
    public:
        Can(const std::string& name, double weight);

        void dispose() const override;
    };

    class Glass : public Recyclable {
    public:
        Glass(const std::string& name, double weight);

        void dispose() const override;
    };

    //======================================

    class FoodWaste : public Organic {
    public:
        FoodWaste(const std::string& name, double weight);

        void dispose() const override;
    };

    class GardenWaste : public Organic {
    public:
        GardenWaste(const std::string& name, double weight);

        void dispose() const override;
    };
}

#endif;