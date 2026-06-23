
[LibraryClasses.common]
  #
  # Libraries to support Shell
  #
  ShellLib|MU_BASECORE/ShellPkg/Library/UefiShellLib/UefiShellLib.inf
  ShellCommandLib|MU_BASECORE/ShellPkg/Library/UefiShellCommandLib/UefiShellCommandLib.inf
  ShellCEntryLib|MU_BASECORE/ShellPkg/Library/UefiShellCEntryLib/UefiShellCEntryLib.inf
  HandleParsingLib|MU_BASECORE/ShellPkg/Library/UefiHandleParsingLib/UefiHandleParsingLib.inf
  BcfgCommandLib|MU_BASECORE/ShellPkg/Library/UefiShellBcfgCommandLib/UefiShellBcfgCommandLib.inf
  NetLib|MU_BASECORE/NetworkPkg/Library/DxeNetLib/DxeNetLib.inf
  #
  # Contains intrinsics for crypto operations
  #
  IntrinsicLib|MU_BASECORE/CryptoPkg/Library/IntrinsicLib/IntrinsicLib.inf
  #
  # contains NULL routines to support UI operations associated with DFCI.
  #
  DfciUiSupportLib|Common/MU_DFCI/DfciPkg/Library/DfciUiSupportLibNull/DfciUiSupportLibNull.inf
  #
  # contains crypto support functions for the DFCI recovery feature.
  #
  DfciRecoveryLib|Common/MU_DFCI/DfciPkg/Library/DfciRecoveryLib/DfciRecoveryLib.inf
  #
  # Contains openSSL library used by BaseCryptoLib
  #
  #OpensslLib|MU_BASECORE/CryptoPkg/Library/OpensslLib/OpensslLib.inf
  #
  # Functions that should contain base logic for querying, setting, and verifying user passwords.
  #
  PasswordStoreLib|Common/MU_OEM_SAMPLE/OemPkg/Library/PasswordStoreLib/PasswordStoreLib.inf
  BaseCryptLib|MU_BASECORE/CryptoPkg/Library/BaseCryptLibNull/BaseCryptLibNull.inf
  #
  # Supports DFCI Groups.
  #
  DfciGroupLib|Common/MU_DFCI/DfciPkg/Library/DfciGroupLibNull/DfciGroups.inf
  XmlTreeQueryLib|XmlSupportPkg/Library/XmlTreeQueryLib/XmlTreeQueryLib.inf
  XmlTreeLib|XmlSupportPkg/Library/XmlTreeLib/XmlTreeLib.inf
  #
  # Backwards compatibility with DFCI V1 functions.
  #
  DfciV1SupportLib|Common/MU_DFCI/DfciPkg/Library/DfciV1SupportLibNull/DfciV1SupportLibNull.inf
  FltUsedLib|MU_BASECORE/MdePkg/Library/FltUsedLib/FltUsedLib.inf
  #
  # Library instance that understands the MsXml Settings Schema and providers helper functions
  #
  DfciXmlSettingSchemaSupportLib|Common/MU_DFCI/DfciPkg/Library/DfciXmlSettingSchemaSupportLib/DfciXmlSettingSchemaSupportLib.inf

  #
  # Library instance that understands the MsXml Permission Schema and providers helper functions
  #
  DfciXmlPermissionSchemaSupportLib|Common/MU_DFCI/DfciPkg/Library/DfciXmlPermissionSchemaSupportLib/DfciXmlPermissionSchemaSupportLib.inf

  #
  # Library instance that understands the MsXml Device Id Schema and providers helper functions
  #
  DfciXmlDeviceIdSchemaSupportLib|Common/MU_DFCI/DfciPkg/Library/DfciXmlDeviceIdSchemaSupportLib/DfciXmlDeviceIdSchemaSupportLib.inf

  #
  # Library instance that understands the MsXml Device Id Schema and providers helper functions
  #
  DfciXmlIdentitySchemaSupportLib|Common/MU_DFCI/DfciPkg/Library/DfciXmlIdentitySchemaSupportLib/DfciXmlIdentitySchemaSupportLib.inf

  #
  # Library instance that understands Zero Touch
  #
  ZeroTouchSettingsLib|Common/MU_DFCI/ZeroTouchPkg/Library/ZeroTouchSettings/ZeroTouchSettings.inf
  SafeIntLib|MU_BASECORE/MdePkg/Library/BaseSafeIntLib/BaseSafeIntLib.inf
  BmpSupportLib|MU_BASECORE/MdeModulePkg/Library/BaseBmpSupportLib/BaseBmpSupportLib.inf
  #
  # Null library for displaying device state
  #
  DisplayDeviceStateLib|Common/MU/MsGraphicsPkg/Library/DisplayDeviceStateLibNull/DisplayDeviceStateLibNull.inf
  #
  # This library is for showing the main system boot graphics.
  #
  BootGraphicsLib|Common/MU/MsGraphicsPkg/Library/BootGraphicsLib/BootGraphicsLib.inf
  #
  # BootGraphicsProviderLib that uses PCDs and raw files in the firmware volumes
  #
  BootGraphicsProviderLib|Common/MU_OEM_SAMPLE/OemPkg/Library/BootGraphicsProviderLib/BootGraphicsProviderLib.inf
  #
  # This library contains access functions for dealing with the copying of an MS_UI_THEME
  #
  MsUiThemeCopyLib|Common/MU/MsGraphicsPkg/Library/MsUiThemeCopyLib/MsUiThemeCopyLib.inf
  #
  # Library to provide platform version information
  #
  MuUefiVersionLib|Common/MU_OEM_SAMPLE/OemPkg/Library/MuUefiVersionLib/MuUefiVersionLib.inf
  #
  # This is the Thermal Services Library that encapsulates the platform specific thermal information.
  #
  ThermalServicesLib|PcBdsPkg/Library/ThermalServicesLibNull/ThermalServicesLibNull.inf
  #
  # Null Power Services Library class to support Platforms that dont have battery
  #
  PowerServicesLib|PcBdsPkg/Library/PowerServicesLibNull/PowerServicesLibNull.inf
  #
  # Empty Platform Library of power check.
  #
  MsPlatformPowerCheckLib|PcBdsPkg/Library/MsPlatformPowerCheckLibNull/MsPlatformPowerCheckLibNull.inf
  #
  # Empty Console Message Library
  #
  ConsoleMsgLib|PcBdsPkg/Library/ConsoleMsgLibNull/ConsoleMsgLibNull.inf
  #
  # Library to help set the console to known points (low res, native res)
  #
  GraphicsConsoleHelperLib|PcBdsPkg/Library/GraphicsConsoleHelperLib/GraphicsConsoleHelper.inf
  DeviceStateLib|MU_BASECORE/MdeModulePkg/Library/DeviceStateLib/DeviceStateLib.inf
  #
  # Device specific actions in support of PlatformBootManagerLib.
  # Sort of a wrapper for MsPlatformDevicesLib, which needs to be written for each platform.
  #
  DeviceBootManagerLib|Silicon/Apple/AppleSiliconPkg/Library/DeviceBootManagerLib/DeviceBootManagerLib.inf
  #
  # LIbrary to display the On screen notifications for the platform
  #
  UiRectangleLib|Common/MU/MsGraphicsPkg/Library/BaseUiRectangleLib/BaseUiRectangleLib.inf
  #
  # display the device state notifications for the platform using color bars
  #
  DisplayDeviceStateLib|Common/MU/MsGraphicsPkg/Library/ColorBarDisplayDeviceStateLib/ColorBarDisplayDeviceStateLib.inf
  #
  # interfaces with alternate boot variable
  #
  MsAltBootLib|Common/MU_OEM_SAMPLE/OemPkg/Library/MsAltBootLib/MsAltBootLib.inf
  #
  # Library that is attached BdsDxe to implement Microsoft extensions to UefiBootManagerLib.
  #
  MsBootOptionsLib|Silicon/Apple/AppleSiliconPkg/Library/MsBootOptionsLib/MsBootOptionsLib.inf
  #
  # A shared place for all colors used in this package
  #
  MsColorTableLib|Common/MU/MsGraphicsPkg/Library/MsColorTableLib/MsColorTableLib.inf
  #
  # Library that is attached to drivers that require networking.
  #
  MsNetworkDependencyLib|PcBdsPkg/Library/MsNetworkDependencyLib/MsNetworkDependencyLib.inf
  #
  # Library to provide interface on Reboot Reason non volatile varialbles
  #
  MsNVBootReasonLib|Common/MU_OEM_SAMPLE/OemPkg/Library/MsNVBootReasonLib/MsNVBootReasonLib.inf
  #
  # An architecture agnostic math library providing reasonable approximations for various functions in software
  #
  MathLib|Common/MU/MsCorePkg/Library/MathLib/MathLib.inf
  #
  # This library is for showing the main system boot graphics.
  #
  BootGraphicsLib|Common/MU/MsGraphicsPkg/Library/BootGraphicsLib/BootGraphicsLib.inf
  #
  # Library to support Device disable Settings  (get/set)
  #
  MsBootManagerSettingsLib|Common/MU_OEM_SAMPLE/OemPkg/Library/MsBootManagerSettingsDxeLib/MsBootManagerSettingsDxeLib.inf
  #
  # Library to provide Dialog Boxes in a Simple Window Manager environment.
  #
  SwmDialogsLib|Common/MU/MsGraphicsPkg/Library/SwmDialogsLib/SwmDialogs.inf
  #
  # BootGraphicsProviderLib that uses PCDs and raw files in the firmware volumes
  #
  BootGraphicsProviderLib|Common/MU_OEM_SAMPLE/OemPkg/Library/BootGraphicsProviderLib/BootGraphicsProviderLib.inf
  #
  # Library that platform implemented to determine boot type
  #
  MsBootPolicyLib|Silicon/Apple/AppleSiliconPkg/Library/MsBootPolicyLib/MsBootPolicyLib.inf
  BmpSupportLib|MU_BASECORE/MdeModulePkg/Library/BaseBmpSupportLib/BaseBmpSupportLib.inf
  #
  # Supplies the theme for this platform to the UEFI settings UI
  #
  MsUiThemeLib|Common/MU/MsGraphicsPkg/Library/MsUiThemeLib/Dxe/MsUiThemeLib.inf
  SafeIntLib|MU_BASECORE/MdePkg/Library/BaseSafeIntLib/BaseSafeIntLib.inf
  #
  # Library for determining if Manufacturing mode should be enabled on this boot. 
  # This libray is what everyone should use to determine which mode we are in.
  # It can be called from PEI or DXE.
  #
  UIToolKitLib|Common/MU/MsGraphicsPkg/Library/SimpleUIToolKit/SimpleUIToolKit.inf
  ResetUtilityLib|MU_BASECORE/MdeModulePkg/Library/ResetUtilityLib/ResetUtilityLib.inf
  #BaseBinSecurityLib|MU_BASECORE/MdePkg/Library/BaseBinSecurityLibNull/BaseBinSecurityLibNull.inf
  SecurityLockAuditLib|MU_BASECORE/MdeModulePkg/Library/SecurityLockAuditLibNull/SecurityLockAuditLibNull.inf

  MsWheaEarlyStorageLib|Common/MU/MsWheaPkg/Library/MsWheaEarlyStorageLibNull/MsWheaEarlyStorageLibNull.inf
  CheckHwErrRecHeaderLib|Common/MU/MsWheaPkg/Library/CheckHwErrRecHeaderLib/CheckHwErrRecHeaderLib.inf
  MuTelemetryHelperLib|Common/MU/MsWheaPkg/Library/MuTelemetryHelperLib/MuTelemetryHelperLib.inf
  ParserRegistryLib|Common/MU/MsWheaPkg/Library/ParserRegistryLib/ParserRegistryLib.inf
  GenericSectionParserLib|Common/MU/MsWheaPkg/Library/GenericSectionParserLib/GenericSectionParserLib.inf

[PcdsFixedAtBuild.common]
  # a PCD that controls the enumeration and connection of ConIn's. When true, ConIn is only connected once a console input is requests 
  gEfiMdeModulePkgTokenSpaceGuid.PcdConInConnectOnDemand|TRUE

# Enable SHELL to build instead of just taking the binary
  gEfiMdePkgTokenSpaceGuid.PcdUefiLibMaxPrintBufferSize|16000
  gEfiShellPkgTokenSpaceGuid.PcdShellProfileMask|0x1f    # All profiles

  gMsGraphicsPkgTokenSpaceGuid.PcdUiThemeInDxe|TRUE
  gEfiMdeModulePkgTokenSpaceGuid.PcdBootManagerInBootOrder|TRUE
  # The GUID of Frontpage.inf from MU_OEM_SAMPLE
  # 4042708A-0F2D-4823-AC60-0D77B3111889
  gEfiMdeModulePkgTokenSpaceGuid.PcdBootManagerMenuFile|{ 0x8A, 0x70, 0x42, 0x40, 0x2D, 0x0F, 0x23, 0x48, 0xAC, 0x60, 0x0D, 0x77, 0xB3, 0x11, 0x18, 0x89 }

[Components.common]

  #
  # Spoofs button press to automatically boot to FrontPage.
  #
  Common/MU_OEM_SAMPLE/OemPkg/FrontpageButtonsVolumeUp/FrontpageButtonsVolumeUp.inf

  #
  # Application that presents and manages FrontPage.
  #
  Common/MU_OEM_SAMPLE/OemPkg/FrontPage/FrontPage.inf
  # Surface Boot Manager (Menu) application
  #
  # Application that presents & manages the Boot Menu Setup on Front Page.
  #
  Common/MU_OEM_SAMPLE/OemPkg/BootMenu/BootMenu.inf

  PcBdsPkg/MsBootPolicy/MsBootPolicy.inf

  MU_BASECORE/MdeModulePkg/Universal/BootManagerPolicyDxe/BootManagerPolicyDxe.inf
  #
  # Library to support Remote/IT/Admin Settings such as DFCI
  #
  MU_BASECORE/MdeModulePkg/Universal/RegularExpressionDxe/RegularExpressionDxe.inf
  #
  # Main component of DFCI. Manages and enforces all DFCI settings.
  #
  Common/MU_DFCI/DfciPkg/SettingsManager/SettingsManagerDxe.inf {
        #Platform should add all it settings libs here
  <LibraryClasses>
        NULL|Common/MU_DFCI/ZeroTouchPkg/Library/ZeroTouchSettings/ZeroTouchSettings.inf
        NULL|Common/MU_DFCI/DfciPkg/Library/DfciPasswordProvider/DfciPasswordProvider.inf
        NULL|Common/MU_DFCI/DfciPkg/Library/DfciSettingsLib/DfciSettingsLib.inf
        NULL|Common/MU_DFCI/DfciPkg/Library/DfciVirtualizationSettings/DfciVirtualizationSettings.inf
        NULL|Common/MU_DFCI/DfciPkg/Library/DfciWpbtSettingLib/DfciWpbtSetting.inf
        NULL|Common/MU_DFCI/DfciPkg/Library/DfciAssetTagSettingLib/DfciAssetTagSetting.inf
        DfciSettingPermissionLib|Common/MU_DFCI/DfciPkg/Library/DfciSettingPermissionLib/DfciSettingPermissionLib.inf
        #NULL|PcBdsPkg/Library/MsBootManagerSettingsDxeLib/MsBootManagerSettingsDxeLib.inf
  <PcdsFeatureFlag>
     gDfciPkgTokenSpaceGuid.PcdSettingsManagerInstallProvider|TRUE
  }

  Common/MU_DFCI/DfciPkg/AuthManagerNull/AuthManagerNull.inf
  
  #
  # Processes ingoing and outgoing DFCI settings requests.
  #
  Common/MU_DFCI/DfciPkg/DfciManager/DfciManager.inf
  #
  # Manages windows and fonts to be drawn by the RenderingEngine.
  #
  Common/MU/MsGraphicsPkg/SimpleWindowManagerDxe/SimpleWindowManagerDxe.inf
  #
  # Produces EfiGraphicsOutputProtocol to draw graphics to the screen.
  #
  #Common/MU/MsGraphicsPkg/RenderingEngineDxe/RenderingEngineDxe.inf
  #
  # Finds and takes ownership of gEfiGraphicsOutputProtocolGuid so RenderingEngine can use it.
  #
  #Common/MU/MsGraphicsPkg/GopOverrideDxe/GopOverrideDxe.inf
  #
  # Driver for On Screen Keyboard.
  #
  Common/MU/MsGraphicsPkg/OnScreenKeyboardDxe/OnScreenKeyboardDxe.inf
  #
  # Installs protocol to share the UI theme. If PcdUiThemeInDxe, this will involve calling the PlatformThemeLib directly.
  # Otherwise, the theme will have been generated in PEI and it will be located on a HOB.
  #
  Common/MU/MsGraphicsPkg/MsUiTheme/Dxe/MsUiThemeProtocol.inf
  #
  # Produces FORM DISPLAY ENGINE protocol. Handles input, displays strings.
  #
  Common/MU/MsGraphicsPkg/DisplayEngineDxe/DisplayEngineDxe.inf

  Common/MU/MsWheaPkg/HwErrBert/HwErrBert.inf
  Common/MU/MsWheaPkg/MsWheaReport/Dxe/MsWheaReportDxe.inf

  # Hardware Health (Menu) application
  Common/MU/MsWheaPkg/HwhMenu/HwhMenu.inf

  Common/MU/MsCorePkg/AcpiRGRT/AcpiRgrt.inf
  
#######################################
#  Shell
#######################################

  MU_BASECORE/ShellPkg/Application/Shell/Shell.inf {
    <LibraryClasses>
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellLevel2CommandsLib/UefiShellLevel2CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellLevel1CommandsLib/UefiShellLevel1CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellLevel3CommandsLib/UefiShellLevel3CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellDriver1CommandsLib/UefiShellDriver1CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellInstall1CommandsLib/UefiShellInstall1CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellDebug1CommandsLib/UefiShellDebug1CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellNetwork1CommandsLib/UefiShellNetwork1CommandsLib.inf
      NULL|MU_BASECORE/ShellPkg/Library/UefiShellNetwork2CommandsLib/UefiShellNetwork2CommandsLib.inf
    <PcdsFixedAtBuild>
     gEfiShellPkgTokenSpaceGuid.PcdShellLibAutoInitialize|FALSE
  }
