#include "pch.h"
#include "StatusChanger.h"
#include <bakkesmod/plugin/pluginwindow.h>
#include <bakkesmod/plugin/PluginSettingsWindow.h>
std::shared_ptr<CVarManagerWrapper> _globalCvarManager;
using namespace std;

void StatusChanger::onLoad()
{
    _globalCvarManager = cvarManager;
}

void StatusChanger::onUnload()
{
}

void StatusChanger::ChangeStatus(std::string newStatus)
{
    // Get the game wrapper
    cvarManager->log("Status changed to: " + newStatus);
}

void StatusChanger::Render(CanvasWrapper canvas)
{
    // Create an instance of the StatusChanger class
    StatusChanger statusChangerInstance;

    // Check if ImGui should capture input
    if (!statusChangerInstance.IsActiveOverlay())
    {
        // Start rendering ImGui window
        if (ImGui::Begin("StatusChanger", nullptr, ImGuiWindowFlags_None))
        {
            // Render the plugin settings
            RenderSettings();
        }
        ImGui::End();
    }
}

void StatusChanger::RenderSettings()
{
    // Render the plugin settings
    ImGui::Text("StatusChanger plugin settings");

    // Input field to enter new status
    static char newStatus[256] = "";
    ImGui::InputText("New Status", newStatus, IM_ARRAYSIZE(newStatus));

    // Button to change player status
    if (ImGui::Button("Change Player Status"))
    {
        ChangeStatus(std::string(newStatus));
    }
}

bool StatusChanger::IsActiveOverlay()
{
    // Return if the window should be interactive
    return true;
}
