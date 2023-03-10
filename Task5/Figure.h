#pragma once
#include <iostream>
#include <string>

namespace Shapes
{
    class Figure {
    private:
        std::string name;

    protected:
        Figure(const std::string & n);

        virtual void sides() const;

        virtual void angles() const;

    public:
        void print();
        virtual ~Figure();
    };
}

