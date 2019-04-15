# Towards bridging the gap between modern and legacy automotive ECUs: A Software-based Security Framework for legacy ECUs

*** This file describes the various source code components used to provide a proof of concept implementation SECURE, a software-based virtualization technique to provide custom security services for legacy ECUs.

## Software dependencies 
We used the following open source libraries (which are included in this repo.):

- **AVR Crypto Lib** for SHA2 and HMAC-SHA2 : https://github.com/cantora/avr-crypto-lib
- **ECC** for the various components of ECC (e.g. ECDSA, ECDH, etc.) : https://github.com/kmackay/micro-ecc
- **ISO-TP** for the network and transport layers of CAN protocol: https://github.com/lishen2/isotp-c 

****************************************

## Hardware dependencies

This software has been developed and tested on DVK90CAN1 platform, which has an 8-bit AT90CAN128 microcontroller running at 8MHz, with 4KB of SRAM and 128 KB of Flash memory, as well as CAN interface. 

For more details:
http://ww1.microchip.com/downloads/en/devicedoc/doc4381.pdf
http://ww1.microchip.com/downloads/en/devicedoc/doc7679.pdf


****************************************

## Contents

- **coreSECURE:** the source code of Trusted Computing Module along with crypto modules used.
- **edgeECU** the source code of the automotive legacy ECU side including ISO-TP implementation.
- **OBD-II-Device:** Represents the attached OBD-II device along with logical OEM server.


****************************************
 
## How to Run the code

- You should have two DVK90CAN1 platforms where their CAN interfaces connected to each other, and the platform that reperesnts the gateway connected to a PC through its serial interface to demonstrate results.
- Depending on which party you want to doploy in either platform, you have to update first the Makefile.include file in core Folder, where you have to specify the details of your programmer and add all source .c files.
- From the location where main.c resides, run the following commands:
	 - make mainSECURE.hex
	 - make flash

- If you have different AVR platform, you have to edit the implementation of can.c and can.h to comply with the specifications listed in the datasheet of your platform.
 
***************************************

** Please note that this implementation is only applicable for AVR-based MCUs.

** For further info. Please contact: ashoksamraj.thangarajan@cs.kuleuven.be or mahmoud.ammar@cs.kuleuven.be








