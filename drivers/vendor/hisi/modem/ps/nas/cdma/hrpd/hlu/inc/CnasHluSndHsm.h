

#ifndef __CNAS_HLU_SND_HSM_H__
#define __CNAS_HLU_SND_HSM_H__

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "hsm_hlu_pif.h"
#include "cttf_hrpd_sig_public_pif.h"
#include "vos.h"
#include "CnasHluCtx.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/


/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
VOS_VOID CNAS_HLU_SndHsmHandoffCnf
(
    CNAS_HLU_HSM_1X_TO_HRPD_HANDOFF_RSLT_ENUM_UINT32             enHandOffResult
);

VOS_VOID CNAS_HLU_UpdateHsmLocValue
(
    const CNAS_HLU_CTX_STRU            *pstLocVal
);

CNAS_HLU_HSM_1X_TO_HRPD_HANDOFF_RSLT_ENUM_UINT32 CNAS_HLU_GetHandOffRslt(
    CTTF_HRPD_SNP_RSLT_ENUM_UINT32      enHandOffRslt
);



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of CnasHluCtx.h */
