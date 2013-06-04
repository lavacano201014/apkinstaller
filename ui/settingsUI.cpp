#include <iostream>
#include "ui/settingsUI.h"

SettingsUI::SettingsUI(QDialog *parent) : QDialog(parent) {
	adbPath = new QLineEdit(this);
	adbPath->setGeometry(10, 10, 270, 25);

	QPushButton *browse = new QPushButton("Browse...", this);
	browse->setGeometry(280, 10, 100, 25);

	QPushButton *reset = new QPushButton("Reset", this);
	reset->setGeometry(170, 40, 100, 25);
	connect(reset, SIGNAL(clicked()), this, SLOT(loadSettings()));

	QPushButton *save = new QPushButton("Save", this);
	save->setGeometry(280, 40, 100, 25);
	connect(save, SIGNAL(clicked()), this, SLOT(saveSettings()));
};

void SettingsUI::saveSettings() {
	std::cout << "saveSettings()" << std::endl;
}

void SettingsUI::loadSettings() {
	std::cout << "loadSettings()" << std::endl;
}
