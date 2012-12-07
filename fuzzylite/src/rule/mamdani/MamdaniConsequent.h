/*
 * MamdaniConsequent.h
 *
 *  Created on: 3/12/2012
 *      Author: jcrada
 */

#ifndef FL_MAMDANICONSEQUENT_H_
#define FL_MAMDANICONSEQUENT_H_

#include "../Consequent.h"

#include <vector>

namespace fl {
    class Engine;
    class MamdaniExpression;

    class MamdaniConsequent: public Consequent {
    protected:
        std::vector<MamdaniExpression*> _conclusions;

    public:
        MamdaniConsequent();
        virtual ~MamdaniConsequent();

        virtual void load(const std::string& consequent, const Engine* engine);

        virtual void fire(scalar strength, const Operator* activation);

        virtual std::string toString() const;
    };

} /* namespace fl */
#endif /* FL_MAMDANICONSEQUENT_H_ */