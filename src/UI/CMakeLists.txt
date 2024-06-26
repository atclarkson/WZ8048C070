SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    fonts/ui_font_aeionmono144numbers.c
    fonts/ui_font_aeionmono16.c
    fonts/ui_font_aeionmono42.c
    fonts/ui_font_aeionmono48.c
    fonts/ui_font_alma16.c
    fonts/ui_font_alma18.c
    fonts/ui_font_digital100.c
    fonts/ui_font_digital144.c
    fonts/ui_font_digital164.c
    fonts/ui_font_digital30.c
    fonts/ui_font_digital40.c
    fonts/ui_font_monofonto100numbers.c
    fonts/ui_font_monofonto70numbers.c
    fonts/ui_font_roboto36.c
    fonts/ui_font_robotonumbers100.c
    fonts/ui_font_robotonumbers124.c
    fonts/ui_font_robotonumbers144.c
    fonts/ui_font_robotonumbers24.c
    fonts/ui_font_robotonumbers36.c
    fonts/ui_font_robotonumbers48.c
    fonts/ui_font_robotonumbers72.c)

add_library(ui ${SOURCES})
