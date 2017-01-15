////////////////////////////////////////////////////////////////////////////
//	Module 		: steering_behaviour_separation.h
//	Created 	: 07.11.2007
//  Modified 	: 07.11.2007
//	Author		: Dmitriy Iassenev
//	Description : steering behaviour separation class
////////////////////////////////////////////////////////////////////////////

#ifndef STEERING_BEHAVIOUR_SEPARATION_H_INCLUDED
#define STEERING_BEHAVIOUR_SEPARATION_H_INCLUDED

#include "smart_cover_detail.h"
#include "steering_behaviour_base.h"

class CAI_Rat;

namespace steering_behaviour
{
class separation final : public base, private Noncopyable
{
public:
    separation(CAI_Rat const* object);
    virtual Fvector direction();

private:
    typedef base inherited;
};

}  // namespace steering_behaviour

#endif  // STEERING_BEHAVIOUR_SEPARATION_H_INCLUDED