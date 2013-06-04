/*
 * APK Installer
 * by Nicholas "Lavacano" O'Connor
 * Purpose: A GUI for installing APKs through ADB.
 * Secondary Purpose: Teach myself C++
 */

#define APKI_VERSION "r1"

#include <iostream>
#include <sstream>
#include <string>

#include "ui/mainUI.h"
//#include "ui/settingsUI.h"
//#include "ui/adbUI.h"

int main(int argc, char** argv) {
	QApplication qapp(argc, argv);

	MainUI mainui;
	/*std::cout << "argc: " << argc << std::endl;
	std::cout << "argv: " << argv << std::endl;*/
	mainui.resize(390, 90);

	// Prepare and set window title
	std::stringstream ss;
	ss << "APK Installer " << APKI_VERSION;
	mainui.setWindowTitle(ss.str().c_str());

	mainui.show();

	return qapp.exec();
};
