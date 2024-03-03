#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QMap>
#include <QPushButton>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void save_btns();
    ~Form();

private slots:

    void on_Merzaye_Shirazi_clicked();

private:
    Ui::Form *ui;
    QMap <QString, QPushButton *> button;
};

#endif // FORM_H
