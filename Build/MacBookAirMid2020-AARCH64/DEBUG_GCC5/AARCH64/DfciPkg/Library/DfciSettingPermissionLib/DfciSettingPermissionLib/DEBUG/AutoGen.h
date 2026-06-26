/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_659801E4_4729_4461_86F6_19E0942CCA5C
#define _AUTOGENH_659801E4_4729_4461_86F6_19E0942CCA5C

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xE5CAF7036526A299ULL

// Guids
extern EFI_GUID gDfciPermissionManagerVarNamespace;
extern EFI_GUID gDfciInternalVariableGuid;
extern EFI_GUID gDfciPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gDfciApplyPermissionsProtocolGuid;
extern EFI_GUID gDfciAuthenticationProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdUnsignedListFormatAllow  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdUnsignedListFormatAllow;
#define _PCD_GET_MODE_BOOL_PcdUnsignedListFormatAllow  _gPcd_FixedAtBuild_PcdUnsignedListFormatAllow
//#define _PCD_SET_MODE_BOOL_PcdUnsignedListFormatAllow  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUnsignedListFormatAllow 1
#define _PCD_SIZE_PcdUnsignedListFormatAllow 1
#define _PCD_GET_MODE_SIZE_PcdUnsignedListFormatAllow _PCD_SIZE_PcdUnsignedListFormatAllow
#define _PCD_TOKEN_PcdUnsignedPermissionsFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdUnsignedPermissionsFile[];
#define _PCD_GET_MODE_PTR_PcdUnsignedPermissionsFile  (VOID *)_gPcd_FixedAtBuild_PcdUnsignedPermissionsFile
//#define _PCD_SET_MODE_PTR_PcdUnsignedPermissionsFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdUnsignedPermissionsFile (VOID *)_gPcd_FixedAtBuild_PcdUnsignedPermissionsFile
#define _PCD_SIZE_PcdUnsignedPermissionsFile 16
#define _PCD_GET_MODE_SIZE_PcdUnsignedPermissionsFile _PCD_SIZE_PcdUnsignedPermissionsFile

EFI_STATUS
EFIAPI
DfciPermissionInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
