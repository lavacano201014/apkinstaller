#include "ui/adbUI.h"
#include <iostream>
#include <sstream>

void ADBUI::installAPK() {
	stringstream adbcmd;
	
	if (reinstall)
		adbcmd << "adb install -r ";
	else
		adbcmd << "adb install ";
	
	adbcmd << this->apkPath;

	FILE *adbout = popen(adbcmd.str(), "r")
	char buffer[255];
	
	while (fgets(buffer, 255, adbout) != NULL)
		this->output.appendPlainText(buffer);
	pclose(adbout);
}
