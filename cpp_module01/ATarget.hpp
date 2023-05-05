#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;
class  ATarget
{
    protected:
        std::string type;

    public:
        ATarget();
        ATarget(std::string const &type);
        virtual ~ATarget();
        ATarget(const ATarget &obj);
        ATarget&operator=(const ATarget &obj);
        virtual ATarget *clone()const = 0;
        void getHitBySpell(const ASpell &sp)const;

};