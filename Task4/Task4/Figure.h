#pragma once
#include <iostream>
#include <string>
#include "Shapes.h"

namespace Shapes
{
    class Figure {
    private:
        std::string name;

    protected:
        SHAPES_API Figure(const std::string & n);

        SHAPES_API virtual void sides() const;

        SHAPES_API virtual void angles() const;

    public:
        SHAPES_API void print();
        SHAPES_API virtual ~Figure();
    };
}

