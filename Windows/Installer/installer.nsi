; NeonDrive Installer Script

Name "NeonDrive"

OutFile "NeonDriveSetup.exe"

InstallDir "$PROGRAMFILES\NeonDrive"


Section

SetOutPath $INSTDIR

File /r "..\..\build\*"


CreateShortcut \
"$DESKTOP\NeonDrive.lnk" \
"$INSTDIR\NeonDrive.exe"


SectionEnd
