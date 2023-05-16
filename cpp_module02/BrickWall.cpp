#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget()
{
}

BrickWall::~BrickWall()
{

}
BrickWall *BrickWall::clone()const
{
    return(new BrickWall(*this));
}