#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QMap>
#include <QPushButton>
#include "../3I8_sp.hpp"
#include "../Time.hpp"
using namespace std;
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void save_btns();
    void check_enable();
    ~Form();

private slots:

    void on_Merzaye_Shirazi_clicked();

    void on_Shahrake_Shariati_clicked();

    void on_Rahahan_clicked();

    void on_Meydane_Hazrate_Valiasr_clicked();

    void on_Bosstane_Laleh_clicked();

    void on_Mirdamad_clicked();

    void on_Tajrish_clicked();

    void on_Shahid_Sadr_clicked();

    void on_Kouhsar_clicked();

    void on_Kashani_clicked();

    void on_Yadegare_Emam_clicked();

    void on_Haftome_Tir_clicked();

    void on_Emam_Hossein_clicked();

    void on_Meydane_Shohada_clicked();

    void on_Shahid_Rezaei_clicked();

    void on_Harame_Hazrate_Abdolazim_clicked();

    void on_Chaharbagh_clicked();

    void on_Allameh_Jafari_clicked();

    void on_Erame_Sabz_clicked();

    void on_Meydane_Azadi_clicked();

    void on_Ostad_Moin_clicked();

    void on_Shademan_clicked();

    void on_Towhid_clicked();

    void on_Meydane_Enghelabe_Eslami_clicked();

    void on_Teatre_shahr_clicked();

    void on_Ferdowsi_clicked();

    void on_Darvazeh_Dowlat_clicked();

    void on_Darvazeh_Shemiran_clicked();

    void on_Ebne_Sina_clicked();

    void on_Pirouzi_clicked();

    void on_Nabard_clicked();

    void on_Nirou_Havaei_clicked();

    void on_Shahid_Kolahdouz_clicked();

    void on_Kahrizak_clicked();

    void on_Shahre_Rey_clicked();

    void on_Jonoub_Terminal_clicked();

    void on_Shoush_clicked();

    void on_Panzdahe_Khordad_clicked();

    void on_Taleghani_clicked();

    void on_Shahid_Mofatteh_clicked();

    void on_Shahid_Beheshti_clicked();

    void on_Shahid_Haghani_clicked();

    void on_Gholhak_clicked();

    void on_Gheytariyeh_clicked();

    void on_Meydane_Jahad_clicked();

    void on_Sohrevardi_clicked();

    void on_Shahid_Ghodousi_clicked();

    void on_Shahid_Zeynoddin_clicked();

    void on_Aghdasiyeh_clicked();

    void on_Ghaem_clicked();

    void on_Khajeh_Abdollahe_Ansari_clicked();

    void on_Payaneh_Javanmard_clicked();

    void on_Bimeh_clicked();

    void on_Tehran_Pars_clicked();

    void on_reset_btn_clicked();

    void on_Mahdie_clicked();

    void on_Moniriyeh_clicked();

    void on_Javadie_clicked();

    void on_Zamzam_clicked();

    void on_Azadegan_clicked();

    void on_Dis_btn_clicked();

    void on_Time_btn_clicked();

    void on_Cost_btn_clicked();

private:
    Ui::Form *ui;
    QMap <QString, QPushButton *> button;
    Tehran t1;
};

#endif // FORM_H
