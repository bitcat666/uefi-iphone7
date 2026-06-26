/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b50d8d53_1ad1_44ea_9e69_8c89d4a6d08b
#define _AUTOGENH_b50d8d53_1ad1_44ea_9e69_8c89d4a6d08b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xBAC051569767C3F8ULL

// Guids
extern GUID gArmMmuReplaceLiveTranslationEntryFuncGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
ArmMmuBaseLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
