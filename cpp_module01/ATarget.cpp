#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::~ATarget(){}
ATarget::ATarget(std::string const &type)
{
    this->type = type;
}
ATarget::ATarget(const ATarget &obj)
{
    *this = obj;
}
ATarget&ATarget::operator=(const ATarget &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return(*this);
}

void ATarget::getHitBySpell(const ASpell &sp) const
{
    std::cout << this->type << " has been " << sp.getEffects() << "!" << std::endl;
}
