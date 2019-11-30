FILESEXTRAPATHS_prepend := "${THISDIR}/compulab/cl-som-imx8x:"

include compulab/cl-som-imx8x.inc

do_configure_append () {
    oe_runmake ${MACHINE}_defconfig
}

COMPATIBLE_MACHINE_cl-som-imx8x = "cl-som-imx8x"
