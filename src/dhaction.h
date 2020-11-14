#ifndef DHACTION_H
#define DHACTION_H

#include <QObject>

class dhAction : public QObject
{
    Q_OBJECT
public:
    explicit dhAction(QObject *parent = nullptr);

signals:

};

#endif // DHACTION_H
