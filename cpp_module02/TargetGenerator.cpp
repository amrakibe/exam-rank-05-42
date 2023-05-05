#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(){}

TargetGenerator::TargetGenerator() {}


void TargetGenerator::learnTargetType(ATarget*obj)
{
    if(obj)
        book.insert(std::pair<std::string, ATarget*>(obj->getType(), obj->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &obj)
{
    std::map<std::string, ATarget*>::iterator it = book.find(obj);
    if(it != book.end())
    {
        delete it->second;
    }
    book.erase(obj);
}

ATarget* TargetGenerator::createTarget(std::string const &obj)
{
    std::map<std::string, ATarget*>::iterator it = book.find(obj);
    if(it != book.end())
        return it->second->clone();
    return (NULL);
}