#include <iostream>
#include "ui/mainUI.h"

void MainUI::showSettings() {
	std::cout << "showSettings()" << std::endl;
	this->settingsui.show();
};

void MainUI::programClose() {
	std::cout << "programClose()" << std::endl;
}

MainUI::MainUI(QDialog *parent) : QDialog(parent) { // TODO: Actually hook these up
	apkPath = new QLineEdit(this);
	apkPath->setGeometry(10, 10, 260, 25);
	
	QPushButton *browse = new QPushButton("Browse...", this);
	browse->setGeometry(280, 10, 100, 25);

	reinstall = new QCheckBox("Reinstall APK", this);
	reinstall->setGeometry(10, 40, 260, 25);

	QPushButton *install = new QPushButton("Install APK", this);
	install->setGeometry(280, 40, 100, 25);

	QPushButton *settingsbtn = new QPushButton("Settings", this);
	settingsbtn->setGeometry(280, 70, 100, 25);
	connect(settingsbtn, SIGNAL(clicked()), this, SLOT(showSettings()));

	settingsui.resize(380, 70);
};
