/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2747cc0d_ce6f_46ef_b589_af319b24cae8
#define _AUTOGENH_2747cc0d_ce6f_46ef_b589_af319b24cae8

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x845A06A51AB70B30ULL

// Guids
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gDebuggerControlHobGuid;
extern EFI_GUID DebuggerFeaturePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiCpuArchProtocolGuid;
extern EFI_GUID gEfiTimerArchProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiMemoryAttributeProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdForceEnableDebugger  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdForceEnableDebugger;
#define _PCD_GET_MODE_BOOL_PcdForceEnableDebugger  _gPcd_FixedAtBuild_PcdForceEnableDebugger
//#define _PCD_SET_MODE_BOOL_PcdForceEnableDebugger  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdForceEnableDebugger 0
#define _PCD_SIZE_PcdForceEnableDebugger 1
#define _PCD_GET_MODE_SIZE_PcdForceEnableDebugger _PCD_SIZE_PcdForceEnableDebugger
#define _PCD_TOKEN_PcdEnableWindbgWorkarounds  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdEnableWindbgWorkarounds;
#define _PCD_GET_MODE_BOOL_PcdEnableWindbgWorkarounds  _gPcd_FixedAtBuild_PcdEnableWindbgWorkarounds
//#define _PCD_SET_MODE_BOOL_PcdEnableWindbgWorkarounds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableWindbgWorkarounds 1
#define _PCD_SIZE_PcdEnableWindbgWorkarounds 1
#define _PCD_GET_MODE_SIZE_PcdEnableWindbgWorkarounds _PCD_SIZE_PcdEnableWindbgWorkarounds


#ifdef __cplusplus
}
#endif

#endif
