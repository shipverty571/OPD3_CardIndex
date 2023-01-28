#pragma once

#include <QWidget>
#include "ui_CardIndexTab.h"
#include "CardIndex.h"
#include <QListWidgetItem>



class CardIndexTab : public QWidget
{
	Q_OBJECT

public:
	explicit CardIndexTab(QWidget *parent = nullptr);
	~CardIndexTab();
	void RefreshData();
	void SetCardIndex(std::vector<CardIndex> cardIndex);
	std::vector<CardIndex> GetCardIndex();
	void SerializeCardIndex();

public slots:
	/*void ListWidgetItemClick(QListWidgetItem* item);
	void DeletePushButtonClick();
	void EditPushButtonClick();
	void CancelPushButtonClick();
	void SavePushButtonClick();*/

private:
	Ui::CardIndexTabClass ui;
	std::vector<CardIndex> _cardIndex;
	void ClearFields();
};
