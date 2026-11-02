# Freediver's Adventures Dangerous 5 FT Mizuki — WSC source scaffold

This is an early source scaffold for an original 2D WonderSwan Color game.
It is **not a compiled `.wsc` ROM** and does not yet contain final sprite art
or complete gameplay.

## Target
- Bandai WonderSwan Color
- Display: 224 x 144 pixels
- Intended output: `.wsc`

## Build outline
Install and configure the Wonderful Toolchain, then create its target template:

```sh
wf-wswantool project new freedivers-wsc
```

Copy this package's `src/main.c` into the generated project's `src/main.c`,
then run:

```sh
cd freedivers-wsc
make
```

The toolchain template supplies the Makefile and linker configuration. A
successful build should produce a `.wsc` ROM. Test it in an emulator.

## Included
- `src/main.c`: minimal startup/palette test and state scaffold.
- `assets/level1_map.txt`: first-level layout blockout.
- `docs/sprite_spec.md`: Mizuki, HUD and level-art plan.

## Limitations
This prototype only enables a display layer and cycles a palette entry.
It is not yet a playable game. Tile graphics/map upload, sprite rendering,
button input, collision handling and actual HUD drawing remain to be developed.
