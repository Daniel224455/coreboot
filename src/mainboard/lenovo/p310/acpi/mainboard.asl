/* SPDX-License-Identifier: CC-PDDC */

    Method(_WAK, 1)
    {
        \_SB_.PCI0.NWAK(0)
        \_SB_.PCI0.LPCB.SWAK(0)
        \_SB_.PCI0.LPCB.SIO1.SIOW(0)
    }

    Method(_PTS, 1)
    {
        \_SB_.PCI0.LPCB.SIO1.SIOS(0)
        \_SB_.PCI0.LPCB.SPTS(0)
        \_SB_.PCI0.NPTS(0)
    }

/* Please update the license if adding licensable material. */
