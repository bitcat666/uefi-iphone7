/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3ff4732c_9411_4e10_a10c_8b39df282e83
#define _AUTOGENH_3ff4732c_9411_4e10_a10c_8b39df282e83

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x3ff4732c, 0x9411, 0x4e10, {0xa1, 0x0c, 0x8b, 0x39, 0xdf, 0x28, 0x2e, 0x83}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x57AEFAEF78A49C3BULL

// Guids
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gArmTokenSpaceGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gAppleSiliconPkgTokenSpaceGuid;

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

#define _PCD_TOKEN_PcdPciBusMin  0U
#define _PCD_SIZE_PcdPciBusMin 4
#define _PCD_GET_MODE_SIZE_PcdPciBusMin  _PCD_SIZE_PcdPciBusMin 
#define _PCD_VALUE_PcdPciBusMin  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPciBusMin;
#define _PCD_GET_MODE_32_PcdPciBusMin  _gPcd_FixedAtBuild_PcdPciBusMin
//#define _PCD_SET_MODE_32_PcdPciBusMin  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciBusMax  0U
#define _PCD_SIZE_PcdPciBusMax 4
#define _PCD_GET_MODE_SIZE_PcdPciBusMax  _PCD_SIZE_PcdPciBusMax 
#define _PCD_VALUE_PcdPciBusMax  0xFFU
extern const  UINT32  _gPcd_FixedAtBuild_PcdPciBusMax;
#define _PCD_GET_MODE_32_PcdPciBusMax  _gPcd_FixedAtBuild_PcdPciBusMax
//#define _PCD_SET_MODE_32_PcdPciBusMax  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio32Base  0U
#define _PCD_SIZE_PcdPciMmio32Base 4
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  _PCD_SIZE_PcdPciMmio32Base 
#define _PCD_VALUE_PcdPciMmio32Base  0xc0000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPciMmio32Base;
#define _PCD_GET_MODE_32_PcdPciMmio32Base  _gPcd_FixedAtBuild_PcdPciMmio32Base
//#define _PCD_SET_MODE_32_PcdPciMmio32Base  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio32Size  0U
#define _PCD_SIZE_PcdPciMmio32Size 4
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  _PCD_SIZE_PcdPciMmio32Size 
#define _PCD_VALUE_PcdPciMmio32Size  0x40000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdPciMmio32Size;
#define _PCD_GET_MODE_32_PcdPciMmio32Size  _gPcd_FixedAtBuild_PcdPciMmio32Size
//#define _PCD_SET_MODE_32_PcdPciMmio32Size  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio32Translation  0U
#define _PCD_SIZE_PcdPciMmio32Translation 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Translation  _PCD_SIZE_PcdPciMmio32Translation 
#define _PCD_VALUE_PcdPciMmio32Translation  0x500000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciMmio32Translation;
#define _PCD_GET_MODE_64_PcdPciMmio32Translation  _gPcd_FixedAtBuild_PcdPciMmio32Translation
//#define _PCD_SET_MODE_64_PcdPciMmio32Translation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio64Translation  0U
#define _PCD_SIZE_PcdPciMmio64Translation 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Translation  _PCD_SIZE_PcdPciMmio64Translation 
#define _PCD_VALUE_PcdPciMmio64Translation  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciMmio64Translation;
#define _PCD_GET_MODE_64_PcdPciMmio64Translation  _gPcd_FixedAtBuild_PcdPciMmio64Translation
//#define _PCD_SET_MODE_64_PcdPciMmio64Translation  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio64Base  0U
#define _PCD_SIZE_PcdPciMmio64Base 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  _PCD_SIZE_PcdPciMmio64Base 
#define _PCD_VALUE_PcdPciMmio64Base  0x400000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciMmio64Base;
#define _PCD_GET_MODE_64_PcdPciMmio64Base  _gPcd_FixedAtBuild_PcdPciMmio64Base
//#define _PCD_SET_MODE_64_PcdPciMmio64Base  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciMmio64Size  0U
#define _PCD_SIZE_PcdPciMmio64Size 8
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  _PCD_SIZE_PcdPciMmio64Size 
#define _PCD_VALUE_PcdPciMmio64Size  0x20000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciMmio64Size;
#define _PCD_GET_MODE_64_PcdPciMmio64Size  _gPcd_FixedAtBuild_PcdPciMmio64Size
//#define _PCD_SET_MODE_64_PcdPciMmio64Size  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBaseAddress  0U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0x690000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBarSize  0U
#define _PCD_SIZE_PcdPciExpressBarSize 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBarSize  _PCD_SIZE_PcdPciExpressBarSize 
#define _PCD_VALUE_PcdPciExpressBarSize  0x1000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBarSize;
#define _PCD_GET_MODE_64_PcdPciExpressBarSize  _gPcd_FixedAtBuild_PcdPciExpressBarSize
//#define _PCD_SET_MODE_64_PcdPciExpressBarSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciExpressBarLimit  0U
#define _PCD_SIZE_PcdPciExpressBarLimit 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBarLimit  _PCD_SIZE_PcdPciExpressBarLimit 
#define _PCD_VALUE_PcdPciExpressBarLimit  0x690FFFFFFULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBarLimit;
#define _PCD_GET_MODE_64_PcdPciExpressBarLimit  _gPcd_FixedAtBuild_PcdPciExpressBarLimit
//#define _PCD_SET_MODE_64_PcdPciExpressBarLimit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAppleUartBase  0U
#define _PCD_SIZE_PcdAppleUartBase 8
#define _PCD_GET_MODE_SIZE_PcdAppleUartBase  _PCD_SIZE_PcdAppleUartBase 
#define _PCD_VALUE_PcdAppleUartBase  0x235200000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdAppleUartBase;
#define _PCD_GET_MODE_64_PcdAppleUartBase  _gPcd_FixedAtBuild_PcdAppleUartBase
//#define _PCD_SET_MODE_64_PcdAppleUartBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
