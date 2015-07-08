/*
 Copyright © 2010-2015 by FuzzyLite Limited.
 All rights reserved.

 This file is part of fuzzylite®.

 fuzzylite® is free software: you can redistribute it and/or modify it under
 the terms of the FuzzyLite License included with the software.

 You should have received a copy of the FuzzyLite License along with 
 fuzzylite®. If not, see <http://www.fuzzylite.com/license/>.

 fuzzylite® is a registered trademark of FuzzyLite Limited.

 */

#ifndef FL_NORM_H
#define FL_NORM_H

#include "fl/fuzzylite.h"

#include <string>

namespace fl {

    /**
     * Base class of all T-Norms and S-Norms
     * @author Juan Rada-Vilela, Ph.D.
     * @see TNorm
     * @see SNorm
     * @see TNormFactory
     * @see SNormFactory
     * @since 4.0
     */
    class FL_API Norm {
    public:

        Norm() {
        }

        virtual ~Norm() {
        }

        FL_DEFAULT_COPY_AND_MOVE(Norm)
        /**
         * @return the name of the class of the norm
         */
        virtual std::string className() const = 0;
        /**
         * Computes the norm for @f$a@f$ and @f$b@f$
         * @param a is a membership function value
         * @param b is a membership function value
         * @return the norm between @f$a@f$ and @f$b@f$
         */
        virtual scalar compute(scalar a, scalar b) const = 0;

        /**
         * @return a clone of the norm
         */
        virtual Norm* clone() const = 0;

    };
}
#endif  /* FL_NORM_H */
