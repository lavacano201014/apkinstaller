#ifndef APKI_MAINUI_H
#define APKI_MAINUI_H

// Core Qt files
#include <QApplication>
#include <QDialog>

// UI Elements, alphabetically
#include <QCheckBox>
#include <QLineEdit>
#include <QPushButton>

// Other UIs
#include "ui/settingsUI.h"

class MainUI : public QDialog {
Q_OBJECT
public:
	MainUI(QDialog *parent = 0);
	
	QLineEdit *apkPath;
	QCheckBox *reinstall;

	SettingsUI settingsui;
private slots:
	void programClose();
	void showSettings();
};
#endif
