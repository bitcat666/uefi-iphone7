# Continuation of [FV.FvMain]
  #INF Common/MU/MsGraphicsPkg/GopOverrideDxe/GopOverrideDxe.inf
  INF Common/MU_DFCI/DfciPkg/AuthManagerNull/AuthManagerNull.inf #change when non-volatile storage is ready
  INF Common/MU_DFCI/DfciPkg/SettingsManager/SettingsManagerDxe.inf
  INF Common/MU/MsGraphicsPkg/MsUiTheme/Dxe/MsUiThemeProtocol.inf
  #INF Common/MU/MsGraphicsPkg/RenderingEngineDxe/RenderingEngineDxe.inf
  INF Common/MU/MsGraphicsPkg/DisplayEngineDxe/DisplayEngineDxe.inf
  INF Common/MU_OEM_SAMPLE/OemPkg/BootMenu/BootMenu.inf
  INF Common/MU_OEM_SAMPLE/OemPkg/FrontPage/FrontPage.inf
  INF PcBdsPkg/MsBootPolicy/MsBootPolicy.inf
  INF MU_BASECORE/MdeModulePkg/Universal/BootManagerPolicyDxe/BootManagerPolicyDxe.inf
  INF MU_BASECORE/MdeModulePkg/Universal/RegularExpressionDxe/RegularExpressionDxe.inf
  INF Common/MU_DFCI/DfciPkg/DfciManager/DfciManager.inf
  INF Common/MU/MsGraphicsPkg/SimpleWindowManagerDxe/SimpleWindowManagerDxe.inf
  INF Common/MU/MsGraphicsPkg/OnScreenKeyboardDxe/OnScreenKeyboardDxe.inf
  
  INF Common/MU/MsWheaPkg/HwErrBert/HwErrBert.inf
  INF Common/MU/MsWheaPkg/MsWheaReport/Dxe/MsWheaReportDxe.inf

  # Hardware Health (Menu) application
  INF Common/MU/MsWheaPkg/HwhMenu/HwhMenu.inf

  INF Common/MU/MsCorePkg/AcpiRGRT/AcpiRgrt.inf

  # Change AARCH64 to the appropriate architecture for your platform.
  FILE APPLICATION=PCD(gPcBdsPkgTokenSpaceGuid.PcdShellFile) {
    SECTION PE32=$(OUTPUT_DIRECTORY)/$(TARGET)_$(TOOL_CHAIN_TAG)/AARCH64/Shell.efi
    SECTION UI= "EdkShell"
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdLogoFile) {
    SECTION RAW = Silicon/Apple/AppleSiliconPkg/Include/Resources/BootLogo.bmp
    SECTION UI = "Logo"
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFrontPageLogoFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/FrontpageLogo.bmp
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdLowBatteryFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/LBAT.bmp
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdThermalFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/THOT.bmp
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdVolumeUpIndicatorFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/VolumeUp.bmp
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFirmwareSettingsIndicatorFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/FirmwareSettings.bmp
  }
  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdBootFailIndicatorFile) {
    SECTION RAW = Common/MU_OEM_SAMPLE/OemPkg/FrontPage/Resources/NoBoot.bmp
  }