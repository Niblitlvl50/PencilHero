//
//  GameZone.cpp
//  PencilHero
//
//  Created by Niklas Damberg on 14/01/15.
//
//

#include "GameZone.h"
#include "EntityBase.h"
#include "Sprite.h"
#include "IRenderer.h"

using namespace game;

namespace
{
    class Background : public mono::EntityBase
    {
    public:

        Background()
            : mBackgroundSprite("background.sprite")
        {
            mPosition = math::Vector2f(400, 240);
            mScale = math::Vector2f(800, 480);
        }

        virtual void Draw(mono::IRenderer& renderer) const
        {
            renderer.DrawSprite(mBackgroundSprite);
        }

        virtual void Update(unsigned int delta)
        { }

        mono::Sprite mBackgroundSprite;
    };
}

void GameZone::OnLoad(mono::ICameraPtr camera)
{
    AddEntity(std::make_shared<Background>(), mono::BACKGROUND);
}

void GameZone::OnUnload()
{

}
