/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CC3386FC_7047_4B53_A60C_E7F1C4D7B397
#define _AUTOGENH_CC3386FC_7047_4B53_A60C_E7F1C4D7B397

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xC9C0ED0E4964B9C9ULL

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSmbiosProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSystemFmpCapsuleImageTypeIdGuid  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdSystemFmpCapsuleImageTypeIdGuid[];
#define _PCD_GET_MODE_PTR_PcdSystemFmpCapsuleImageTypeIdGuid  (VOID *)_gPcd_FixedAtBuild_PcdSystemFmpCapsuleImageTypeIdGuid
//#define _PCD_SET_MODE_PTR_PcdSystemFmpCapsuleImageTypeIdGuid  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemFmpCapsuleImageTypeIdGuid (VOID *)_gPcd_FixedAtBuild_PcdSystemFmpCapsuleImageTypeIdGuid
#define _PCD_SIZE_PcdSystemFmpCapsuleImageTypeIdGuid 1
#define _PCD_GET_MODE_SIZE_PcdSystemFmpCapsuleImageTypeIdGuid _PCD_SIZE_PcdSystemFmpCapsuleImageTypeIdGuid

EFI_STATUS
EFIAPI
DfciIdSupportConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
