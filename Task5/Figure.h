#pragma once
#include <iostream>
#include <string>
#include "Shapes.h"

namespace Shapes
{
    class SHAPES_API Figure {
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

