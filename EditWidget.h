#pragma once
#include <QtCore>
#include <QtWidgets>
#include "ui_EditWidget.h"

namespace ui {
	class EditWidget : public QWidget
	{
		Q_OBJECT
	public:
		enum class BtnStatus
		{
			None,
			Accepted,
			Declined
		};
	private:
		Ui::EditWidget_Form m_Form;
		BtnStatus m_Status;
	public:
		EditWidget(QWidget* parent = nullptr, bool withoutLineEdit = false);
		~EditWidget() {}

		QString getInputText() const;
		void setLabelText(QString text);

	signals:
		void statusChanged(BtnStatus, QString);
	private slots:
		void setAcceptedStatus();
		void setDeclinedStatus();
		void sendSignal();
	};
}