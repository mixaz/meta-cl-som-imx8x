# Simple recipe to add desktop icon and executable to run
# CompuLab U-Boot Tool

DESCRIPTION = "CompuLab U-Boot Tool for imx8x SoC"
FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_cl-som-imx8x += "\
    file://cl-uboot.imx8x.work \
"

S = "${WORKDIR}"

do_install_prepend_cl-som-imx8x () {
#	mv ${S}/cl-uboot.imx8x.work ${S}/cl-uboot.work
	install -m 0755 ${S}/cl-uboot.imx8x.work ${S}/cl-uboot.work
}


PACKAGE_ARCH = "${MACHINE_ARCH}"
RDEPENDS_${PN}_remove  = " u-boot-compulab "
RDEPENDS_${PN}_append  = " imx-boot "
COMPATIBLE_MACHINE_cl-som-imx8x = "cl-som-imx8x"
