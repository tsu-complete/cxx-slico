
#pragma once
#include <cxx-image/index.hxx>

#include <limits>

namespace slic
{
    const double MAX_DOUBLE = std::numeric_limits<double>::max();

    class Point
    {
    public:
        unsigned int label;

        Point ( unsigned int _label = 0 )
            : label(_label)
        { }

        virtual ~Point ( ) { }
    };

};

