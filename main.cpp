//
//  main.cpp
//  PencilHero
//
//  Created by Niklas Damberg on 14/01/15.
//
//

#include "SysLibs.h"
#include "EventHandler.h"
#include "WindowFactory.h"
#include "TraceCamera.h"
#include "TextFunctions.h"
#include "Engine.h"
#include "GameZone.h"

int main()
{

    Libs::Init();

    mono::EventHandler eventHandler;
    mono::IWindowPtr window = mono::CreateWindow("PencilHero", 800, 480, false);
    mono::ICameraPtr camera = std::make_shared<mono::TraceCamera>(800, 480, eventHandler);

    mono::LoadFont("pixelette.ttf", 10.0f);

    mono::Engine engine(window, camera, eventHandler);
    engine.Run(std::make_shared<game::GameZone>());

    Libs::Exit();

    return 0;
}
