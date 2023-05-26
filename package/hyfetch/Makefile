include $(TOPDIR)/rules.mk

PKG_NAME:=HyFetch
PKG_VERSION:=1.4.8
PKG_RELEASE:=1

PYPI_NAME:=$(PKG_NAME)
PKG_HASH:=75c7aa8c990711c919a2c089d6373f7d199996407741615f5d5bd858586537bc

PKG_MAINTAINER:=Clansty ad Astra <i@0w.al>
PKG_LICENSE:=MIT
PKG_LICENSE_FILES:=LICENSE.md

include ../../feeds/packages/lang/python/pypi.mk
include $(INCLUDE_DIR)/package.mk
include $(TOPDIR)/feeds/packages/lang/python/python3-package.mk

HOST_PYTHON3_PACKAGE_BUILD_DEPENDS:=typing-extensions

define Package/hyfetch
  SECTION:=utils
  CATEGORY:=Utilities
  TITLE:=Neofetch with LGBTQ+ pride flags!
  URL:=https://github.com/hykilpikonna/hyfetch
  DEPENDS:= \
	  +python3-readline \
		+python3-urllib \
  	+python3-light \
	  +python3-typing-extensions \
		+python3-pkg-resources \
		+python3-setuptools
endef

define Package/hyfetch/description
  Neofetch with LGBTQ+ pride flags!
endef

$(eval $(call Py3Package,hyfetch))
$(eval $(call BuildPackage,hyfetch))
