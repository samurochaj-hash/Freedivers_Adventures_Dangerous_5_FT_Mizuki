// Freediver's Adventures Dangerous 5 FT Mizuki
// WonderSwan Color starter prototype — not a finished game.

#include <wonderful.h>
#include <ws.h>

typedef struct {
    int16_t mizuki_x, mizuki_y;
    uint8_t hp, air;
    uint16_t score;
} GameState;

static GameState game = {104, 72, 100, 100, 0};

void main(void) {
    // Enable the first background screen.
    outportw(WS_DISPLAY_CTRL_PORT, WS_DISPLAY_CTRL_SCR1_ENABLE);
    outportw(WS_SCR_PAL_0_PORT, 0x0000);

    while (1) {
        // Temporary visible startup test: cycle the first palette.
        // Tilemaps, sprites, controls, collisions and HUD are future work.
        uint16_t palette = inportw(WS_SCR_PAL_0_PORT);
        outportw(WS_SCR_PAL_0_PORT, (uint16_t)(palette + 1));

        // Placeholder air-state update.
        if (game.air > 0) game.air--;
        else game.air = 100;

        ws_delay_ms(100);
    }
}
