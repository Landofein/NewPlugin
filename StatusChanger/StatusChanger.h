#pragma once
#include "bakkesmod/plugin/bakkesmodplugin.h"

class StatusChanger : public BakkesMod::Plugin::BakkesModPlugin
{
private:
    std::shared_ptr<bool> showStatusChange; // Add a boolean shared pointer to toggle status change visibility

public:
    void onLoad() override;
    void onUnload() override;

    void Render(CanvasWrapper canvas);
    void RenderSettings();
    bool IsActiveOverlay();
    void ChangeStatus(std::string newStatus); // Add a method to change the player's status
};
