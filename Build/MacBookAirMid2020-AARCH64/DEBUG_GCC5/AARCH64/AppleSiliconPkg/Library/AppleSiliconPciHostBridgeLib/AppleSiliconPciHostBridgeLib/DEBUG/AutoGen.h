/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_70e5d1fe_1e7d_4c8c_b6df_2efd53ebea28
#define _AUTOGENH_70e5d1fe_1e7d_4c8c_b6df_2efd53ebea28

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x1935456994D0A910ULL

// Guids
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPciBusMin  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPciBusMin;
#define _PCD_GET_MODE_32_PcdPciBusMin  _gPcd_FixedAtBuild_PcdPciBusMin
//#define _PCD_SET_MODE_32_PcdPciBusMin  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciBusMin 0x0
#define _PCD_SIZE_PcdPciBusMin 4
#define _PCD_GET_MODE_SIZE_PcdPciBusMin _PCD_SIZE_PcdPciBusMin
#define _PCD_TOKEN_PcdPciBusMax  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPciBusMax;
#define _PCD_GET_MODE_32_PcdPciBusMax  _gPcd_FixedAtBuild_PcdPciBusMax
//#define _PCD_SET_MODE_32_PcdPciBusMax  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciBusMax 0xFF
#define _PCD_SIZE_PcdPciBusMax 4
#define _PCD_GET_MODE_SIZE_PcdPciBusMax _PCD_SIZE_PcdPciBusMax
#define _PCD_TOKEN_PcdPciIoBase  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciIoBase;
#define _PCD_GET_MODE_64_PcdPciIoBase  _gPcd_FixedAtBuild_PcdPciIoBase
//#define _PCD_SET_MODE_64_PcdPciIoBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciIoBase 0x0
#define _PCD_SIZE_PcdPciIoBase 8
#define _PCD_GET_MODE_SIZE_PcdPciIoBase _PCD_SIZE_PcdPciIoBase
#define _PCD_TOKEN_PcdPciIoSize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciIoSize;
#define _PCD_GET_MODE_64_PcdPciIoSize  _gPcd_FixedAtBuild_PcdPciIoSize
//#define _PCD_SET_MODE_64_PcdPciIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciIoSize 0x00010000
#define _PCD_SIZE_PcdPciIoSize 8
#define _PCD_GET_MODE_SIZE_PcdPciIoSize _PCD_SIZE_PcdPciIoSize
#define _PCD_TOKEN_PcdPciMmio32Base  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPciMmio32Base;
#define _PCD_GET_MODE_32_PcdPciMmio32Base  _gPcd_FixedAtBuild_PcdPciMmio32Base
//#define _PCD_SET_MODE_32_PcdPciMmio32Base  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio32Base 0xc0000000
#define _PCD_SIZE_PcdPciMmio32Base 4
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base _PCD_SIZE_PcdPciMmio32Base
#define _PCD_TOKEN_PcdPciMmio32Size  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPciMmio32Size;
#define _PCD_GET_MODE_32_PcdPciMmio32Size  _gPcd_FixedAtBuild_PcdPciMmio32Size
//#define _PCD_SET_MODE_32_PcdPciMmio32Size  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio32Size 0x40000000
#define _PCD_SIZE_PcdPciMmio32Size 4
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size _PCD_SIZE_PcdPciMmio32Size
#define _PCD_TOKEN_PcdPciMmio64Base  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciMmio64Base;
#define _PCD_GET_MODE_64_PcdPciMmio64Base  _gPcd_FixedAtBuild_PcdPciMmio64Base
//#define _PCD_SET_MODE_64_PcdPciMmio64Base  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio64Base 0x400000000
#define _PCD_SIZE_PcdPciMmio64Base 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base _PCD_SIZE_PcdPciMmio64Base
#define _PCD_TOKEN_PcdPciMmio64Size  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciMmio64Size;
#define _PCD_GET_MODE_64_PcdPciMmio64Size  _gPcd_FixedAtBuild_PcdPciMmio64Size
//#define _PCD_SET_MODE_64_PcdPciMmio64Size  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio64Size 0x20000000
#define _PCD_SIZE_PcdPciMmio64Size 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size _PCD_SIZE_PcdPciMmio64Size
#define _PCD_TOKEN_PcdPciMmio32Translation  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciMmio32Translation;
#define _PCD_GET_MODE_64_PcdPciMmio32Translation  _gPcd_FixedAtBuild_PcdPciMmio32Translation
//#define _PCD_SET_MODE_64_PcdPciMmio32Translation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciMmio32Translation 0x500000000
#define _PCD_SIZE_PcdPciMmio32Translation 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Translation _PCD_SIZE_PcdPciMmio32Translation


#ifdef __cplusplus
}
#endif

#endif
