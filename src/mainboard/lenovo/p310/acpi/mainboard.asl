/* SPDX-License-Identifier: CC-PDDC */

    Method(_WAK, 1)
    {
        RWAK(Arg0)
        \_SB_.PCI0.NWAK(Arg0)
        \_SB_.PCI0.LPCB.SWAK(Arg0)
        \_SB_.PCI0.LPCB.SIO1.SIOW(Arg0)
        DFOR(Arg0)
        Return(WAKP)
    }

    Method(_PTS, 1)
    {
        If(Arg0)
        {
            RPOP(Arg0)
            \_SB_.PCI0.LPCB.SIO1.SIOS(Arg0)
            \_SB_.PCI0.LPCB.SPTS(Arg0)
            \_SB_.PCI0.NPTS(Arg0)
            RPTS(Arg0)
        }
    }

    Method(RWAK, 1)
    {
        P8XH(One, 0xab)
        If(LEqual(Arg0, 0x3))
        {
            Store(Zero, P80D)
            P8XH(Zero, 0x30)
        }
        If(LEqual(Arg0, 0x4))
        {
            Store(Zero, P80D)
            P8XH(Zero, 0x40)
        }
        ADBG("_WAK")
        \_SB_.PCI0.GEXP.INVC()
        If(LEqual(S0ID, One))
        {
            Store(One, \_SB_.SCGE)
        }

/* Please update the license if adding licensable material. */
