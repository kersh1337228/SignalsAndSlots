#ifndef WIDGET_HPP
#define WIDGET_HPP

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;
private:
    Ui::Widget *ui;
};

#endif
