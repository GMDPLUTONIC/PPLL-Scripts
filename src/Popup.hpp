#pragma once

#include <Geode/Geode.hpp>
#include <Geode/ui/GeodeUI.hpp>
#include <Geode/modify/PauseLayer.hpp>

using namespace geode::prelude;

class PPLLScripts : public geode::Popup<>
{
    public:
        virtual bool setup();

        void onClose(CCObject* sender);
        void keyBackClicked();
        
        void onSettings(CCObject*);
        
        static PPLLScripts* create();
        static PPLLScripts* get();
};