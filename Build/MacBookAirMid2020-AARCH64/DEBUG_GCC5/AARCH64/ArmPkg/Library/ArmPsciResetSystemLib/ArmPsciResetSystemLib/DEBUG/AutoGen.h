/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_31db596f_cc80_47fd_849f_e6be5e9f7560
#define _AUTOGENH_31db596f_cc80_47fd_849f_e6be5e9f7560

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x3B5A5F912EA7D006ULL

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
ArmPsciResetSystemLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
