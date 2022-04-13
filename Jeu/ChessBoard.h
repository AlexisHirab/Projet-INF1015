#ifndef MONCUSTOMWIDGET_H
#define MONCUSTOMWIDGET_H

#include <QObject>
#include <QWidget>

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidget(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event);

signals:

};

#endif // MONCUSTOMWIDGET_H