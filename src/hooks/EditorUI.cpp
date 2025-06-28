#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>
#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include "../Popup.hpp"

using namespace geode::prelude;

class $modify(PPLLScriptsEUI, EditorUI) {
    void customSetup() {
        if (auto menu = this->getChildByID("editor-buttons-menu")) {
            auto btn = CCMenuItemSpriteExtra::create(
                CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png"),
                this,
                menu_selector(PPLLScriptsEUI::onPPLLButton)
            );
            btn->setID("ppll-script-runner-btn"_spr);
            menu->addChild(btn);
            menu->updateLayout();
        }
    }

    void onPPLLButton(CCObject*) {
        if (auto popup = PPLLScripts::create()) {
            popup->show();
        }
    }
};