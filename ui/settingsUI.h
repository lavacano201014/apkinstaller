#ifndef APKI_SETTINGSUI_H
#define APKI_SETTINGSUI_H

#include <QDialog>

#include <QLineEdit>
#include <QPushButton>

class SettingsUI : public QDialog {
Q_OBJECT
public:
	SettingsUI(QDialog *parent = 0);

	QLineEdit *adbPath;
private slots: 
	/*void showUI(); // Necessary?
	void hideUI();*/
	
	void loadSettings();
	void saveSettings();
};
#endif
