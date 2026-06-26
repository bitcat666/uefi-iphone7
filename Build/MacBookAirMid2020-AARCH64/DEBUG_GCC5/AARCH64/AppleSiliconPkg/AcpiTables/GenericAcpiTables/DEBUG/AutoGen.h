/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_a57bccf6_0ca5_439a_b8a6_eb40ff035827
#define _AUTOGENH_a57bccf6_0ca5_439a_b8a6_eb40ff035827

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xa57bccf6, 0x0ca5, 0x439a, {0xb8, 0xa6, 0xeb, 0x40, 0xff, 0x03, 0x58, 0x27}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0xA030C248BED6C6E0ULL

// Guids
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gArmTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAcpiDefaultCreatorId  0U
#define _PCD_SIZE_PcdAcpiDefaultCreatorId 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorId  _PCD_SIZE_PcdAcpiDefaultCreatorId 
#define _PCD_VALUE_PcdAcpiDefaultCreatorId  0x4C505041U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorId  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorId
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultCreatorRevision  0U
#define _PCD_SIZE_PcdAcpiDefaultCreatorRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultCreatorRevision  _PCD_SIZE_PcdAcpiDefaultCreatorRevision 
#define _PCD_VALUE_PcdAcpiDefaultCreatorRevision  0x00000001U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultCreatorRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultCreatorRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultCreatorRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultOemId  0U
#define _PCD_VALUE_PcdAcpiDefaultOemId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemId
extern const UINT8 _gPcd_FixedAtBuild_PcdAcpiDefaultOemId[6];
#define _PCD_GET_MODE_PTR_PcdAcpiDefaultOemId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemId
#define _PCD_SIZE_PcdAcpiDefaultOemId 6
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemId  _PCD_SIZE_PcdAcpiDefaultOemId 
//#define _PCD_SET_MODE_PTR_PcdAcpiDefaultOemId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultOemTableId  0U
#define _PCD_SIZE_PcdAcpiDefaultOemTableId 8
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemTableId  _PCD_SIZE_PcdAcpiDefaultOemTableId 
#define _PCD_VALUE_PcdAcpiDefaultOemTableId  0x494645454c505041ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdAcpiDefaultOemTableId;
#define _PCD_GET_MODE_64_PcdAcpiDefaultOemTableId  _gPcd_FixedAtBuild_PcdAcpiDefaultOemTableId
//#define _PCD_SET_MODE_64_PcdAcpiDefaultOemTableId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAcpiDefaultOemRevision  0U
#define _PCD_SIZE_PcdAcpiDefaultOemRevision 4
#define _PCD_GET_MODE_SIZE_PcdAcpiDefaultOemRevision  _PCD_SIZE_PcdAcpiDefaultOemRevision 
#define _PCD_VALUE_PcdAcpiDefaultOemRevision  0x00008103U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision;
#define _PCD_GET_MODE_32_PcdAcpiDefaultOemRevision  _gPcd_FixedAtBuild_PcdAcpiDefaultOemRevision
//#define _PCD_SET_MODE_32_PcdAcpiDefaultOemRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerSecIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerSecIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerSecIntrNum  _PCD_SIZE_PcdArmArchTimerSecIntrNum 
#define _PCD_VALUE_PcdArmArchTimerSecIntrNum  19U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerSecIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerSecIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerSecIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerSecIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerIntrNum  _PCD_SIZE_PcdArmArchTimerIntrNum 
#define _PCD_VALUE_PcdArmArchTimerIntrNum  17U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerHypIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerHypIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerHypIntrNum  _PCD_SIZE_PcdArmArchTimerHypIntrNum 
#define _PCD_VALUE_PcdArmArchTimerHypIntrNum  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerHypIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerHypIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerHypIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerHypIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmArchTimerVirtIntrNum  0U
#define _PCD_SIZE_PcdArmArchTimerVirtIntrNum 4
#define _PCD_GET_MODE_SIZE_PcdArmArchTimerVirtIntrNum  _PCD_SIZE_PcdArmArchTimerVirtIntrNum 
#define _PCD_VALUE_PcdArmArchTimerVirtIntrNum  18U
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmArchTimerVirtIntrNum;
#define _PCD_GET_MODE_32_PcdArmArchTimerVirtIntrNum  _gPcd_FixedAtBuild_PcdArmArchTimerVirtIntrNum
//#define _PCD_SET_MODE_32_PcdArmArchTimerVirtIntrNum  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
