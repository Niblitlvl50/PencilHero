//
//  GameZone.h
//  PencilHero
//
//  Created by Niklas Damberg on 14/01/15.
//
//

#pragma once

#include "ZoneBase.h"

namespace game
{
    class GameZone : public mono::ZoneBase
    {
    public:

        virtual void OnLoad(mono::ICameraPtr camera);
        virtual void OnUnload();
    };
}
