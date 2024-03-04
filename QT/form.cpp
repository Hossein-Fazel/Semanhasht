#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setWindowTitle("SEMANHASHT");
    ui->T1->setDisplayFormat("hh:mm AP");
    check_enable();
}

void Form::save_btns()
{
    button["Chaharbahg"] = ui->Chaharbagh;
    button["Kashani"] = ui->Kashani;
    button["Allameh Jafari"] = ui->Allameh_Jafari;
    button["Eram-e Sabz"] = ui->Erame_Sabz;
    button["Meydan-e Azadi"] = ui->Meydane_Azadi;
    button["Ostad Mo'in"] = ui->Ostad_Moin;
    button["Shademan"] = ui->Shademan;
    button["Tohid"] = ui->Towhid;
    button["Meydan-e Engelab-e Eslami"] = ui->Meydane_Enghelabe_Eslami;
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
    button["Boostan-e Laleh"] = ui->Bosstane_Laleh;
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
}

Form::~Form()
{
    delete ui;
}

void Form::reset_style()
{
    for (auto it = button.begin(); it != button.end() ; ++it)
    {
        it.value()->setStyleSheet(def_style);
    }
}

void Form::on_Merzaye_Shirazi_clicked()
{
    ui->Merzaye_Shirazi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Merza-ye Shirazi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Merza-ye Shirazi");
    }
    check_enable();
}


void Form::on_Shahrake_Shariati_clicked()
{
    ui->Shahrake_Shariati->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahrak-e Shari'ati");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahrak-e Shari'ati");
    }
    check_enable();
}


void Form::on_Rahahan_clicked()
{
    ui->Rahahan->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Rahahan");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Rahahan");
    }
    check_enable();
}


void Form::on_Meydane_Hazrate_Valiasr_clicked()
{
    ui->Meydane_Hazrate_Valiasr->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Hazrat-e ValiAsr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Hazrat-e ValiAsr");
    }
    check_enable();
}


void Form::on_Bosstane_Laleh_clicked()
{
    ui->Bosstane_Laleh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Boostan-e Laleh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Boostan-e Laleh");
    }
    check_enable();
}


void Form::on_Mirdamad_clicked()
{
    ui->Mirdamad->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Mirdamad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Mirdamad");
    }
    check_enable();
}


void Form::on_Tajrish_clicked()
{
    ui->Tajrish->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Tajrish");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Tajrish");
    }
    check_enable();
}


void Form::on_Shahid_Sadr_clicked()
{
    ui->Shahid_Sadr->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Sadr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Sadr");
    }
    check_enable();
}


void Form::on_Kouhsar_clicked()
{
    ui->Kouhsar->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kouhsar");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kouhsar");
    }
    check_enable();
}


void Form::on_Kashani_clicked()
{
    ui->Kashani->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kashani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kashani");
    }
    check_enable();
}


void Form::on_Yadegare_Emam_clicked()
{
    ui->Yadegare_Emam->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Yadegar-e Emam");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Yadegar-e Emam");
    }
    check_enable();
}


void Form::on_Haftome_Tir_clicked()
{
    ui->Haftome_Tir->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Haftom-e Tir");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Haftom-e Tir");
    }
    check_enable();
}


void Form::on_Emam_Hossein_clicked()
{
    ui->Emam_Hossein->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Emam Hossein");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Emam Hossein");
    }
    check_enable();
}


void Form::on_Meydane_Shohada_clicked()
{
    ui->Meydane_Shohada->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Shohada");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Shohada");
    }
    check_enable();
}


void Form::on_Shahid_Rezaei_clicked()
{
    ui->Shahid_Rezaei->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Rezaei");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Rezaei");
    }
    check_enable();
}


void Form::on_Harame_Hazrate_Abdolazim_clicked()
{
    ui->Harame_Hazrate_Abdolazim->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Haram-e Hazrat-e Abdolazim");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Haram-e Hazrat-e Abdolazim");
    }
    check_enable();
}


void Form::on_Chaharbagh_clicked()
{
    ui->Chaharbagh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Chaharbagh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Chaharbagh");
    }
    check_enable();
}


void Form::on_Allameh_Jafari_clicked()
{
    ui->Allameh_Jafari->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Allameh Jafari");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Allameh Jafari");
    }
    check_enable();
}


void Form::on_Erame_Sabz_clicked()
{
    ui->Erame_Sabz->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Eram-e Sabz");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Eram-e Sabz");
    }
    check_enable();
}


void Form::on_Meydane_Azadi_clicked()
{
    ui->Meydane_Azadi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Azadi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Azadi");
    }
    check_enable();
}


void Form::on_Ostad_Moin_clicked()
{
    ui->Ostad_Moin->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ostad Moi'n");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ostad Moi'n");
    }
    check_enable();
}


void Form::on_Shademan_clicked()
{
    ui->Shademan->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shademan");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shademan");
    }
    check_enable();
}


void Form::on_Towhid_clicked()
{
    ui->Towhid->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Towhid");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Towhid");
    }
    check_enable();
}


void Form::on_Meydane_Enghelabe_Eslami_clicked()
{
    ui->Meydane_Enghelabe_Eslami->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Enghelab-e Eslami");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Enghelab-e Eslami");
    }
    check_enable();
}


void Form::on_Teatre_shahr_clicked()
{
    ui->Teatre_shahr->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Teatr-e Shahr");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Teatr-e Shahr");
    }
    check_enable();
}


void Form::on_Ferdowsi_clicked()
{
    ui->Ferdowsi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ferdowsi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ferdowsi");
    }
}


void Form::on_Darvazeh_Dowlat_clicked()
{
    ui->Darvazeh_Dowlat->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Darvazeh Dowlat");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Darvazeh Dowlat");
    }
    check_enable();
}


void Form::on_Darvazeh_Shemiran_clicked()
{
    ui->Darvazeh_Shemiran->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Darvazeh Shemiran");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Darvazeh Shemiran");
    }
    check_enable();
}


void Form::on_Ebne_Sina_clicked()
{
    ui->Ebne_Sina->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Ebn-e Sina");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Ebn-e Sina");
    }
    check_enable();
}


void Form::on_Pirouzi_clicked()
{
    ui->Pirouzi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Pirouzi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Pirouzi");
    }
    check_enable();
}


void Form::on_Nabard_clicked()
{
    ui->Nabard->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Nabard");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Nabard");
    }
    check_enable();
}


void Form::on_Nirou_Havaei_clicked()
{
    ui->Nirou_Havaei->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Nirou Havaei");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Nirou Havaei");
    }
    check_enable();
}


void Form::on_Shahid_Kolahdouz_clicked()
{
    ui->Shahid_Kolahdouz->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Kolahdouz");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Kolahdouz");
    }
    check_enable();
}


void Form::on_Kahrizak_clicked()
{
    ui->Kahrizak->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Kahrizak");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Kahrizak");
    }
    check_enable();
}


void Form::on_Shahre_Rey_clicked()
{
    ui->Shahre_Rey->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahr-e Rey");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahr-e Rey");
    }
    check_enable();
}


void Form::on_Jonoub_Terminal_clicked()
{
    ui->Jonoub_Terminal->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Jonoub Terminal");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Jonoub Terminal");
    }
    check_enable();
}


void Form::on_Shoush_clicked()
{
    ui->Shoush->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shoush");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shoush");
    }
    check_enable();
}


void Form::on_Panzdahe_Khordad_clicked()
{
    ui->Panzdahe_Khordad->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Panzdah-e Khordad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Panzdah-e Khordad");
    }
    check_enable();
}


void Form::on_Taleghani_clicked()
{
    ui->Taleghani->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Taleghani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Taleghani");
    }
    check_enable();
}


void Form::on_Shahid_Mofatteh_clicked()
{
    ui->Shahid_Mofatteh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Mofatteh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Mofatteh");
    }
    check_enable();
}


void Form::on_Shahid_Beheshti_clicked()
{
    ui->Shahid_Beheshti->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Beheshti");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Beheshti");
    }
    check_enable();
}


void Form::on_Shahid_Haghani_clicked()
{
    ui->Shahid_Haghani->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Haghani");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Haghani");
    }
    check_enable();
}


void Form::on_Gholhak_clicked()
{
    ui->Gholhak->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gholhak");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gholhak");
    }
    check_enable();
}


void Form::on_Gheytariyeh_clicked()
{
    ui->Gheytariyeh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gheytariyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gheytariyeh");
    }
    check_enable();
}


void Form::on_Meydane_Jahad_clicked()
{
    ui->Meydane_Jahad->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Meydan-e Jahad");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Meydan-e Jahad");
    }
    check_enable();
}


void Form::on_Sohrevardi_clicked()
{
    ui->Sohrevardi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Sohrevardi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Sohrevardi");
    }
    check_enable();
}


void Form::on_Shahid_Ghodousi_clicked()
{
    ui->Shahid_Ghodousi->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Ghdousi");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Ghdousi");
    }
    check_enable();
}


void Form::on_Shahid_Zeynoddin_clicked()
{
    ui->Shahid_Zeynoddin->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Shahid Zeynoddin");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Shahid Zeynoddin");
    }
    check_enable();
}


void Form::on_Aghdasiyeh_clicked()
{
    ui->Aghdasiyeh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Aghdasiyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Aghdasiyeh");
    }
    check_enable();
}


void Form::on_Ghaem_clicked()
{
    ui->Ghaem->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Gha'em");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Gha'em");
    }
    check_enable();
}


void Form::on_Khajeh_Abdollahe_Ansari_clicked()
{
    ui->Khajeh_Abdollahe_Ansari->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Khajeh Abdollah-e Ansari");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Khajeh Abdollah-e Ansari");
    }
    check_enable();
}


void Form::on_Payaneh_Javanmard_clicked()
{
    ui->Payaneh_Javanmard->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Payaneh Javanmard");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Payaneh Javanmard");
    }
    check_enable();
}


void Form::on_Bimeh_clicked()
{
    ui->Bimeh->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Bimeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Bimeh");
    }
    check_enable();
}


void Form::on_Tehran_Pars_clicked()
{
    ui->Tehran_Pars->setStyleSheet(style);
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Tehran Pars");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Tehran Pars");
    }
    check_enable();
}

void Form::on_Mahdie_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Mahdieh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Mahdieh");
    }
    check_enable();
}


void Form::on_Moniriyeh_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Moniriyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Moniriyeh");
    }
    check_enable();
}


void Form::on_Javadie_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Javadiyeh");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Javadiyeh");
    }
    check_enable();
}


void Form::on_Zamzam_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Zamzam");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Zamzam");
    }
    check_enable();
}


void Form::on_Azadegan_clicked()
{
    if(ui->OR->text() == "Empty")
    {
        ui->OR->setText("Azadegan");
    }
    else if(ui->DS->text() == "Empty")
    {
        ui->DS->setText("Azadegan");
    }
    check_enable();
}

void Form::on_reset_btn_clicked()
{
    ui->Merzaye_Shirazi->setStyleSheet(def_style);
    ui->Shahrake_Shariati->setStyleSheet(def_style);

    ui->OR->setText("Empty");
    ui->DS->setText("Empty");
    ui->T1->setTime(QTime(0 , 0));
    check_enable();
}

void Form::check_enable()
{
    if(ui->OR->text() != "Empty" and ui->DS->text() != "Empty")
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
}


void Form::on_Time_btn_clicked()
{
    Time user_time(ui->T1->text().toStdString());
    save_directions path = t1.find_best_time(t1.get_value(ui->OR->text().toStdString()), t1.get_value(ui->DS->text().toStdString()), user_time);
}


void Form::on_Cost_btn_clicked()
{
    Time user_time(ui->T1->text().toStdString());
    t1.complete_matrix_p();
    save_directions path = t1.find_best_cost(t1.get_value(ui->OR->text().toStdString()), t1.get_value(ui->DS->text().toStdString()));
}
