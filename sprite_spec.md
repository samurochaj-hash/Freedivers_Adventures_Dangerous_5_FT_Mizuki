# Sprite and scene specification

## Mizuki
- Target sprite: 16x24 pixels, assembled from 8x8 hardware tiles.
- Planned animations: idle, swim-left, swim-right, swim-up and swim-down.
- Palette direction: orange hair/suit accents, pale suit panels, dark equipment,
  and yellow mask details, based on the supplied character reference.
- Convert the illustration into original low-resolution pixel art.

## HUD
- HP: red meter, 0–100.
- Air: blue meter, 0–100.
- Score counter.
- Keep the interface inside the 224x144 display.

## Level 1: Sunken Ruins
Planned tiles: water, stone blocks, columns, coral, seaweed, bubbles,
treasure and a deeper-passage marker. The ASCII map is only a blockout.

## Current status
Present: C source scaffold, startup palette test, level blockout and sprite plan.
Not implemented: final graphics, tile upload, sprite animation, input,
collisions, sound, save system and tested gameplay.
