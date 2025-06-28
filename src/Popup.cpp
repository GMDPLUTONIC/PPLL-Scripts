#include "Popup.hpp"

bool PPLLScripts::setup() {
    this->setAnchorPoint({0.5, 0});
    this->runAction(CCFadeTo::create(0.5f, 100));
    this->setKeypadEnabled(true);
    this->setTitle("PPLL Scripts", "goldFont.fnt", 0.7f, 16.5f);

    return true;
}

void PPLLScripts::onClose(CCObject* sender) {
    this->removeFromParent();
}

void PPLLScripts::keyBackClicked() {
    onClose(nullptr);
}

PPLLScripts* PPLLScripts::create() {
    auto pRet = new PPLLScripts();

    if (pRet && pRet->initAnchored(380, 240, "GJ_square01.png"))
    {
        pRet->autorelease();
        return pRet;
    }

    CC_SAFE_DELETE(pRet);
    return nullptr;
}