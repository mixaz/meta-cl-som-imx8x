FILESEXTRAPATHS_prepend := "${THISDIR}/compulab/cl-som-imx8x:"

include compulab/cl-som-imx8x.inc

do_configure_append () {
    oe_runmake cl-som-imx8x_defconfig
}

COMPATIBLE_MACHINE = "(cl-som-imx8x)"
