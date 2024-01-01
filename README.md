# Arduino LED PL9823

This project uses Arduino Nano with CH340 USB driver and multicolor RGB LEDs PL9823 F8 with Neo pixel chipset WS2812 inside.

The LEDs can be found at [aliexpress.com](https://www.aliexpress.com/item/4000807523337.html?src=google&src=google&albch=shopping&acnt=494-037-6276&slnk=&plac=&mtctp=&albbt=Google_7_shopping&albagn=888888&isSmbAutoCall=false&needSmbHouyi=false&albcp=19374404636&albag=&trgt=&crea=en4000807523337&netw=x&device=c&albpg=&albpd=en4000807523337&gad_source=1&gclid=CjwKCAiA4smsBhAEEiwAO6DEjeoGjKaIJVileeWUVsxopKJ6YCmh5oF_grzYQC4yiQcT1-i5UFAZSBoCcbYQAvD_BwE&gclsrc=aw.ds&aff_fcid=b546c19ca7cc451f938ff5e73813b582-1704135230568-08195-UneMJZVf&aff_fsk=UneMJZVf&aff_platform=aaf&sk=UneMJZVf&aff_trace_key=b546c19ca7cc451f938ff5e73813b582-1704135230568-08195-UneMJZVf&terminal_id=7ee1769885674335b706531bf064c99e&afSmartRedirect=y)

It's a very simple a sort of hello-world programme that continuously changes the color of three LEDs to get started to work with Neo pixels and arduino.


## Prerequisites

### Arduino IDE
Instal the Arduino IDE.

### FastLED Library
Install the FastLED library.

Sketch > Manage Libraries > Library Manager > FastLED by Daniel Garcia version 3.6.0

### CH340 driver

Follow the instructions to install CH340 driver on macOS to talk to the Arduino Nano bopard.

https://github.com/WCHSoftGroup/ch34xser_macos
http://www.wch.cn/downloads/CH34XSER_MAC_ZIP.html

Or use a local copy stored on sejf/data/Install/CH341SER_MAC

The port is identified in the system as wchusbserial210.

![port](/pictures/port.png)

And on your Mac can be found in the terminal under /dev/cu.*.

```
 ls -al /dev/cu.*
crw-rw-rw-  1 root  wheel  0x9000001 Dec 22 08:41 /dev/cu.Bluetooth-Incoming-Port
crw-rw-rw-  1 root  wheel  0x9000003 Jan  1 19:32 /dev/cu.usbserial-210
crw-rw-rw-  1 root  wheel  0x9000005 Jan  1 19:32 /dev/cu.wchusbserial210
```