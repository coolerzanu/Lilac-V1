# lilac

* Keyboard Maintainer: [Prakshab](https://github.com/coolerzanu)

## Layout
 
- **60 keys total** : 30 per half, arranged in a 5-row × 6-column grid
- **2 rotary encoders** (one per half, bottom-outer corner) : also clickable as switches, no LEDs
- **58 per-key RGB LEDs** (SK6812 MINI-E) : all keys except the two encoder switches
- **4 layers**: Base (QWERTY), Lower (symbols/arrows), Raise (F-keys/brackets), Adjust (system)
- Hold **LOWER + RAISE** simultaneously to access the **ADJUST** layer (contains `QK_BOOT`)
 
## Layers
 
| Layer   | How to activate      | Contents                              |
|---------|----------------------|---------------------------------------|
| Base    | Default              | QWERTY, media encoder clicks          |
| Lower   | Hold LWR             | Symbols, F1–F10, arrow/page nav       |
| Raise   | Hold RSE             | F11–F12, brackets, `-` `=`            |
| Adjust  | Hold LWR + RSE       | QK_BOOT (top-left)                    |
 
## Encoder Behaviour
 
| Layer  | Left (CW/CCW)       | Right (CW/CCW)      |
|--------|---------------------|---------------------|
| Base   | Vol down / Vol up   | Prev / Next track   |
| Lower  | Left / Right arrow  | Down / Up arrow     |
| Raise  | Page down / Page up | —                   |
| Adjust | —                   | —                   |
 
## Wiring
 
| Feature         | Pin    |
|-----------------|--------|
| Rows (per half) | D1–D5  |
| Cols (per half) | B1–B6  |
| Serial (TRRS)   | D0     |
| LED data        | F0     |
| Left enc A/B    | F4/F5  |
| Right enc A/B   | F6/F7  |
 
> **Note:** Both halves use the same firmware. Flash each Pro Micro individually.
> Plug USB into the **left** half during normal use.
 
## Build & Flash
 
```bash
# Compile
make lilac:default
 
# Flash
make lilac:default:flash
```

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold top-left key and plug in USB
* **Physical reset button**: Press the reset button on the PCB
* **Keycode**: `QK_BOOT` on the ADJUST layer (top-left key — hold Lower + Raise, then tap Escape)
