FILESEXTRAPATHS_prepend := "${THISDIR}/compulab/cl-som-imx8x:"

include compulab/cl-som-imx8x.inc

PACKAGE_ARCH = "${MACHINE_ARCH}"

SPL_BINARY = "spl/u-boot-spl.bin"
