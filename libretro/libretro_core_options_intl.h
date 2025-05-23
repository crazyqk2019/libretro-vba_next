#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
struct retro_core_option_definition option_defs_chs[] = {

   {
      "vbanext_bios",
      "如果可用使用BIOS（需要重启）",
      "使用RetroArch系统目录中的BIOS文件。",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "vbanext_rtc",
      "强制启用实时时钟（需要重启）",
      "对未知的ROM强制启用实时时钟。该选项有助于需要实时时钟的修改版游戏（例如修改版宝可梦）。",
      {
         { "auto", "自动" },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
#ifdef USE_FRAME_SKIP
   {
      "vbanext_frameskip",
      "跳帧",
      "",
      {
         { "0",         NULL },
         { "1/3",          NULL },
         { "1/2",          NULL },
         { "1",          NULL },
         { "2",          NULL },
         { "3",          NULL },
         { "4",          NULL },
         { NULL, NULL},
      },
      "0"
   },
#endif
   {
        "vbanext_turboenable",
        "启用连发键",
        "启用或者禁用手柄连发键。",
        {
            { "disabled", NULL },
            { "enabled",  NULL },
            { NULL, NULL },
        },
        "disabled"
    },
    {
        "vbanext_turbodelay",
        "连发速度",
        "连发帧数频率，值越高连发速度越快。",
        {
            { "1",  NULL },
            { "2",  NULL },
            { "3",  NULL },
            { "4",  NULL },
            { "5",  NULL },
            { "6",  NULL },
            { "7",  NULL },
            { "8",  NULL },
            { "9",  NULL },
            { "10", NULL },
            { "11", NULL },
            { "12", NULL },
            { "13", NULL },
            { "14", NULL },
            { "15", NULL },
            { NULL, NULL },
        },
        "2"
    },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "vbanext_bios",
      "Varsa BIOS'u kullanın (Yeniden Başlatma Gerekir)",
      "RetroArch'ın sistem dizininde bulunan BIOS'u kullanır.",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
#ifdef USE_FRAME_SKIP
   {
      "vbanext_frameskip",
      "Kare atlama",
      "",
      {
         { "0",         NULL },
         { "1/3",          NULL },
         { "1/2",          NULL },
         { "1",          NULL },
         { "2",          NULL },
         { "3",          NULL },
         { "4",          NULL },
         { NULL, NULL},
      },
      "0"
   },
#endif
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif