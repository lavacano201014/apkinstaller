#ifndef APKI_ADBUI_H
#define APKI_ADBUI_H

#include <QDialog>

#include <QPlainTextEdit>
#include <QPushButton>

class ADBUI : public QDialog {
Q_OBJECT
public:
	ADBUI(QDialog *parent = 0);

	bool reinstall;
	string targetapk;
private slots:
	void installAPK();
private:
	QPlainTextEdit *output;
};
#endif
