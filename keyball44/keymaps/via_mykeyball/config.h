/*
This is the c configuration file for the keymap

Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifdef RGBLIGHT_ENABLE
//#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
//#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#    define RGBLIGHT_EFFECT_TWINKLE
#endif

#define TAP_CODE_DELAY 5

// OLED自動消灯時間
#define OLED_TIMEOUT 200000 // ミリ秒

// layer数設定
#define DYNAMIC_KEYMAP_LAYER_COUNT 7

// マウススクロール速度 常にこの値となる 数値が大きいほど移動が少なくなる デフォルトは5
#define KEYBALL_SCROLL_DIV_DEFAULT 7

// tap/holdの切り替わるまでの時間 デフォルト200
#define TAPPING_TERM 190

// 文字キーなどにHOLD設定している場合にMODキーによる誤入力を防ぐ すでにデフォルトのため、不要
// #define IGNORE_MOD_TAP_INTERRUPT

// レイヤーが切り替わっても指定した1つのレイヤーのみをコンボキーとして利用
// #define COMBO_ONLY_FROM_LAYER 0

// コンボキー同時押し判定時間 ms
// #define COMBO_TERM 150

// コンボキーで最初のキー押下時のみタイマー開始
// #define COMBO_NO_TIMER

// コンボキーのタイマー無効化
// #define COMBO_STRICT_TIMER

// マウス動かしてるときだけレイヤー切り替え
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE // 有効化
#define AUTO_MOUSE_DEFAULT_LAYER 1 // 切り替えるマウスレイヤー番号を指定
#define AUTO_MOUSE_TIME 350 // マウスが止まってから元のレイヤーに戻るまでの時間(ms)

// マウスプレシジョンモード
#define PRECISION_ENABLE // 有効化
#define PRECISION_CPI 2  // 下げた時のCPI (1/100の値を指定。左記ならCPI 400)

// see keyball/lib/README.md
// マウスホイールの水平方向を有効にする 1:有効
#define KEYBALL_SCROLLSNAP_ENABLE 1

// see keyball/lib/README.md
// この機能はスナップモードとフリーモードから構成される。
// 初期状態はスナップモードで、このモードではスクロール方向は垂直に制限される。
// スナップモードで水平の一定方向に一定カウント(デフォルトは12)以上スクロールするとフリーモードに遷移する。
// なおこのカウントはスクロール除数適用後のカウントである。
// フリーモードでは制限が取り払われ、水平と垂直どちらにも自由にスクロールできる。
// フリーモードで一定時間(デフォルトは 100 ミリ秒)、スクロール操作を行わないとスナップモードに遷移する。

// フリーモードに遷移するためのカウント数を変更するには `KEYBALL_SCROLLSNAP_TENSION_THRESHOLD` を、
// スナップモードに遷移するためのインターバル(ミリ秒)を変更するには `KEYBALL_SCROLLSNAP_RESET_TIMER` を、それぞれ config.h で設定できる。
#define KEYBALL_SCROLLSNAP_TENSION_THRESHOLD 3
#define KEYBALL_SCROLLSNAP_RESET_TIMER 200
