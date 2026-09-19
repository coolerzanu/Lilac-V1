# Lilac‑V1

**A 60‑key split ergonomic mechanical keyboard — fully open source, hot‑swappable, and built to be built.**

![Status](https://img.shields.io/badge/status-v1%20released-6f42c1)
![Layout](https://img.shields.io/badge/layout-30%2B30%20split-BBBDE4)
![Firmware](https://img.shields.io/badge/firmware-QMK-informational)
![Hot Swap](https://img.shields.io/badge/switches-hot--swappable-success)
![License](https://img.shields.io/badge/license-see%20below-lightgrey)

<img src="Other/Images/Lilac-V1_(A5).png" alt="Lilac-V1 zine" width="600">

---

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Gallery](#gallery)
- [Hardware](#hardware)
  - [Bill of Materials](#bill-of-materials)
  - [PCB](#pcb)
  - [Case & Plate](#case--plate)
  - [Schematics & Routing](#schematics--routing)
- [Firmware & Layout](#firmware--layout)
- [Build Guide](#build-guide)
- [Support & Contributing](#support--contributing)
- [License](#license)
- [Credits](#credits)

---

## Overview

Lilac‑V1 is a fully custom split ergonomic keyboard designed from the ground up — PCB, case, plate, keycaps, and firmware. It splits 60 keys evenly across two halves so each hand sits at its own natural shoulder width, and adds a rotary encoder per side for volume, scrolling, or any macro you care to map.

Everything needed to build one is in this repository: Gerbers, STEP files, the QMK firmware, and a step‑by‑step assembly guide. The board is hot‑swappable, so switches can be changed at any point without a soldering iron.

**Designed for** hobbyists building their first custom keyboard, and anyone who wants a compact, portable, ergonomic daily driver they can modify freely.

---

## Specifications

| | |
|---|---|
| **Layout** | 60 keys, 30 + 30 split, ortholinear‑leaning column‑staggered |
| **Switches** | Cherry MX compatible, hot‑swappable (Kailh sockets) |
| **Per‑key lighting** | 60 × SK6812MINI‑E addressable RGB |
| **Encoders** | 2 × ALPS EC11E rotary encoder with push switch (one per half) |
| **Controller** | 2 × Pro Micro (ATmega32U4), USB‑C |
| **Interconnect** | TRRS (3.5 mm), one jack per half |
| **Firmware** | QMK, 3 layers, VIA/QMK‑remappable |
| **Case** | 3D printed, ~140 × 150 mm per half — `#F2EAD1` |
| **Plate** | 3D printed, ~130 × 145 mm per half — `#BBBDE4` |
| **Mounting** | M2 screws into heat‑set brass inserts |

---

## Gallery

<img src="Other/Images/IRL.png" alt="Finished Lilac-V1 build" width="600">

▶️ **[Build video](https://youtube.com/watch/vKBJXMWnp74?feature=share)**

### CAD model

<img src="Other/Images/Onshape.png" alt="Onshape CAD assembly" width="400">

The full parametric assembly is public on Onshape — fork it to adjust tenting, thickness, or port cutouts:
**[Open in Onshape](https://cad.onshape.com/documents/4d8953e5af74fcc880e44e66/w/bef2accd7b1ddfc276551b8b/e/cd08c4a1c934501cd57d1142?renderMode=0&uiState=69ee97f98f8b92d136877fda)**

---

## Hardware

### Bill of Materials

Quantities are for a **complete pair** of halves.

| Qty | Component | Part / Spec | Source |
|---:|---|---|---|
| 2 | PCB | `GerbZip.zip` in `/Gerber` | [JLCPCB][jlcpcb] / PCBWay |
| 60 | Mechanical switches | Cherry MX compatible | [Keychron K Pro][switches] |
| 60 | Hot‑swap sockets | Kailh CPG151101S11 | [Amazon][sockets] |
| 60 | SMD diodes | SOD‑523 | Any 1N4148W |
| 60 | RGB LEDs | SK6812MINI‑E | [JLCPCB C5149201][leds] |
| 2 | Rotary encoders | ALPS EC11E15244G1, 20 mm vertical | [JLCPCB C370970][encoder] |
| 2 | TRRS jacks | CUI SJ2‑3574A‑SMT‑TR | [JLCPCB C4991637][trrs] |
| 2 | Microcontroller | Pro Micro (ATmega32U4), USB‑C | [Amazon][promicro] |
| — | M2 heat‑set inserts | Brass, for 3D print | [Amazon][inserts] |
| 8 | Screws | M2 × 10 mm | Hardware store |
| 1 | Filament | PETG or PLA, 1 spool | [Bambu Lab PETG][filament] |
| 1 | TRRS cable | 3.5 mm, 4‑conductor | Any |

**Footprint reference** (for anyone modifying the PCB in KiCad):

| Component | Footprint |
|---|---|
| Switch | `marbastlib-xp-mx:SW_MX_HS_KS-2P02B01-01_1u` |
| Diode | `Diode_SMD:D_SOD-523` |
| LED | `footprints:SK6812MINI-E_fixed` |
| TRRS | `marbastlib-xp-various:CON_MJ-4PP-9` |
| Encoder | `Rotary_Encoder:RotaryEncoder_Alps_EC11E-Switch_Vertical_H20mm` |
| Controller | `Arduino:Sparkfun_Pro_Micro` |

### Required tools

- 3D printer — [Bambu Lab A1][printer] or equivalent
- Temperature‑controlled soldering iron — [Weller WE1010NA][iron] or equivalent
- Flux, solder, solder wick
- Soldering iron tip for heat‑set inserts
- Tweezers, M2 hex driver, N95 mask, ventilated workspace

### PCB

<img src="Other/Images/OBJ_PCB_Front.png" alt="PCB front" width="400">
<img src="Other/Images/OBJ_PCB_Back.png" alt="PCB back" width="400">

The two halves are mirrored builds of the same board. Component renders below use the [Kailh Polia STEP model][polia] for visualization.

<img src="Other/Images/Switch.png" alt="Switch" width="300">
<img src="Other/Images/Diode.png" alt="SMD diode" width="300">
<img src="Other/Images/LED.png" alt="SK6812MINI-E LED" width="300">
<img src="Other/Images/TRRS.png" alt="TRRS jack" width="300">
<img src="Other/Images/Rotary_Encoder.png" alt="Rotary encoder" width="300">
<img src="Other/Images/Rotary_Cap.png" alt="Rotary encoder cap" width="300">
<img src="Other/Images/Pro_Micro.png" alt="Pro Micro" width="300">

### Case & Plate

<img src="Other/Images/Case_Top.png" alt="Case top" width="450">
<img src="Other/Images/Case_Bottom.png" alt="Case bottom" width="450">
<img src="Other/Images/Plate.png" alt="Switch plate" width="450">

Both are designed in Onshape and print without supports. The plate DXF was generated from the layout file using the [Keyboard Layout Editor NG][kleng] plate generator.

### Schematics & Routing

<img src="Other/Images/Schema_Left.png" alt="Left half schematic" width="500">
<img src="Other/Images/Schema_Right.png" alt="Right half schematic" width="500">
<img src="Other/Images/PCB_Route.png" alt="PCB routing" width="500">

---

## Firmware & Layout

Lilac‑V1 runs **QMK** with a three‑layer default map. The compiled firmware and source live in `/Firmware`.

<img src="Other/Images/Keyboard_Layout.png" alt="Keyboard layout" width="600">
<img src="Other/Images/Plate_Generator.png" alt="Plate generator" width="600">

The layout JSON was authored in [Keyboard Layout Editor NG][kleng], which also generated the plate cutouts. Edit the JSON there to fork the layout, then regenerate both the plate DXF and your QMK keymap from it.

---

## Build Guide

> **Estimated time:** one weekend. **Difficulty:** intermediate — SMD soldering required.

### 1 · Order the PCB

Upload `Gerber/GerbZip.zip` to [JLCPCB][jlcpcb], PCBWay, or any equivalent fab. Default 1.6 mm FR‑4 with HASL is fine. Order **two** boards.

### 2 · Print the case

Open `Keyboard_Case.step` in your slicer. Recommended profile:

| Setting | Value |
|---|---|
| Infill | 15 %, gyroid |
| Ironing | Top surfaces |
| Material | PLA or PETG |
| Fuzzy skin | Optional (walls) |

### 3 · Print the plate

Same profile as above, using `Keyboard_Plates.step`.

### 4 · Print the keycaps

Open `Keyboard DSA 1u.step`. Duplicate the key **12×** on a lavender plate, and **46×** on a cream plate. Same slicer profile as above.

### 5 · Solder the components

Work in a ventilated space with an N95 mask.

Solder smallest to largest so larger parts never block your iron:

1. **SMD diodes** (SOD‑523) — smallest, hardest to reflow around
2. **SK6812MINI‑E LEDs** — heat‑sensitive; keep dwell time short
3. **Kailh hot‑swap sockets**
4. **Rotary encoders**
5. **TRRS jacks**
6. **Pro Micro** — USB‑C port facing outward

> **Tip:** test continuity and flash the firmware *before* closing the case. Debugging a sealed board is no fun.

### 6 · Assembly

1. Press heat‑set brass inserts into the case with a soldering iron tip.
2. Snap switches through the plate, then seat them into the sockets on the PCB.
3. Fit keycaps.
4. Stack case → PCB → plate and fasten with M2 × 10 mm screws. Check every connection sits flush before tightening.

### 7 · Flash the firmware

Flash the QMK firmware from `/Firmware` to each half using QMK Toolbox or `qmk flash`. Reset each Pro Micro by shorting RST to GND twice.

### 8 · Done

Connect the halves with a TRRS cable, plug in USB‑C, and you're typing.

---

## Support & Contributing

Found a bug in the PCB, case, or firmware? Open an issue — fixes get pushed as fast as I can verify them. Remixes, layout forks, and pull requests are all welcome; if you build one, I'd love to see it.

---

## License

- **Firmware** — GPL‑2.0, inherited from QMK.
- **Hardware** (PCB, case, plate, keycaps) — see `LICENSE`.

---

## Credits

- [marbastlib][marbastlib] — KiCad footprint libraries
- [Arduino Pro Micro model][promicro-model] — GrabCAD
- [DSA keycap model][dsa] — anhthang
- [Kailh Polia STEP model][polia] — GrabCAD
- [Color palette inspiration][palette]

<!-- Links -->
[jlcpcb]: https://jlcpcb.com/
[switches]: https://www.amazon.com/Keychron-Banana-Linear-Switches-Hot-Swappable/dp/B0BNYY1D9D
[sockets]: https://www.amazon.com/Hot-swap-CPG151101S11-Mechanical-Keyboard-Accessories/dp/B0BVH6M5FP
[leds]: https://jlcpcb.com/partdetail/OPSCOOptoelectronics-SK6812MINIE/C5149201
[encoder]: https://jlcpcb.com/partdetail/ALPSALPINE-EC11E15244G1/C370970
[trrs]: https://jlcpcb.com/partdetail/CUI-SJ2_3574A_SMTTR/C4991637
[promicro]: https://www.amazon.com/OSOYOO-Mega32U4-Leonardo-Module-Arduino/dp/B09TKMM8N5
[inserts]: https://www.amazon.com/FFVRVSS-M2-M3-Threaded-Inserts/dp/B0FWCHPY4F
[filament]: https://us.store.bambulab.com/products/petg-basic
[printer]: https://us.store.bambulab.com/products/a1
[iron]: https://www.homedepot.com/p/Weller-Digital-Soldering-Station-WE1010NA/304947077
[kleng]: https://editor.keyboard-tools.xyz/
[polia]: https://grabcad.com/library/kailh-polia-switch-cherry-mx-compatible-1
[marbastlib]: https://github.com/ebastler/marbastlib
[promicro-model]: https://grabcad.com/library/arduino-pro-micro-1
[dsa]: https://github.com/anhthang/dsa-keycap
[palette]: https://www.etsy.com/listing/1273810417/sofle-keyboard
