/*******************************************************************************
* Filename      : usbfsregisters.hpp
*
* Details       : Universal serial bus full-speed device interface. This header
*                 file is auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(USBFSREGISTERS_HPP)
#define USBFSREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct USBFS
    {
        struct EPT0 : public Register<0x40005C00, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT0, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT0, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT0, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT0, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT0, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT0, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT0, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT0, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT0, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT0, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT1 : public Register<0x40005C04, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT1, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT1, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT1, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT1, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT2 : public Register<0x40005C08, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT2, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT2, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT2, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT2, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT3 : public Register<0x40005C0C, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT3, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT3, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT3, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT3, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT3, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT3, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT3, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT3, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT3, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT3, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT4 : public Register<0x40005C10, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT4, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT4, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT4, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT4, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT4, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT4, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT4, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT4, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT4, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT4, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT5 : public Register<0x40005C14, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT5, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT5, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT5, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT5, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT5, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT5, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT5, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT5, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT5, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT5, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT6 : public Register<0x40005C18, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT6, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT6, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT6, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT6, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT6, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT6, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT6, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT6, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT6, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT6, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct EPT7 : public Register<0x40005C1C, 32, ReadWriteMode>
        {
            struct EPTADDR : public RegisterField<EPT7, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPTADDR, 0U>;
                using Value1 = FieldValue<EPTADDR, 1U>;
                using Value2 = FieldValue<EPTADDR, 2U>;
                using Value3 = FieldValue<EPTADDR, 3U>;
                using Value4 = FieldValue<EPTADDR, 4U>;
                using Value5 = FieldValue<EPTADDR, 5U>;
                using Value6 = FieldValue<EPTADDR, 6U>;
                using Value7 = FieldValue<EPTADDR, 7U>;
                using Value8 = FieldValue<EPTADDR, 8U>;
                using Value9 = FieldValue<EPTADDR, 9U>;
                using Value10 = FieldValue<EPTADDR, 10U>;
                using Value11 = FieldValue<EPTADDR, 11U>;
                using Value12 = FieldValue<EPTADDR, 12U>;
                using Value13 = FieldValue<EPTADDR, 13U>;
                using Value14 = FieldValue<EPTADDR, 14U>;
                using Value15 = FieldValue<EPTADDR, 15U>;
            };

            struct TXSTS : public RegisterField<EPT7, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TXSTS, 0U>;
                using Value1 = FieldValue<TXSTS, 1U>;
                using Value2 = FieldValue<TXSTS, 2U>;
                using Value3 = FieldValue<TXSTS, 3U>;
            };

            struct TXDTS : public RegisterField<EPT7, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXDTS, 0U>;
                using Value1 = FieldValue<TXDTS, 1U>;
            };

            struct TXTC : public RegisterField<EPT7, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXTC, 0U>;
                using Value1 = FieldValue<TXTC, 1U>;
            };

            struct EXF : public RegisterField<EPT7, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXF, 0U>;
                using Value1 = FieldValue<EXF, 1U>;
            };

            struct TRANS_TYPE : public RegisterField<EPT7, 9, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRANS_TYPE, 0U>;
                using Value1 = FieldValue<TRANS_TYPE, 1U>;
                using Value2 = FieldValue<TRANS_TYPE, 2U>;
                using Value3 = FieldValue<TRANS_TYPE, 3U>;
            };

            struct SETUPTC : public RegisterField<EPT7, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SETUPTC, 0U>;
                using Value1 = FieldValue<SETUPTC, 1U>;
            };

            struct RXSTS : public RegisterField<EPT7, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RXSTS, 0U>;
                using Value1 = FieldValue<RXSTS, 1U>;
                using Value2 = FieldValue<RXSTS, 2U>;
                using Value3 = FieldValue<RXSTS, 3U>;
            };

            struct RXDTS : public RegisterField<EPT7, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXDTS, 0U>;
                using Value1 = FieldValue<RXDTS, 1U>;
            };

            struct RXTC : public RegisterField<EPT7, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXTC, 0U>;
                using Value1 = FieldValue<RXTC, 1U>;
            };

        };

        struct CTRL : public Register<0x40005C40, 32, ReadWriteMode>
        {
            struct CSRST : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CSRST, 0U>;
                using Value1 = FieldValue<CSRST, 1U>;
            };

            struct DISUSB : public RegisterField<CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DISUSB, 0U>;
                using Value1 = FieldValue<DISUSB, 1U>;
            };

            struct LPM : public RegisterField<CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LPM, 0U>;
                using Value1 = FieldValue<LPM, 1U>;
            };

            struct SSP : public RegisterField<CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SSP, 0U>;
                using Value1 = FieldValue<SSP, 1U>;
            };

            struct GRESUME : public RegisterField<CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GRESUME, 0U>;
                using Value1 = FieldValue<GRESUME, 1U>;
            };

            struct LSOFIEN : public RegisterField<CTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LSOFIEN, 0U>;
                using Value1 = FieldValue<LSOFIEN, 1U>;
            };

            struct SOFIEN : public RegisterField<CTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SOFIEN, 0U>;
                using Value1 = FieldValue<SOFIEN, 1U>;
            };

            struct RSTIEN : public RegisterField<CTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RSTIEN, 0U>;
                using Value1 = FieldValue<RSTIEN, 1U>;
            };

            struct SPIEN : public RegisterField<CTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPIEN, 0U>;
                using Value1 = FieldValue<SPIEN, 1U>;
            };

            struct WKIEN : public RegisterField<CTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WKIEN, 0U>;
                using Value1 = FieldValue<WKIEN, 1U>;
            };

            struct BEIEN : public RegisterField<CTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BEIEN, 0U>;
                using Value1 = FieldValue<BEIEN, 1U>;
            };

            struct UCFORIEN : public RegisterField<CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UCFORIEN, 0U>;
                using Value1 = FieldValue<UCFORIEN, 1U>;
            };

            struct TCIEN : public RegisterField<CTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TCIEN, 0U>;
                using Value1 = FieldValue<TCIEN, 1U>;
            };

        };

        struct INTSTS : public Register<0x40005C44, 32, ReadWriteMode>
        {
            struct EPT_NUM : public RegisterField<INTSTS, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EPT_NUM, 0U>;
                using Value1 = FieldValue<EPT_NUM, 1U>;
                using Value2 = FieldValue<EPT_NUM, 2U>;
                using Value3 = FieldValue<EPT_NUM, 3U>;
                using Value4 = FieldValue<EPT_NUM, 4U>;
                using Value5 = FieldValue<EPT_NUM, 5U>;
                using Value6 = FieldValue<EPT_NUM, 6U>;
                using Value7 = FieldValue<EPT_NUM, 7U>;
                using Value8 = FieldValue<EPT_NUM, 8U>;
                using Value9 = FieldValue<EPT_NUM, 9U>;
                using Value10 = FieldValue<EPT_NUM, 10U>;
                using Value11 = FieldValue<EPT_NUM, 11U>;
                using Value12 = FieldValue<EPT_NUM, 12U>;
                using Value13 = FieldValue<EPT_NUM, 13U>;
                using Value14 = FieldValue<EPT_NUM, 14U>;
                using Value15 = FieldValue<EPT_NUM, 15U>;
            };

            struct INOUT : public RegisterField<INTSTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INOUT, 0U>;
                using Value1 = FieldValue<INOUT, 1U>;
            };

            struct LSOF : public RegisterField<INTSTS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LSOF, 0U>;
                using Value1 = FieldValue<LSOF, 1U>;
            };

            struct SOF : public RegisterField<INTSTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SOF, 0U>;
                using Value1 = FieldValue<SOF, 1U>;
            };

            struct RST : public RegisterField<INTSTS, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RST, 0U>;
                using Value1 = FieldValue<RST, 1U>;
            };

            struct SP : public RegisterField<INTSTS, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SP, 0U>;
                using Value1 = FieldValue<SP, 1U>;
            };

            struct WK : public RegisterField<INTSTS, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WK, 0U>;
                using Value1 = FieldValue<WK, 1U>;
            };

            struct BE : public RegisterField<INTSTS, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BE, 0U>;
                using Value1 = FieldValue<BE, 1U>;
            };

            struct UCFOR : public RegisterField<INTSTS, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UCFOR, 0U>;
                using Value1 = FieldValue<UCFOR, 1U>;
            };

            struct TC : public RegisterField<INTSTS, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TC, 0U>;
                using Value1 = FieldValue<TC, 1U>;
            };

        };

        struct SOFRNUM : public Register<0x40005C48, 32, ReadWriteMode>
        {
            struct SOFNUM : public RegisterField<SOFRNUM, 0, 11, ReadWriteMode>
            {
            };

            struct LSOFNUM : public RegisterField<SOFRNUM, 11, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<LSOFNUM, 0U>;
                using Value1 = FieldValue<LSOFNUM, 1U>;
                using Value2 = FieldValue<LSOFNUM, 2U>;
                using Value3 = FieldValue<LSOFNUM, 3U>;
            };

            struct CLCK : public RegisterField<SOFRNUM, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLCK, 0U>;
                using Value1 = FieldValue<CLCK, 1U>;
            };

            struct DMSTS : public RegisterField<SOFRNUM, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMSTS, 0U>;
                using Value1 = FieldValue<DMSTS, 1U>;
            };

            struct DPSTS : public RegisterField<SOFRNUM, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DPSTS, 0U>;
                using Value1 = FieldValue<DPSTS, 1U>;
            };

        };

        struct DEVADDR : public Register<0x40005C4C, 32, ReadWriteMode>
        {
            struct ADDR : public RegisterField<DEVADDR, 0, 7, ReadWriteMode>
            {
            };

            struct CEN : public RegisterField<DEVADDR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CEN, 0U>;
                using Value1 = FieldValue<CEN, 1U>;
            };

        };

        struct BUFTBL : public Register<0x40005C50, 32, ReadWriteMode>
        {
            struct BTADDR : public RegisterField<BUFTBL, 3, 13, ReadWriteMode>
            {
            };

        };

        struct CFG : public Register<0x40005C60, 32, ReadWriteMode>
        {
            struct PUO : public RegisterField<CFG, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PUO, 0U>;
                using Value1 = FieldValue<PUO, 1U>;
            };

            struct SOFOUTEN : public RegisterField<CFG, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SOFOUTEN, 0U>;
                using Value1 = FieldValue<SOFOUTEN, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(USBFSREGISTERS_HPP)
