#include "randomizer_companion.h"

namespace Companion {
    void CompanionSettingsWindow::DrawElement() {
        ImGui::SetNextWindowSize(ImVec2(600, 375), ImGuiCond_FirstUseEver);

        if (!ImGui::Begin("Companion Settings", &mIsVisible, ImGuiWindowFlags_NoFocusOnAppearing)) {
            ImGui::End();
            return;
        }

        ImGui::Text("Hello, I am the companion settings window!");
        ImGui::End();
    }
} // namespace Companion
