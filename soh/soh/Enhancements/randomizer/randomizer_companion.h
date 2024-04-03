#pragma once
#include <libultraship/libultraship.h>

namespace Companion {
    class CompanionSettingsWindow : public LUS::GuiWindow {
    public:
        using LUS::GuiWindow::GuiWindow;
        ~CompanionSettingsWindow() {};

    protected:
        void InitElement() override {};
        void DrawElement() override;
        void UpdateElement() override {};
    };
} // namespace Companion

