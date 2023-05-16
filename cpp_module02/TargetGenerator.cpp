#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(){}

TargetGenerator::TargetGenerator() {}


void TargetGenerator::learnTargetType(ATarget*obj)
{
    book[obj->getType()] = obj;
}

void TargetGenerator::forgetTargetType(std::string const &obj)
{
    book.erase(obj);
}

ATarget* TargetGenerator::createTarget(std::string const &obj)
{
    std::map<std::string, ATarget*>::iterator it = book.find(obj);
    if(it != book.end())
        return book[obj];
    return (NULL);
}