 Milkymist 1.0.0 �� starterkit �� S3 500E http://www.xilinx.com/products/boards-and-...R3E-SK-US-G.htm 
� ���������� �������� ��� SD �����, PS2 � ���������� �� 12 ��� VGA.

�������� ����� https://github.com/milkymist/milkymist/zipball/Release_1.0

��������� 50 ���, ��� 100 ���.  ���������� ���� CSR -50MHz (� ����. 80). ���� FML - 100 ���, ����������� 32 ��� ������
64 � ���������.
  �� ���� �� ���� ������ �� TFTP ����������� �����,���� ����� ������
� SD �����. ��� ��� ��������. �� USB, TMU, FPU - ����� �� �������, ��� ���������� � ���� ����������� PS2. 
������ STANDBY - ���, RESCUE - ���.  

 � ����� ROM - ��������� ����, �������� � ����� ���� 28F128
 � ����� board/s3e_sk50_10_001/ise124 ������ ��� ise12.4 ��� win
 � ����� cores - ������������ ������������ ����
 � ����� board/s3e_sk50_10_001/my_cores - ���������� ������ ��� ���������� �����
 
 ��������� lm32(lm32_top) ��������� � ������ ��� black box.  ����� ������������ ��� ����� �� S3E.
 � ����� board/s3e_sk50_10_001/my_cores/lm32 - ����� �� ���� �� �������(��������� � Ise ������� ����������� (��� S3E)).
 �� ��������� � ���������� �������� ���������� � �������������� ram, 
 ����� ��������� ����� ��������� (�� ����������������� ������� ��� �� ������).
 
 ��������� �������� ���������� ��� - �������� ���� boot.bin � ��� � 0x40000000,
 cmdline.txt � 0x41000000 �  initrd.bin  � 0x41002000.
 � � � 0x40000000  �����������. ���� ��� �� Linux �� ����������  boot.bin,
 �� ��������� ���� ������� ��� ��� ��.
 
 ������� ������������� � SD ���� �� 2��, ����������������� � FAT16- ��������� 512��, 1��, 2��.
 ������� ������������ �������� ���������, �� ������������� ����� ��� SDHC, � �������� �� ����
 ��������� ��� SD. � ���� ����� �� �������.
 
 ����� ��������� ����� � TFTP ������� ( ����������� ����� ����� ��) - � ��������� ��� win  http://tftpd32.jounin.net
 IP ����� ����� 192.168.0.42 ����� � ����. IP ����� TFTP ������� 192.168.0.14 ����� � ����.
 
 ��� �������� � ����������� ��������� ������� ����� ����������� � ������ ������� uplink.
-----------------------------
��� ������� ������ ���� ��������� ����� ���������:


VGA: DDC I2C bus initialized
VGA: mode set to 640x480
                                                                               
MILKYMIST(tm) v1.0 BIOS   http://www.milkymist.org
(c) Copyright 2007, 2008, 2009, 2010, 2011 Sebastien Bourdeauducq
                                                                               
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 3 of the License.
                                                                               
I: BIOS CRC passed (88250c03)
BRD: SoC 1.0 on Milkymist One (PCB revision 2)
BRD: Mem. card : Yes
BRD: AC'97     : No
BRD: PFPU      : No
BRD: TMU       : No
BRD: Ethernet  : Yes
BRD: FML meter : No
BRD: Video in  : No
BRD: MIDI      : No
BRD: DMX       : No
BRD: IR        : No
BRD: USB       : No
BRD: Memtester : No
USB: starting host controller
USB: Mouse not connect
UKB: USB keyboard connected to console
I: Displaying splash screen...OK
I: MAC address: 11:22:33:44:55:66
I: Press Q or ESC to abort boot
I: Booting from filesystem...
E: Unable to initialize memory card driver
E: Unable to initialize filesystem
I: Booting from flash...
E: Invalid flash boot image length
I: Booting from network...
I: MAC      : 11:22:33:44:55:66
I: Local IP : 192.168.0.42
I: Remote IP: 192.168.0.14
I: Unable to download boot.bin over TFTP
E: Network boot failed
E: No boot medium found
[1mBIOS>[0m                

-----------------------------
���� ���-�� �� ���, ������� ������ �� ������
 
���� ���� ������� ��  mybersh@mail.ru ���� � ������

gk2

 