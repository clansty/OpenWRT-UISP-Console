# SPDX-License-Identifier: GPL-2.0-only
#
# Copyright (C) 2023 Clansty ad Astra <i@0w.al>

include $(TOPDIR)/rules.mk

BOARD:=uispconsole
BOARDNAME:=UISP Console
ARCH:=aarch64
CPU_TYPE:=cortex-a57
FEATURES:=fpu pci rtc ext4 squashfs ramdisk
KERNELNAME:=vmlinux

KERNEL_PATCHVER:=4.19

include $(INCLUDE_DIR)/target.mk

DEFAULT_PACKAGES += mkf2fs e2fsprogs

$(eval $(call BuildTarget))
