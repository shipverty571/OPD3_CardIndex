#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OPD3Cards.h"
#include "AddCardTab.h"
#include "CardIndexTab.h"
#include "cardindex.h"
#include <QSettings>

class OPD3Cards : public QMainWindow
{
    Q_OBJECT

public:
    OPD3Cards(QWidget *parent = nullptr);
    ~OPD3Cards();

private:
    Ui::OPD3CardsClass ui;
    AddCardTab* addCardTab;
    CardIndexTab* cardIndexTab;
    std::vector<CardIndex> _cardIndex;
    QSettings* settings;
    void SaveSettings();
    void LoadSettings();
};
