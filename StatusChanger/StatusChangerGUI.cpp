#include "pch.h"
#include "StatusChanger.h"

/* Plugin Settings Window code here
std::string StatusChanger::GetPluginName() {
	return "StatusChanger";
}

void StatusChanger::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> StatusChanger
void StatusChanger::RenderSettings() {
	ImGui::TextUnformatted("StatusChanger plugin settings");
}
*/

/*
// Do ImGui rendering here
void StatusChanger::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string StatusChanger::GetMenuName()
{
	return "statuschanger";
}

// Title to give the menu
std::string StatusChanger::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void StatusChanger::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool StatusChanger::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool StatusChanger::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void StatusChanger::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void StatusChanger::OnClose()
{
	isWindowOpen_ = false;
}
*/
