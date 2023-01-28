#ifndef CARDINDEX_H
#define CARDINDEX_H
#include <QString>
#include <QImage>

struct CardIndex
{
    QString Number;
    QString Brand;
    QString Model;
    QString Year;
    QString Comment;
    QString Color;
    QImage Image;

    friend QDataStream& operator<<(QDataStream& out, const CardIndex& cardIndex)
    {
        out << cardIndex.Number << cardIndex.Brand << cardIndex.Model << cardIndex.Year << cardIndex.Comment << cardIndex.Color << cardIndex.Image;
        return out;
    }

    friend QDataStream& operator>>(QDataStream& in, CardIndex& cardIndex)
    {
        in >> cardIndex.Number >> cardIndex.Brand >> cardIndex.Model >> cardIndex.Year >> cardIndex.Comment >> cardIndex.Color >> cardIndex.Image;
        return in;
    }
};

#endif // CARDINDEX_H
