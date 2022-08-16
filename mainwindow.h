#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:

    void on_plus_clicked();

    void on_subtract_clicked();

    void on_multiply_clicked();

    void on_divide_clicked();

    void on_dot_clicked();

    void on_allClear_clicked();

    void on_evalAnswer_clicked();

    void on_num0_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_remainder_clicked();


private:
    Ui::MainWindow *ui;


};


#endif // MAINWINDOW_H
