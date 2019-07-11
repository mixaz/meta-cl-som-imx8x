SRC_URI_append_cl-som-imx8x = " \
	file://0001-Upgrade-SCFW-API-to-v1.5-for-compatibility-with-imx-.patch  \
	file://0002-cl-som-imx8x-Add-CL-SOM-iMX8X-defconfig-files.patch         \
	file://0003-cl-som-imx8x-Add-CL-SOM-iMX8X-board-to-U-Boot.patch         \
	file://0004-cl-som-imx8x-Add-CL-SOM-iMX8X-build-option-to-Make-t.patch  \
	file://0005-EMMC-SDHC-FlexSPI0-ETH1-ESAI1-USB2-USBHUB.patch             \
	file://0006-Change-RAM-memory-layout-for-CL-SOM-iMX8X-board-sing.patch  \
	file://0007-flexspi-cl-som-imx8x.h.patch                                \
	file://0008-flexspi-disable-flexspi0-init-in-U-Boot-flexspi0-was.patch  \
	file://0009-flexspi-Initialize-FlexSPI0-in-SPL-leave-powered-on-.patch  \
	file://0010-flexspi-Customize-flexspi-device-in-cl-som-imx8x.dts.patch  \
	file://0011-ethernet-change-MDIO-IDs-for-CL-SOM-iMX8X-PHYs.patch        \
	file://0012-Set-FlexSPI-speed-to-133MHz.patch                           \
	file://0013-flexspi-Set-correct-Erase-sector-size-and-offset-for.patch  \
	file://0014-flexspi-new-mapping-for-spi-flash-boot-and-env-parti.patch  \
	file://0015-cleanup-spl.c.patch                                         \
	file://0016-uboot_env-Define-default-compulab-settings.patch            \
	file://0017-Add-defines-of-Compulab-EEPROM-at-System-I2C-bus.patch      \
	file://0018-Add-support-for-MAC-address-load-from-system-EEPROM.patch   \
	file://0019-common-eeprom-eeprom_layout-and-eeprom_field-API-upd.patch  \
	file://0020-cl-som-imx8x-Remove-EEPROM-defines-due-to-conflict.patch    \
	file://0021-cl-som-imx8x-Add-EEPROM-device-support-based-on-cl-s.patch  \
	file://0022-cl-som-imx8x-Add-EEPROM-device-support-to-defconfig.patch   \
	file://0023-compatibility-Add-i2c_read-and-i2c_write-by-DM_I2C-p.patch  \
	file://cl-som-imx8x_defconfig 						\
"
