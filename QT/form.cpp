#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"

#include <QDebug>
#include <algorithm>

Form::Form(QWidget *parent) : QWidget(parent),
                              ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setWindowTitle("SEMANHASHT");
    ui->T1->setDisplayFormat("hh:mm AP");
    check_enable();
    save_btns();
}

void Form::save_btns()
{
    button["Chaharbagh"] = ui->Chaharbagh;
    button["Kashani"] = ui->Kashani;
    button["Allameh Jafari"] = ui->Allameh_Jafari;
    button["Eram-e Sabz"] = ui->Erame_Sabz;
    button["Meydan-e Azadi"] = ui->Meydane_Azadi;
    button["Ostad Mo'in"] = ui->Ostad_Moin;
    button["Shademan"] = ui->Shademan;
    button["Towhid"] = ui->Towhid;
    button["Meydan-e Enghelab-e Eslami"] = ui->Meydane_Enghelabe_Eslami;
    button["Teatr-e Shahr"] = ui->Teatre_shahr;
    button["Ferdowsi"] = ui->Ferdowsi;
    button["Darvazeh Dowlat"] = ui->Darvazeh_Dowlat;
    button["Darvazeh Shemiran"] = ui->Darvazeh_Shemiran;
    button["Meydan-e Shohada"] = ui->Meydane_Shohada;
    button["Ebn-e Sina"] = ui->Ebne_Sina;
    button["Pirouzi"] = ui->Pirouzi;
    button["Nabard"] = ui->Nabard;
    button["Nirou Havaei"] = ui->Nirou_Havaei;
    button["Shahid Kolahdouz"] = ui->Shahid_Kolahdouz;
    button["kouhsar"] = ui->Kouhsar;
    button["Yadegar-e Emam"] = ui->Yadegare_Emam;
    button["Boostan-e laleh"] = ui->Bosstane_Laleh;
    button["Meydan-e Hazrat-e ValiAsr"] = ui->Meydane_Hazrate_Valiasr;
    button["Haftom-e Tir"] = ui->Haftome_Tir;
    button["Emam Hossein"] = ui->Emam_Hossein;
    button["Shahid Rezaei"] = ui->Shahid_Rezaei;
    button["Haram-e Hazrat-e Abdolazim"] = ui->Harame_Hazrate_Abdolazim;
    button["Bimeh"] = ui->Bimeh;
    button["Tehran Pars"] = ui->Tehran_Pars;
    button["Shahrak-e Shari'ati"] = ui->Shahrake_Shariati;
    button["Rahahan"] = ui->Rahahan;
    button["Mirdamad"] = ui->Mirdamad;
    button["Tajrish"] = ui->Tajrish;
    button["Shahid Sadr"] = ui->Shahid_Sadr;
    button["Khajeh Abdollah-e Ansari"] = ui->Khajeh_Abdollahe_Ansari;
    button["Gha'em"] = ui->Ghaem;
    button["Payaneh Javanmard"] = ui->Payaneh_Javanmard;
    button["Gheytariyeh"] = ui->Gheytariyeh;
    button["Gholhak"] = ui->Gholhak;
    button["Shahid Haghani"] = ui->Shahid_Haghani;
    button["Shahid Beheshti"] = ui->Shahid_Beheshti;
    button["Shahid Mofatteh"] = ui->Shahid_Mofatteh;
    button["Taleghani"] = ui->Taleghani;
    button["Panzdah-e Khordad"] = ui->Panzdahe_Khordad;
    button["Shoush"] = ui->Shoush;
    button["Jonoub Terminal"] = ui->Jonoub_Terminal;
    button["Shahr-e Rey"] = ui->Shahre_Rey;
    button["Kahrizak"] = ui->Kahrizak;
    button["Azadegan"] = ui->Azadegan;
    button["Zamzam"] = ui->Zamzam;
    button["Javadiyeh"] = ui->Javadie;
    button["Mahdiyeh"] = ui->Mahdie;
    button["Moniriyeh"] = ui->Moniriyeh;
    button["Meydan-e Jahad"] = ui->Meydane_Jahad;
    button["Merza-ye Shirazi"] = ui->Merzaye_Shirazi;
    button["Sohrevardi"] = ui->Sohrevardi;
    button["Shahid Ghodousi"] = ui->Shahid_Ghodousi;
    button["Shahid Zeynoddin"] = ui->Shahid_Zeynoddin;
    button["Aghdasiyeh"] = ui->Aghdasiyeh;
    //    button["Meydan-e Azadi"] = ui->Meydane_Azadi;
}

Form::~Form()
{
    delete ui;
}

void Form::reset_style()
{
    for (auto it = button.begin(); it != button.end(); ++it)
    {
        it.value()->setStyleSheet(def_style);
    }
}

void Form::on_Merzaye_Shirazi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Merzaye_Shirazi->setStyleSheet(style);
        ui->OR->setText("Merza-ye Shirazi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Merzaye_Shirazi->setStyleSheet(style);
        ui->DS->setText("Merza-ye Shirazi");
    }
    check_enable();
}

void Form::on_Shahrake_Shariati_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahrake_Shariati->setStyleSheet(style);
        ui->OR->setText("Shahrak-e Shari'ati");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahrake_Shariati->setStyleSheet(style);

        ui->DS->setText("Shahrak-e Shari'ati");
    }
    check_enable();
}

void Form::on_Rahahan_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Rahahan->setStyleSheet(style);

        ui->OR->setText("Rahahan");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Rahahan->setStyleSheet(style);

        ui->DS->setText("Rahahan");
    }
    check_enable();
}

void Form::on_Meydane_Hazrate_Valiasr_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Meydane_Hazrate_Valiasr->setStyleSheet(style);

        ui->OR->setText("Meydan-e Hazrat-e ValiAsr");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Meydane_Hazrate_Valiasr->setStyleSheet(style);

        ui->DS->setText("Meydan-e Hazrat-e ValiAsr");
    }
    check_enable();
}

void Form::on_Bosstane_Laleh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Bosstane_Laleh->setStyleSheet(style);

        ui->OR->setText("Boostan-e laleh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Bosstane_Laleh->setStyleSheet(style);

        ui->DS->setText("Boostan-e laleh");
    }
    check_enable();
}

void Form::on_Mirdamad_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Mirdamad->setStyleSheet(style);

        ui->OR->setText("Mirdamad");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Mirdamad->setStyleSheet(style);

        ui->DS->setText("Mirdamad");
    }
    check_enable();
}

void Form::on_Tajrish_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Tajrish->setStyleSheet(style);

        ui->OR->setText("Tajrish");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Tajrish->setStyleSheet(style);

        ui->DS->setText("Tajrish");
    }
    check_enable();
}

void Form::on_Shahid_Sadr_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Sadr->setStyleSheet(style);

        ui->OR->setText("Shahid Sadr");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Sadr->setStyleSheet(style);

        ui->DS->setText("Shahid Sadr");
    }
    check_enable();
}

void Form::on_Kouhsar_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Kouhsar->setStyleSheet(style);

        ui->OR->setText("Kouhsar");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Kouhsar->setStyleSheet(style);

        ui->DS->setText("Kouhsar");
    }
    check_enable();
}

void Form::on_Kashani_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Kashani->setStyleSheet(style);

        ui->OR->setText("Kashani");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Kashani->setStyleSheet(style);

        ui->DS->setText("Kashani");
    }
    check_enable();
}

void Form::on_Yadegare_Emam_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Yadegare_Emam->setStyleSheet(style);

        ui->OR->setText("Yadegar-e Emam");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Yadegare_Emam->setStyleSheet(style);

        ui->DS->setText("Yadegar-e Emam");
    }
    check_enable();
}

void Form::on_Haftome_Tir_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Haftome_Tir->setStyleSheet(style);

        ui->OR->setText("Haftom-e Tir");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Haftome_Tir->setStyleSheet(style);

        ui->DS->setText("Haftom-e Tir");
    }
    check_enable();
}

void Form::on_Emam_Hossein_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Emam_Hossein->setStyleSheet(style);

        ui->OR->setText("Emam Hossein");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Emam_Hossein->setStyleSheet(style);

        ui->DS->setText("Emam Hossein");
    }
    check_enable();
}

void Form::on_Meydane_Shohada_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Meydane_Shohada->setStyleSheet(style);

        ui->OR->setText("Meydan-e Shohada");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Meydane_Shohada->setStyleSheet(style);

        ui->DS->setText("Meydan-e Shohada");
    }
    check_enable();
}

void Form::on_Shahid_Rezaei_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Rezaei->setStyleSheet(style);

        ui->OR->setText("Shahid Rezaei");
    }

    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Rezaei->setStyleSheet(style);

        ui->DS->setText("Shahid Rezaei");
    }
    check_enable();
}

void Form::on_Harame_Hazrate_Abdolazim_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Harame_Hazrate_Abdolazim->setStyleSheet(style);

        ui->OR->setText("Haram-e Hazrat-e Abdolazim");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Harame_Hazrate_Abdolazim->setStyleSheet(style);

        ui->DS->setText("Haram-e Hazrat-e Abdolazim");
    }
    check_enable();
}

void Form::on_Chaharbagh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Chaharbagh->setStyleSheet(style);

        ui->OR->setText("Chaharbagh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Chaharbagh->setStyleSheet(style);

        ui->DS->setText("Chaharbagh");
    }
    check_enable();
}

void Form::on_Allameh_Jafari_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Allameh_Jafari->setStyleSheet(style);

        ui->OR->setText("Allameh Jafari");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Allameh_Jafari->setStyleSheet(style);

        ui->DS->setText("Allameh Jafari");
    }
    check_enable();
}

void Form::on_Erame_Sabz_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Erame_Sabz->setStyleSheet(style);

        ui->OR->setText("Eram-e Sabz");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Erame_Sabz->setStyleSheet(style);

        ui->DS->setText("Eram-e Sabz");
    }
    check_enable();
}

void Form::on_Meydane_Azadi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Meydane_Azadi->setStyleSheet(style);

        ui->OR->setText("Meydan-e Azadi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Meydane_Azadi->setStyleSheet(style);

        ui->DS->setText("Meydan-e Azadi");
    }
    check_enable();
}

void Form::on_Ostad_Moin_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Ostad_Moin->setStyleSheet(style);

        ui->OR->setText("Ostad Mo'in");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Ostad_Moin->setStyleSheet(style);

        ui->DS->setText("Ostad Mo'in");
    }
    check_enable();
}

void Form::on_Shademan_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shademan->setStyleSheet(style);

        ui->OR->setText("Shademan");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shademan->setStyleSheet(style);

        ui->DS->setText("Shademan");
    }
    check_enable();
}

void Form::on_Towhid_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Towhid->setStyleSheet(style);

        ui->OR->setText("Towhid");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Towhid->setStyleSheet(style);

        ui->DS->setText("Towhid");
    }
    check_enable();
}

void Form::on_Meydane_Enghelabe_Eslami_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Meydane_Enghelabe_Eslami->setStyleSheet(style);

        ui->OR->setText("Meydan-e Enghelab-e Eslami");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Meydane_Enghelabe_Eslami->setStyleSheet(style);

        ui->DS->setText("Meydan-e Enghelab-e Eslami");
    }
    check_enable();
}

void Form::on_Teatre_shahr_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Teatre_shahr->setStyleSheet(style);

        ui->OR->setText("Teatr-e Shahr");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Teatre_shahr->setStyleSheet(style);

        ui->DS->setText("Teatr-e Shahr");
    }
    check_enable();
}

void Form::on_Ferdowsi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Ferdowsi->setStyleSheet(style);

        ui->OR->setText("Ferdowsi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Ferdowsi->setStyleSheet(style);

        ui->DS->setText("Ferdowsi");
    }
}

void Form::on_Darvazeh_Dowlat_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Darvazeh_Dowlat->setStyleSheet(style);

        ui->OR->setText("Darvazeh Dowlat");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Darvazeh_Dowlat->setStyleSheet(style);

        ui->DS->setText("Darvazeh Dowlat");
    }
    check_enable();
}

void Form::on_Darvazeh_Shemiran_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Darvazeh_Shemiran->setStyleSheet(style);

        ui->OR->setText("Darvazeh Shemiran");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Darvazeh_Shemiran->setStyleSheet(style);

        ui->DS->setText("Darvazeh Shemiran");
    }
    check_enable();
}

void Form::on_Ebne_Sina_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Ebne_Sina->setStyleSheet(style);

        ui->OR->setText("Ebn-e Sina");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Ebne_Sina->setStyleSheet(style);

        ui->DS->setText("Ebn-e Sina");
    }
    check_enable();
}

void Form::on_Pirouzi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Pirouzi->setStyleSheet(style);

        ui->OR->setText("Pirouzi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Pirouzi->setStyleSheet(style);

        ui->DS->setText("Pirouzi");
    }
    check_enable();
}

void Form::on_Nabard_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Nabard->setStyleSheet(style);

        ui->OR->setText("Nabard");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Nabard->setStyleSheet(style);

        ui->DS->setText("Nabard");
    }
    check_enable();
}

void Form::on_Nirou_Havaei_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Nirou_Havaei->setStyleSheet(style);

        ui->OR->setText("Nirou Havaei");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Nirou_Havaei->setStyleSheet(style);

        ui->DS->setText("Nirou Havaei");
    }
    check_enable();
}

void Form::on_Shahid_Kolahdouz_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Kolahdouz->setStyleSheet(style);

        ui->OR->setText("Shahid Kolahdouz");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Kolahdouz->setStyleSheet(style);

        ui->DS->setText("Shahid Kolahdouz");
    }
    check_enable();
}

void Form::on_Kahrizak_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Kahrizak->setStyleSheet(style);

        ui->OR->setText("Kahrizak");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Kahrizak->setStyleSheet(style);
        ui->DS->setText("Kahrizak");
    }
    check_enable();
}

void Form::on_Shahre_Rey_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahre_Rey->setStyleSheet(style);

        ui->OR->setText("Shahr-e Rey");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahre_Rey->setStyleSheet(style);

        ui->DS->setText("Shahr-e Rey");
    }
    check_enable();
}

void Form::on_Jonoub_Terminal_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Jonoub_Terminal->setStyleSheet(style);

        ui->OR->setText("Jonoub Terminal");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Jonoub_Terminal->setStyleSheet(style);

        ui->DS->setText("Jonoub Terminal");
    }
    check_enable();
}

void Form::on_Shoush_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shoush->setStyleSheet(style);

        ui->OR->setText("Shoush");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shoush->setStyleSheet(style);

        ui->DS->setText("Shoush");
    }
    check_enable();
}

void Form::on_Panzdahe_Khordad_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Panzdahe_Khordad->setStyleSheet(style);

        ui->OR->setText("Panzdah-e Khordad");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Panzdahe_Khordad->setStyleSheet(style);

        ui->DS->setText("Panzdah-e Khordad");
    }
    check_enable();
}

void Form::on_Taleghani_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Taleghani->setStyleSheet(style);

        ui->OR->setText("Taleghani");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Taleghani->setStyleSheet(style);

        ui->DS->setText("Taleghani");
    }
    check_enable();
}

void Form::on_Shahid_Mofatteh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Mofatteh->setStyleSheet(style);

        ui->OR->setText("Shahid Mofatteh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Mofatteh->setStyleSheet(style);

        ui->DS->setText("Shahid Mofatteh");
    }
    check_enable();
}

void Form::on_Shahid_Beheshti_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Beheshti->setStyleSheet(style);

        ui->OR->setText("Shahid Beheshti");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Beheshti->setStyleSheet(style);

        ui->DS->setText("Shahid Beheshti");
    }
    check_enable();
}

void Form::on_Shahid_Haghani_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Haghani->setStyleSheet(style);

        ui->OR->setText("Shahid Haghani");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Haghani->setStyleSheet(style);

        ui->DS->setText("Shahid Haghani");
    }
    check_enable();
}

void Form::on_Gholhak_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Gholhak->setStyleSheet(style);

        ui->OR->setText("Gholhak");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Gholhak->setStyleSheet(style);

        ui->DS->setText("Gholhak");
    }
    check_enable();
}

void Form::on_Gheytariyeh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Gheytariyeh->setStyleSheet(style);

        ui->OR->setText("Gheytariyeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Gheytariyeh->setStyleSheet(style);

        ui->DS->setText("Gheytariyeh");
    }
    check_enable();
}

void Form::on_Meydane_Jahad_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Meydane_Jahad->setStyleSheet(style);

        ui->OR->setText("Meydan-e Jahad");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Meydane_Jahad->setStyleSheet(style);

        ui->DS->setText("Meydan-e Jahad");
    }
    check_enable();
}

void Form::on_Sohrevardi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Sohrevardi->setStyleSheet(style);

        ui->OR->setText("Sohrevardi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Sohrevardi->setStyleSheet(style);

        ui->DS->setText("Sohrevardi");
    }
    check_enable();
}

void Form::on_Shahid_Ghodousi_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Ghodousi->setStyleSheet(style);

        ui->OR->setText("Shahid Ghdousi");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Ghodousi->setStyleSheet(style);

        ui->DS->setText("Shahid Ghdousi");
    }
    check_enable();
}

void Form::on_Shahid_Zeynoddin_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Shahid_Zeynoddin->setStyleSheet(style);

        ui->OR->setText("Shahid Zeynoddin");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Shahid_Zeynoddin->setStyleSheet(style);

        ui->DS->setText("Shahid Zeynoddin");
    }
    check_enable();
}

void Form::on_Aghdasiyeh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Aghdasiyeh->setStyleSheet(style);

        ui->OR->setText("Aghdasiyeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Aghdasiyeh->setStyleSheet(style);

        ui->DS->setText("Aghdasiyeh");
    }
    check_enable();
}

void Form::on_Ghaem_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Ghaem->setStyleSheet(style);

        ui->OR->setText("Gha'em");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Ghaem->setStyleSheet(style);

        ui->DS->setText("Gha'em");
    }
    check_enable();
}

void Form::on_Khajeh_Abdollahe_Ansari_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Khajeh_Abdollahe_Ansari->setStyleSheet(style);

        ui->OR->setText("Khajeh Abdollah-e Ansari");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Khajeh_Abdollahe_Ansari->setStyleSheet(style);

        ui->DS->setText("Khajeh Abdollah-e Ansari");
    }
    check_enable();
}

void Form::on_Payaneh_Javanmard_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Payaneh_Javanmard->setStyleSheet(style);

        ui->OR->setText("Payaneh Javanmard");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Payaneh_Javanmard->setStyleSheet(style);

        ui->DS->setText("Payaneh Javanmard");
    }
    check_enable();
}

void Form::on_Bimeh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Bimeh->setStyleSheet(style);

        ui->OR->setText("Bimeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Bimeh->setStyleSheet(style);

        ui->DS->setText("Bimeh");
    }
    check_enable();
}

void Form::on_Tehran_Pars_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Tehran_Pars->setStyleSheet(style);

        ui->OR->setText("Tehran Pars");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Tehran_Pars->setStyleSheet(style);

        ui->DS->setText("Tehran Pars");
    }
    check_enable();
}

void Form::on_Mahdie_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Mahdie->setStyleSheet(style);

        ui->OR->setText("Mahdiyeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Mahdie->setStyleSheet(style);

        ui->DS->setText("Mahdiyeh");
    }
    check_enable();
}

void Form::on_Moniriyeh_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Moniriyeh->setStyleSheet(style);

        ui->OR->setText("Moniriyeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Moniriyeh->setStyleSheet(style);

        ui->DS->setText("Moniriyeh");
    }
    check_enable();
}

void Form::on_Javadie_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Javadie->setStyleSheet(style);

        ui->OR->setText("Javadiyeh");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Javadie->setStyleSheet(style);

        ui->DS->setText("Javadiyeh");
    }
    check_enable();
}

void Form::on_Zamzam_clicked()
{

    if (ui->OR->text() == "Empty")
    {
        ui->Zamzam->setStyleSheet(style);
        ui->OR->setText("Zamzam");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Zamzam->setStyleSheet(style);
        ui->DS->setText("Zamzam");
    }
    check_enable();
}

void Form::on_Azadegan_clicked()
{
    if (ui->OR->text() == "Empty")
    {
        ui->Azadegan->setStyleSheet(style);
        ui->OR->setText("Azadegan");
    }
    else if (ui->DS->text() == "Empty")
    {
        ui->Azadegan->setStyleSheet(style);
        ui->DS->setText("Azadegan");
    }
    check_enable();
}

void Form::on_reset_btn_clicked()
{
    reset_style();
    ui->OR->setText("Empty");
    ui->DS->setText("Empty");
    ui->T1->setTime(QTime(0, 0));
    check_enable();
    ui->value->setText("");
}

void Form::check_enable()
{
    if (ui->OR->text() != "Empty" and ui->DS->text() != "Empty")
    {
        ui->Dis_btn->setEnabled(1);
        ui->Time_btn->setEnabled(1);
        ui->Cost_btn->setEnabled(1);
    }
    else
    {
        ui->Dis_btn->setEnabled(0);
        ui->Time_btn->setEnabled(0);
        ui->Cost_btn->setEnabled(0);
    }
}

void Form::on_Dis_btn_clicked()
{
    Time user_time(ui->T1->text().toStdString());
    save_directions path = t1.Find_Shortest_Path(t1.get_value(ui->OR->text().toStdString()), t1.get_value(ui->DS->text().toStdString()));
    qDebug() << "distance\n";
    show_dist(path, user_time);
}

void Form::on_Time_btn_clicked()
{
    Time user_time(ui->T1->text().toStdString());
    save_directions path = t1.find_best_time(t1.get_value(ui->OR->text().toStdString()), t1.get_value(ui->DS->text().toStdString()), user_time);
    qDebug() << "time\n";
    show_time(path, user_time);
}

void Form::on_Cost_btn_clicked()
{
    Time user_time(ui->T1->text().toStdString());
    t1.complete_matrix_p();
    save_directions path = t1.find_best_cost(t1.get_value(ui->OR->text().toStdString()), t1.get_value(ui->DS->text().toStdString()));
    qDebug() << "cost\n";
    show_cost(path, user_time);
}

void Form::Show_clock(Time time)
{
    ui->T1->setTime(QTime(time.get_hour() + 12 * (time.get_noon() == "pm" or time.get_noon() == "PM"), time.get_minute()));
}

void Form::show_dist(save_directions path, Time time)
{
    for (int i = 0; i < path.direct.size() - 1; i++)
    {
        button[QString::fromStdString(path.direct[i])]->setStyleSheet(style);
    }
    ui->value->setText(QString::number(path.distance) + " km");
    Time arrive_t = t1.get_dis_time(path, time);
}

void Form::show_cost(save_directions path, Time user_time)
{
    ui->value->setText(QString::number(path.distance) + " Toman");
    for (int i = 0; i < path.direct.size() - 1; i++)
    {
        auto start = std::find(t1.get_line_nodes(path.Line_vehicle[i]).begin(), t1.get_line_nodes(path.Line_vehicle[i]).end(), path.direct[i]) - t1.get_line_nodes(path.Line_vehicle[i]).begin();
        auto end = std::find(t1.get_line_nodes(path.Line_vehicle[i]).begin(), t1.get_line_nodes(path.Line_vehicle[i]).end(), path.direct[i + 1]) - t1.get_line_nodes(path.Line_vehicle[i]).begin();

        int step = start < end ? 1 : -1;
        for (size_t j = start; j != end; j += step)
        {
            button[QString::fromStdString(t1.get_line_nodes(path.Line_vehicle[i])[j])]->setStyleSheet(style);
            qDebug() << QString::fromStdString(t1.get_line_nodes(path.Line_vehicle[i])[j]) << '\n';
        }
    }

    button[QString::fromStdString(path.direct[path.direct.size() - 1])]->setStyleSheet(style);
    qDebug() << QString::fromStdString(path.direct[path.direct.size() - 1]);

    Show_clock(t1.get_cost_time(path, user_time));
}


void Form::show_time(save_directions path, Time time)
{
    for(int i = 0; i < path.direct.size(); i++)
    {
        if(i == 0 or i == 1)
        {
            if(path.vehicle[0] == "Taxi")
            {
                button[QString::fromStdString(path.direct[i])]->setStyleSheet(taxi);
            }
            else
            {
                button[QString::fromStdString(path.direct[i])]->setStyleSheet(style);
            }
        }
        else
        {
            if(path.vehicle[0] == "Taxi")
            {
                button[QString::fromStdString(path.direct[i - 1])]->setStyleSheet(taxi);
            }
            else
            {
                button[QString::fromStdString(path.direct[i - 1])]->setStyleSheet(style);
            }
        }
    }

    Show_clock(time + path.distance);
}
