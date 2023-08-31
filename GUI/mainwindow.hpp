#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_comboBox_plantilla_0_currentIndexChanged(int index);

    void on_comboBox_plantilla_1_currentIndexChanged(int index);

    void on_lineEdit_longitud_PE_0_textEdited(const QString &arg1);

    void on_lineEdit_longitud_PE_1_textEdited(const QString &arg1);

    void on_lineEdit_longitud_PF_0_textEdited(const QString &arg1);

    void on_lineEdit_longitud_PF_1_textEdited(const QString &arg1);

    void on_lineEdit_valor_0_textEdited(const QString &arg1);

    void on_lineEdit_valor_1_textEdited(const QString &arg1);

    void on_checkBox_variable_0_preparada_stateChanged(int arg1);

    void on_checkBox_variable_1_preparada_stateChanged(int arg1);

    void on_checkBox_variable_2_preparada_stateChanged(int arg1);

    void on_pushButton_asignacion_clicked();

    void on_comboBox_plantilla_0_activated(int index);

    void on_comboBox_plantilla_1_activated(int index);

    void on_lineEdit_Base_0_textEdited(const QString &arg1);

    void on_lineEdit_Base_1_textEdited(const QString &arg1);

    void on_lineEdit_nombre_in_0_textEdited(const QString &arg1);

    void on_lineEdit_nombre_in_1_textEdited(const QString &arg1);

    void on_lineEdit_nombre_in_2_textEdited(const QString &arg1);

    void on_pushButton_suma_clicked();

    void on_pushButton_igual_clicked();

    void on_pushButton_compl_Bm1_op_clicked();

    void on_pushButton_orwise_clicked();

    void on_pushButton_resta_clicked();

    void on_pushButton_producto_clicked();

    void on_pushButton_cociente_clicked();

    void on_pushButton_modulo_clicked();

    void on_pushButton_andwise_clicked();

    void on_pushButton_xorwise_clicked();

    void on_pushButton_suma_con_asignacion_clicked();

    void on_pushButton_compl_base_op_clicked();

    void on_pushButton_compl_Bm1_clicked();

    void on_pushButton_compl_base_clicked();

    void on_pushButton_resta_con_asignacion_clicked();

    void on_pushButton_producto_con_asinacion_clicked();

    void on_pushButton_cociente_con_asignacion_clicked();

    void on_pushButton_modulo_con_asignacion_clicked();

    void on_pushButton_xorwise_con_asignacion_clicked();

    void on_pushButton_mayor_clicked();

    void on_pushButton_menor_clicked();

    void on_pushButton_mayor_igual_clicked();

    void on_pushButton_menor_igual_clicked();

    void on_pushButton_no_igual_clicked();

    void on_pushButton_spaceship_clicked();

    void on_pushButton_orwise_con_asignacion_clicked();

    void on_pushButton_andwise_con_asignacion_clicked();

    void on_pushButton_despl_right2left_con_asignacion_clicked();

    void on_pushButton_despl_left2right_con_asignacion_clicked();

    void on_pushButton_despl_right2left_clicked();

    void on_pushButton_despl_left2right_clicked();

    void on_pushButton_compl_Bm1_modifica_clicked();

    void on_pushButton_compl_base_modifica_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HPP
