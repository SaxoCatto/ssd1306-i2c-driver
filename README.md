## Reasoning
In response to my Embedded OS's big project requirement. I must tackle with the kernel, prove that I have played with syscalls and kernel modules

## Functions
- Probe: For the Pi to recognise any peripherals connected to it. Command to show it is 'dnmsq', it is by default hidden.
- Print letters on the screen: With caveats
- Multiple connections: Still working on it

## How to use
- Download this repo. I assume name for it is "ssd1306-i2c-driver". And cd sd1306-i2c-driver
- Write your own Makefile and place it in the mentioned folder. Or wait for an update here.
- Within same folder, use 'sudo make'. There should be a .ko file there.
- Type "sudo insmod *.ko". Assume the name is asd.ko 

## Verify
- This worked on my Raspberry Pi 4, connected to an 1 inch OLED screen
- After inserting that module .ko, the screen should be lit, and some letters will appear.
- In terminal, type "lsmod". If asd.ko is listed, that means the kernel module is created, loaded and utilized.

## Misc
- Will it work first try? No. But it should work in linux-core 6.x.x. Maybe 5.x.x because Pi kernel is a bit behind. Specifically, I didn't pay attention to my main driver function, making the screen unrecognisable:
https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/tree/Documentation/i2c/writing-clients.rst
- Can I use this for other I2C devices? Yes, but you should still rewrite it. There should be some leftovers.
