# Instructions
### Part List
- [x1 BambuLabs PETG Spool](https://us.store.bambulab.com/products/petg-basic)
- [x2 ProMicro](https://www.amazon.com/OSOYOO-Mega32U4-Leonardo-Module-Arduino/dp/B09TKMM8N5)
- [x2 TRRS Jack - SJ2-3574A-SMT-TR](https://jlcpcb.com/partdetail/CUI-SJ2_3574A_SMTTR/C4991637)
- [x60 kalith hotswappable sockets](https://www.amazon.com/Hot-swap-CPG151101S11-Mechanical-Keyboard-Accessories/dp/B0BVH6M5FP/ref=sr_1_1?crid=T9Y860SOTS1U&dib=eyJ2IjoiMSJ9.EevZxqeUp-BwdM7j_U8_MbAtJ5JfZUOOkAsBMuLzdFA.V6kmxq1wgtNuKFLWIgYij51Bhn6TXikotwipJsFN9ro&dib_tag=se&keywords=kalith%2bhot%2bswappable%2bsockets&qid=1775277449&s=electronics&sprefix=kalith%2bhotswappable%2bsockets,electronics,76&sr=1-1&th=1)
- [x60 Keychron K Pro Banana Tactile Switches](https://www.amazon.com/Keychron-Banana-Linear-Switches-Hot-Swappable/dp/B0BNYY1D9D/ref=sr_1_3?crid=ROB0KDFM2D8F&dib=eyJ2IjoiMSJ9.ywk9OFoUJ08g2rFXxzpWD1aI9Mu7LOdUvPG2807zb6_aAB5ggO2zbkraXT1yKHpIKwS6u7Tdm4p_P94dFEk0Y7JF5nR6ohc1-fwj3wRxx6xOehI9mJMSGmXlyKFDURW8linmgluoQ-Wwi2HjDkleIQptdKfeQ0QpGegJ3YreX4vuz2kEFHtq6pZTtItD-1kKGKfG_hCda-UbG-mlfbd1XYMD1UqB1kgLoc6xWKc3cOQ.AssP9YgcOYW4r9Je2aC5oXVvISoh8Q4JWG3wNFJ5d6s&dib_tag=se&keywords=banana%20switches&qid=1775277570&sprefix=banana%20switches,aps,109&sr=8-3#averageCustomerReviewsAnchor)
- [x2 RotaryEncoder_Alps_EC11E-Switch_Vertical_H20mm](https://jlcpcb.com/partdetail/ALPSALPINE-EC11E15244G1/C370970)
- [SK6812MINI-E LEDS](https://jlcpcb.com/partdetail/OPSCOOptoelectronics-SK6812MINIE/C5149201)

### Required Tools
- [3D Printer](https://us.store.bambulab.com/products/a1?srsltid=AfmBOooBF1VulJOcN0w0Dw9eKBr-6jUI9S0_6fC8T1UrhNsn2X_tcuJB&id=579550514255634444)
- [Soldering Iron](https://www.homedepot.com/p/Weller-Digital-Soldering-Station-WE1010NA/304947077)
- [Brass inserts](amazon.com/FFVRVSS-M2-M3-Threaded-Inserts/dp/B0FWCHPY4F/ref=sr_1_3?crid=1M1V03BBM3MIT&dib=eyJ2IjoiMSJ9.Sjjb3PGrq9pjs0x3RTvJwyMmRcq6Ckucrt-5cHlTGY56BgooaXewumx3JpTy1NCbiV2yIOVJ-vYFUCPGfgFYsK8gKbEKCvLfMyteWEElfPmrq-DAUy6isY1j9VHX2U6Ndi93VoeO0NcqyEsV-mLkOfdkiHu97W_Y5oH1juhhr1yolhXGW-m-8xjGOr2uY8_d8QRuMwjA2gk7tz8GXOoz24xkVfKIJ9iBmXRALR9aVBs.iua-mkHE0n89-bI8siGt-JAvbYwS8CvOuTEmoRfI_3g&dib_tag=se&keywords=brass%20inserts%203d%20printing&qid=1775276856&sprefix=brass%20inserts,aps,133&sr=8-3)

## Step By Step Guide

### Step 1 - Ordering the PCB
- Please look inside of the gerber file and drag the "GerbZip.zip" File into any popular PCB manufacturing service. JLCPCB or PCBway are both great options to manufacture the PCB. 

### Step 2 - Printing the Case 
- Please download and open the "Keyboard_Case.step" file into any slicer software. This project used bambu studio. Some settings to note: 15% infill density, gyroid infill pattern, ironing top surfaces on, fuzzy walls are optional. This project printed the case with PLA however PETG is a great alternative. 

### Step 3 - Printing the Plate
- (Might sound redundant) Please download and open the "Keyboard_Plates.step" file into any slicer software. This project used bambu studio. Some settings to note: 15% infill density, gyroid infill pattern, ironing top surfaces on. This project printed the case with PLA however PETG is a great alternative. 

### Step 4 - Printing the KeyCaps
- Please download and open the "Keyboard DSA 1u.step" file into any slicer software. This project used bambu studio. Copy the 1u key 12 times and prepare to print with a lavender color. Prepare another plate and copy the keys another 46 times to print with a creame color. Some settings to node:15% infill density, gyroid infill pattern, ironing top surfaces on.
  
### Step 5 - Soldering the Components
- Please prepare a safe work enviornemnt with proper ventilation and an N95 mask. Ensure you have a soldering iron, Flux, and possibly solder wick. Start by soldering the SMD LEDs as they are the smallest components before moving to the LEDs and Switches. Rotary Encoders and TRRS Jacks can be left for last.  

### Step 6 - Assembly
- Insert the desired keycaps into the plate now that the sockets are soldered on. For this project I used Kailh Speed Silver switches.
- Push in and solder the Pro Micro controller into the PCB with the USB-C port facing outward. 
- Using 4 10mm M2 screws, assemble the keyboard starting with the case, the pcb, and finally the plate. Ensure that all connections are flush and secured. 

### Step 7 - Firmware
- Using the attached file in the "Firmware" Folder, flash the QMK firmware onto the board.

### Step 8 - Conclusion
- With that, Lilac-V1 is done! Feel free to make any modifications with my design and let me know if I should improve anything! If there are any bugs or issues you encounter please let me know and I will try to fix them ASAP. See yall!
