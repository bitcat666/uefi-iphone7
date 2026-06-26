/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_16a792c5_000d_4a9d_932c_4e5f00bc6e57
#define _AUTOGENH_16a792c5_000d_4a9d_932c_4e5f00bc6e57

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0x23BD2188CF43F9B8ULL

// Protocols
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
SwmDialogsConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
SwmDialogsDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "SwmDialogsLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
