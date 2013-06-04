# APK Installer
# by Nicholas "Lavacano" O'Connor
# Purpose: Installs APKs.
(sorry if this looks bad, I'm not used to Markdown)

Prerequisites
-------------
1. Qt4
3. ADB

Usage Instructions
------------------
1. If necessary, ensure you have the proper permissions to run the file ("chmod +x apkinstaller" in Linux)
2. In application settings, point the program to your adb executable.
3. Plug your phone in with USB debugging on.
4. Point the program to your APK, tick "reinstall" if appropriate, click "Install".

Compile Instructions
--------------------
1. qmake
2. make
3. And you're done. If you like, you can "make clean" and/or move the apkinstaller binary elsewhere (like "/usr/bin")
