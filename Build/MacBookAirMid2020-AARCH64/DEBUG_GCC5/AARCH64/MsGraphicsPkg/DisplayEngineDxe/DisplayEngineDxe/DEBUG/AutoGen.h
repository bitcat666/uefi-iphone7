/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_c09e4ce4_ae29_4340_b941_078871bd89d1
#define _AUTOGENH_c09e4ce4_ae29_4340_b941_078871bd89d1

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xc09e4ce4, 0xae29, 0x4340, {0xb9, 0x41, 0x07, 0x88, 0x71, 0xbd, 0x89, 0xd1}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x482c40bb, 0xf36c, 0x4c25, {0xbc, 0x04, 0x2c, 0x05, 0xe7, 0x55, 0x42, 0xef}}
#define STACK_COOKIE_VALUE 0x4BD29C70257CE6F8ULL

// Guids
extern EFI_GUID gMsEventMasterFrameNotifyGroupGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gAppleSiliconPkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gEdkiiFormDisplayEngineProtocolGuid;
extern EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid;
extern EFI_GUID gMsSWMProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gMsOSKProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gMsUiThemeProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gMsGraphicsPkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdBrowserGrayOutTextStatement  0U
#define _PCD_SIZE_PcdBrowserGrayOutTextStatement 1
#define _PCD_GET_MODE_SIZE_PcdBrowserGrayOutTextStatement  _PCD_SIZE_PcdBrowserGrayOutTextStatement 
#define _PCD_VALUE_PcdBrowserGrayOutTextStatement  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdBrowserGrayOutTextStatement;
#define _PCD_GET_MODE_BOOL_PcdBrowserGrayOutTextStatement  _gPcd_FixedAtBuild_PcdBrowserGrayOutTextStatement
//#define _PCD_SET_MODE_BOOL_PcdBrowserGrayOutTextStatement  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBrowerGrayOutReadOnlyMenu  0U
#define _PCD_SIZE_PcdBrowerGrayOutReadOnlyMenu 1
#define _PCD_GET_MODE_SIZE_PcdBrowerGrayOutReadOnlyMenu  _PCD_SIZE_PcdBrowerGrayOutReadOnlyMenu 
#define _PCD_VALUE_PcdBrowerGrayOutReadOnlyMenu  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdBrowerGrayOutReadOnlyMenu;
#define _PCD_GET_MODE_BOOL_PcdBrowerGrayOutReadOnlyMenu  _gPcd_FixedAtBuild_PcdBrowerGrayOutReadOnlyMenu
//#define _PCD_SET_MODE_BOOL_PcdBrowerGrayOutReadOnlyMenu  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState  1073741833U
#define _PCD_TOKEN_PcdCurrentPointerState  _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState
#define _PCD_GET_MODE_64_PcdCurrentPointerState  LibPcdGetEx64(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState)
#define _PCD_GET_MODE_SIZE_PcdCurrentPointerState LibPcdGetExSize(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState)
#define _PCD_SET_MODE_64_PcdCurrentPointerState(Value)  LibPcdSetEx64(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState, (Value))
#define _PCD_SET_MODE_64_S_PcdCurrentPointerState(Value)  LibPcdSetEx64S(&gMsGraphicsPkgTokenSpaceGuid, _PCD_TOKEN_PcdCurrentPointerState, (Value))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState:0 \
  )

#define __PCD_PcdCurrentPointerState_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gMsGraphicsPkgTokenSpaceGuid) ? _PCD_TOKEN_gMsGraphicsPkgTokenSpaceGuid_PcdCurrentPointerState:0 \
  )
#define _PCD_TOKEN_EX_PcdCurrentPointerState(GuidPtr)   __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr) ? __PCD_PcdCurrentPointerState_ADDR_CMP(GuidPtr) : __PCD_PcdCurrentPointerState_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeDisplayEngine (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
UnloadDisplayEngine (
  IN EFI_HANDLE        ImageHandle
  );

#include "DisplayEngineStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
