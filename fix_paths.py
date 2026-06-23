import os, re

pkg_map = {
    'MdePkg': 'MU_BASECORE/MdePkg', 'MdeModulePkg': 'MU_BASECORE/MdeModulePkg',
    'ShellPkg': 'MU_BASECORE/ShellPkg', 'CryptoPkg': 'MU_BASECORE/CryptoPkg',
    'PolicyServicePkg': 'MU_BASECORE/PolicyServicePkg', 'NetworkPkg': 'MU_BASECORE/NetworkPkg',
    'PcAtChipsetPkg': 'MU_BASECORE/PcAtChipsetPkg', 'UefiCpuPkg': 'MU_BASECORE/UefiCpuPkg',
    'SourceLevelDebugPkg': 'MU_BASECORE/SourceLevelDebugPkg',
    'SignedCapsulePkg': 'MU_BASECORE/SignedCapsulePkg', 'StandaloneMmPkg': 'MU_BASECORE/StandaloneMmPkg',
    'UnitTestFrameworkPkg': 'MU_BASECORE/UnitTestFrameworkPkg',
    'FatPkg': 'Common/TIANO/FatPkg',  # NOT MU_BASECORE!
    'ArmPkg': 'Silicon/ARM/TIANO/ArmPkg', 'ArmPlatformPkg': 'Silicon/ARM/TIANO/ArmPlatformPkg',
    'EmbeddedPkg': 'Common/TIANO/EmbeddedPkg', 'SecurityPkg': 'Common/TIANO/SecurityPkg',
    'DynamicTablesPkg': 'Silicon/ARM/TIANO/DynamicTablesPkg', 'FmpDevicePkg': 'Common/TIANO/FmpDevicePkg', 'PrmPkg': 'Common/TIANO/PrmPkg',
    'AdvLoggerPkg': 'Common/MU/AdvLoggerPkg', 'MsWheaPkg': 'Common/MU/MsWheaPkg',
    'DfciPkg': 'Common/MU_DFCI/DfciPkg',  # NOT Common/MU/DfciPkg!
    'MsCorePkg': 'Common/MU/MsCorePkg', 'MsGraphicsPkg': 'Common/MU/MsGraphicsPkg',
    'XmlSupportPkg': 'Common/MU/XmlSupportPkg', 'PcBdsPkg': 'Common/MU/PcBdsPkg',
    'MfciPkg': 'Common/MU/MfciPkg', 'MsApplicationPkg': 'Common/MU/MsApplicationPkg',
    'TpmTestingPkg': 'Common/MU/TpmTestingPkg', 'UefiTestingPkg': 'Common/MU/UefiTestingPkg',
    'HidPkg': 'Common/MU/HidPkg', 'OemPkg': 'Common/MU_OEM_SAMPLE/OemPkg',
    'ZeroTouchPkg': 'Common/MU_DFCI/ZeroTouchPkg',  # NOT Common/MU/ZeroTouchPkg!
    'DebuggerFeaturePkg': 'mu_feature_debugger/DebuggerFeaturePkg',
    'AppleSiliconPkg': 'Silicon/Apple/AppleSiliconPkg',
    'T8010FamilyPkg': 'Silicon/Apple/T8010FamilyPkg', 'T810XFamilyPkg': 'Silicon/Apple/T810XFamilyPkg',
    'T600XFamilyPkg': 'Silicon/Apple/T600XFamilyPkg', 'T602XFamilyPkg': 'Silicon/Apple/T602XFamilyPkg',
    'iPhone7Pkg': 'Platform/iPhone7Pkg',
    'MacBookAirMid2020Pkg': 'Platform/MacBookAirMid2020Pkg', 'MacBookAirFamilyPkg': 'Platform/MacBookAirFamilyPkg',
    'MacBookProFamilyPkg': 'Platform/MacBookProFamilyPkg', 'MacBookProTouchBarFamilyPkg': 'Platform/MacBookProTouchBarFamilyPkg',
    'MacMiniFamilyPkg': 'Platform/MacMiniFamilyPkg', 'MacStudioFamilyPkg': 'Platform/MacStudioFamilyPkg',
}

count = 0

# PASS 1: regex replace short package names → full paths
for root, dirs, files in os.walk('.'):
    for f in files:
        if not f.endswith(('.dsc', '.dsc.inc', '.fdf', '.fdf.inc', '.inc', '.inf', '.dec')):
            continue
        path = os.path.join(root, f)
        with open(path) as fp: c = fp.read()
        fixed = c
        for pkg, full in pkg_map.items():
            fixed = re.sub(r'(?<![a-zA-Z/])' + re.escape(pkg) + '/', full + '/', fixed)
        if fixed != c:
            with open(path, 'w') as fp: fp.write(fixed)
            count += 1

# PASS 2: fix wrong hardcoded prefixes (literal string replace, not regex)
wrong_prefix_fixes = [
    ('Common/MU/DfciPkg/', 'Common/MU_DFCI/DfciPkg/'),
    ('Common/MU/ZeroTouchPkg/', 'Common/MU_DFCI/ZeroTouchPkg/'),
    ('MU_BASECORE/FatPkg/', 'Common/TIANO/FatPkg/'),
]
for root, dirs, files in os.walk('.'):
    for f in files:
        if not f.endswith(('.dsc', '.dsc.inc', '.fdf', '.fdf.inc', '.inc', '.inf', '.dec')):
            continue
        path = os.path.join(root, f)
        with open(path) as fp: c = fp.read()
        fixed = c
        for old_pfx, new_pfx in wrong_prefix_fixes:
            fixed = fixed.replace(old_pfx, new_pfx)
        if fixed != c:
            with open(path, 'w') as fp: fp.write(fixed)
            count += 1

print(f'Fixed {count} files')
