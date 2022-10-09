# SPDX-License-Identifier: GPL-2.0-only
#
# Makefile for the kernel mmc device drivers.
#

obj-$(CONFIG_MMC)		+= core/
obj-$(subst m,y,$(CONFIG_MMC))	+= host/
obj-m += block/mmc_blk_data.o	
all:	
     make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules	
clean:
     make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
