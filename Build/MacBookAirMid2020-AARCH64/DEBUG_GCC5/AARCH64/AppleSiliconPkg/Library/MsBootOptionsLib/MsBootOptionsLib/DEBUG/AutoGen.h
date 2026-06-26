/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_25360617_831f_416e_a482_b356beb0b6d1
#define _AUTOGENH_25360617_831f_416e_a482_b356beb0b6d1

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xA2E260609A7C7794ULL

// Guids
extern EFI_GUID gMsBootPolicyFileGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gPcBdsPkgTokenSpaceGuid;
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBootManagerMenuFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[];
#define _PCD_GET_MODE_PTR_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
//#define _PCD_SET_MODE_PTR_PcdBootManagerMenuFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdBootManagerMenuFile (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
#define _PCD_SIZE_PcdBootManagerMenuFile 16
#define _PCD_GET_MODE_SIZE_PcdBootManagerMenuFile _PCD_SIZE_PcdBootManagerMenuFile
#define _PCD_TOKEN_PcdShellFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdShellFile[];
#define _PCD_GET_MODE_PTR_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
//#define _PCD_SET_MODE_PTR_PcdShellFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdShellFile (VOID *)_gPcd_FixedAtBuild_PcdShellFile
#define _PCD_SIZE_PcdShellFile 16
#define _PCD_GET_MODE_SIZE_PcdShellFile _PCD_SIZE_PcdShellFile
#define _PCD_TOKEN_PcdUIApplicationFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdUIApplicationFile[];
#define _PCD_GET_MODE_PTR_PcdUIApplicationFile  (VOID *)_gPcd_FixedAtBuild_PcdUIApplicationFile
//#define _PCD_SET_MODE_PTR_PcdUIApplicationFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUIApplicationFile (VOID *)_gPcd_FixedAtBuild_PcdUIApplicationFile
#define _PCD_SIZE_PcdUIApplicationFile 16
#define _PCD_GET_MODE_SIZE_PcdUIApplicationFile _PCD_SIZE_PcdUIApplicationFile


#ifdef __cplusplus
}
#endif

#endif
