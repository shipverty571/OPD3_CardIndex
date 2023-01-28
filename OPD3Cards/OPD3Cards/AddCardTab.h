#pragma once

#include <QWidget>
#include "ui_AddCardTab.h"
#include "CardIndex.h"

class AddCardTab : public QWidget
{
	Q_OBJECT

public:
	explicit AddCardTab(QWidget *parent = nullptr);
	~AddCardTab();
    void SetImageFromFileDialog();
    void ClearTextEdits();
    void SetCardIndex(std::vector<CardIndex> cardIndex);
    std::vector<CardIndex> GetCardIndex();
    void SetLastDir(QString lastDir);
    QString GetLastDir();
    void SerializeCardIndex();
    void OpenImageDialog();
    void SaveImageToCardIndex();

private:
	Ui::AddCardTabClass ui;
    void RunScan();
    std::vector<CardIndex> _cardIndex;
    QImage _image;
    QString _lastDir;
};
