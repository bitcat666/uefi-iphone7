/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C69D75E8_E39F_4F79_9D74_50B8C759D09B
#define _AUTOGENH_C69D75E8_E39F_4F79_9D74_50B8C759D09B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xED5824F9516FEBCEULL

// Guids
extern GUID gEfiMemoryTypeInformationGuid;
extern GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMaxMemoryTypeInfoPages  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMaxMemoryTypeInfoPages;
#define _PCD_GET_MODE_32_PcdMaxMemoryTypeInfoPages  _gPcd_FixedAtBuild_PcdMaxMemoryTypeInfoPages
//#define _PCD_SET_MODE_32_PcdMaxMemoryTypeInfoPages  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMaxMemoryTypeInfoPages 0x60000
#define _PCD_SIZE_PcdMaxMemoryTypeInfoPages 4
#define _PCD_GET_MODE_SIZE_PcdMaxMemoryTypeInfoPages _PCD_SIZE_PcdMaxMemoryTypeInfoPages

RETURN_STATUS
EFIAPI
MemoryTypeInfoSecVarCheckLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
