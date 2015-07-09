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

#ifndef FL_ZSHAPE_H
#define FL_ZSHAPE_H

#include "fl/term/Term.h"

namespace fl {

    /**
     * [Edge] term for the Z-shaped membership function
     * @author Juan Rada-Vilela, Ph.D.
     * @see Term
     * @see Variable
     * @since 4.0
     */

    class FL_API ZShape : public Term {
    protected:
        scalar _start, _end;

    public:
        explicit ZShape(const std::string& name = "",
                scalar _start = fl::nan,
                scalar _end = fl::nan,
                scalar _height = 1.0);
        virtual ~ZShape() FL_IOVERRIDE;
        FL_DEFAULT_COPY_AND_MOVE(ZShape)

        virtual std::string className() const FL_IOVERRIDE;
        /**
         * Provides the parameters of the term as `start end [height]`
         * @return `start end [height]`
         */
        virtual std::string parameters() const FL_IOVERRIDE;
        /**
         * Configures the term with the parameters given as `start end [height]`
         * @param parameters as `start end [height]`
         */
        virtual void configure(const std::string& parameters) FL_IOVERRIDE;
        //@todo
        virtual scalar membership(scalar x) const FL_IOVERRIDE;

        /**
         * Sets the start of the edge
         * @param start is the start of the edge
         */
        virtual void setStart(scalar start);
        /**
         * Gets the start of the edge
         * @return the start of the edge
         */
        virtual scalar getStart() const;

        /**
         * Sets the end of the edge
         * @param end is the end of the edge
         */
        virtual void setEnd(scalar end);
        /**
         * Gets the end of the edge
         * @return the end of the edge
         */
        virtual scalar getEnd() const;

        virtual ZShape* clone() const FL_IOVERRIDE;

        static Term* constructor();

    };
}
#endif  /* ZSHAPE_H */
