#include <PR/ultratypes.h>

#include "sm64.h"
#include "actors/common1.h"
#include "gfx_dimensions.h"
#include "game_init.h"
#include "level_update.h"
#include "camera.h"
#include "print.h"
#include "ingame_menu.h"
#include "hud.h"
#include "segment2.h"
#include "area.h"
#include "save_file.h"
#include "print.h"

#define HUD_TOP_Y 210

void render_hud_power_meter(void) {
    print_text(110, HUD_TOP_Y, "POWER");
    print_text_fmt_int(126, HUD_TOP_Y - 17, "%02d", gHudDisplay.wedges);
}

void render_hud_mario_lives(void) {
    print_text(30, HUD_TOP_Y, ",");
    print_text(46, HUD_TOP_Y, "*");
    print_text_fmt_int(58, HUD_TOP_Y, "%02d", gHudDisplay.lives);
}

void render_hud_coins(void) {
    print_text(170, HUD_TOP_Y - 17, "+");
    print_text(186, HUD_TOP_Y - 17, "*");
    print_text_fmt_int(198, HUD_TOP_Y - 17, "%02d", gHudDisplay.coins);
}

void render_hud_stars(void) {
    print_text(170, HUD_TOP_Y, "-");
    print_text(186, HUD_TOP_Y, "*");
    print_text_fmt_int(198, HUD_TOP_Y, "%02d", gHudDisplay.stars);
}


void render_hud(void) {
    s16 hudDisplayFlags = gHudDisplay.flags;

    if (hudDisplayFlags != HUD_DISPLAY_NONE) {
        create_dl_ortho_matrix();

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_LIVES) {
            render_hud_mario_lives();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_COIN_COUNT) {
            render_hud_coins();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_STAR_COUNT) {
            render_hud_stars();
        }

        if (hudDisplayFlags & HUD_DISPLAY_FLAG_POWER) {
            render_hud_power_meter();
        }
    }
}
