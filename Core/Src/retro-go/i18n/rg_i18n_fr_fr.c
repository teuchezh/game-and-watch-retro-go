
//#include "rg_i18n_lang.h"
// Stand French

int fr_fr_fmt_Title_Date_Format(char *outstr, const char *datefmt, uint16_t day, uint16_t month, const char *weekday, uint16_t hour, uint16_t minutes, uint16_t seconds)
{
    return sprintf(outstr, datefmt, day, month, weekday, hour, minutes, seconds);
};

int fr_fr_fmt_Date(char *outstr, const char *datefmt, uint16_t day, uint16_t month, uint16_t year, const char *weekday)
{
    return sprintf(outstr, datefmt, day, month, year, weekday);
};

int fr_fr_fmt_Time(char *outstr, const char *timefmt, uint16_t hour, uint16_t minutes, uint16_t seconds)
{
    return sprintf(outstr, timefmt, hour, minutes, seconds);
};

const lang_t lang_fr_fr LANG_DATA = {
    .codepage = 1252,
    .extra_font = NULL,
    .s_LangUI = "Langue UI",
    .s_LangTitle = "Langue des Titres",
    .s_LangName = "Fran�ais",

    // Core\Src\porting\gb\main_gb.c =======================================
    .s_Palette = "Palette",
    //=====================================================================

    // Core\Src\porting\nes\main_nes.c =====================================
    //.s_Palette = "Palette" dul
    .s_Default = "Par d�faut",
    //=====================================================================

    // Core\Src\porting\gw\main_gw.c =======================================
    .s_copy_RTC_to_GW_time = "Copie RTC vers horloge G&W",
    .s_copy_GW_time_to_RTC = "Copie temps G&W vers horloge RTC",
    .s_LCD_filter = "Filtre LCD",
    .s_Display_RAM = "Montrer la RAM",
    .s_Press_ACL = "Presser ACL ou Reset",
    .s_Press_TIME = "Presser TIME [B+TIME]",
    .s_Press_ALARM = "Presser ALARM [B+GAME]",
    .s_filter_0_none = "0-aucun",
    .s_filter_1_medium = "1-moyen",
    .s_filter_2_high = "2-�lev�",
    //=====================================================================

    // Core\Src\porting\odroid_overlay.c ===================================
    .s_Full = "\x7",
    .s_Fill = "\x8",

    .s_No_Cover = "Pas d'image",

    .s_Yes = "Oui",
    .s_No = "Non",
    .s_PlsChose = "Question",
    .s_OK = "OK",
    .s_Confirm = "Confirmer",
    .s_Brightness = "Luminosit�",
    .s_Volume = "Volume",
    .s_OptionsTit = "Options",
    .s_FPS = "FPS",
    .s_BUSY = "Occup�",
    .s_Scaling = "Echelle",
    .s_SCalingOff = "Off",
    .s_SCalingFit = "Adapt�e",
    .s_SCalingFull = "Complete",
    .s_SCalingCustom = "Personalis�e",
    .s_Filtering = "Filtrage",
    .s_FilteringNone = "Aucun",
    .s_FilteringOff = "Off",
    .s_FilteringSharp = "Pr�cis",
    .s_FilteringSoft = "L�ger",
    .s_Speed = "Vitesse",
    .s_Speed_Unit = "x",
    .s_Save_Cont = "Sauver & Continuer",
    .s_Save_Quit = "Sauver & Quitter",
    .s_Reload = "Recharger",
    .s_Options = "Options",
    .s_Power_off = "Eteindre",
    .s_Quit_to_menu = "Quitter vers le menu",
    .s_Retro_Go_options = "Retro-Go",

    .s_Font = "Polices",
    .s_Colors = "Couleurs",
    .s_Theme_Title = "Theme UI",
    .s_Theme_sList = "Liste seule",
    .s_Theme_CoverV = "Galerie V",
    .s_Theme_CoverH = "Galerie H",
    .s_Theme_CoverLightV = "Mix V",
    .s_Theme_CoverLightH = "Mix H",
    //=====================================================================

    // Core\Src\retro-go\rg_emulators.c ====================================

    .s_File = "Fichier",
    .s_Type = "Type",
    .s_Size = "Taille",
    .s_ImgSize = "Taille image",
    .s_Close = "Fermer",
    .s_GameProp = "Propri�t�s",
    .s_Resume_game = "Reprendre le jeu",
    .s_New_game = "Nouvelle partie",
    .s_Del_favorite = "Retirer des favoris",
    .s_Add_favorite = "Ajouter aux favoris",
    .s_Delete_save = "Supprimer la sauvegarde",
    .s_Confiem_del_save = "Supprimer la sauvegarde ?",
    //=====================================================================

    // Core\Src\retro-go\rg_main.c =========================================
    .s_Second_Unit = "s",
    .s_Version = "Ver.",
    .s_Author = "De",
    .s_Author_ = "\t\t+",
    .s_UI_Mod = "UI Mod",
    .s_Lang = "Fran�ais",
    .s_LangAuthor = "Par d�faut",
    .s_Debug_menu = "Menu Debug",
    .s_Reset_settings = "Restaurer les param�tres",
    //.s_Close                   = "Fermer",
    .s_Retro_Go = "A propos de Retro-Go",
    .s_Confirm_Reset_settings = "Restaurer les param�tres ?",

    .s_Flash_JEDEC_ID = "Id Flash JEDEC",
    .s_Flash_Name = "Nom Flash",
    .s_Flash_SR = "SR Flash",
    .s_Flash_CR = "CR Flash",
    .s_Smallest_erase = "Plus petite suppression",
    .s_DBGMCU_IDCODE = "DBGMCU IDCODE",
    .s_Enable_DBGMCU_CK = "Activer DBGMCU CK",
    .s_Disable_DBGMCU_CK = "D�sactiver DBGMCU CK",
    //.s_Close                   = "Fermer",
    .s_Debug_Title = "Debug",
    .s_Idle_power_off = "Temps avant veille",
    .s_Splash_Option = "Animation Splash",
    .s_Splash_On = "ON",
    .s_Splash_Off = "OFF",

    .s_Time = "Heure",
    .s_Date = "Date",
    .s_Time_Title = "TEMPS",
    .s_Hour = "Heure",
    .s_Minute = "Minute",
    .s_Second = "Seconde",
    .s_Time_setup = "R�glage",

    .s_Day = "Jour",
    .s_Month = "Mois",
    .s_Year = "Ann�e",
    .s_Weekday = "Jour de la semaine",
    .s_Date_setup = "R�glage Date",

    .s_Weekday_Mon = "Lun",
    .s_Weekday_Tue = "Mar",
    .s_Weekday_Wed = "Mer",
    .s_Weekday_Thu = "Jeu",
    .s_Weekday_Fri = "Ven",
    .s_Weekday_Sat = "Sam",
    .s_Weekday_Sun = "Dim",

    .s_Title_Date_Format = "%02d-%02d %s %02d:%02d:%02d",
    .s_Date_Format = "%02d.%02d.20%02d %s",
    .s_Time_Format = "%02d:%02d:%02d",

    .fmt_Title_Date_Format = fr_fr_fmt_Title_Date_Format,
    .fmtDate = fr_fr_fmt_Date,
    .fmtTime = fr_fr_fmt_Time,
    //=====================================================================
    //           ------------ end ---------------
};