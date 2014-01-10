#pragma once

keys_element_t keys[] =
{ std::make_tuple("none", -1)
, std::make_tuple("escape", kVK_Escape)
, std::make_tuple("f1", kVK_F1)
, std::make_tuple("f2", kVK_F2)
, std::make_tuple("f3", kVK_F3)
, std::make_tuple("f4", kVK_F4)
, std::make_tuple("f5", kVK_F5)
, std::make_tuple("f6", kVK_F6)
, std::make_tuple("f7", kVK_F7)
, std::make_tuple("f8", kVK_F8)
, std::make_tuple("f9", kVK_F9)
, std::make_tuple("f10", kVK_F10)
, std::make_tuple("f11", kVK_F11)
, std::make_tuple("f12", kVK_F12)
, std::make_tuple("f13", kVK_F13)
, std::make_tuple("f14", kVK_F14)
, std::make_tuple("f15", kVK_F15)
, std::make_tuple("f16", kVK_F16)
, std::make_tuple("f17", kVK_F17)
, std::make_tuple("f18", kVK_F18)
, std::make_tuple("f19", kVK_F19)
, std::make_tuple("f20", kVK_F20)
, std::make_tuple("f21", -2)
, std::make_tuple("f22", -3)
, std::make_tuple("f23", -4)
, std::make_tuple("f24", -5)
, std::make_tuple("zenkaku/hankaku", -6)
, std::make_tuple("kanji", -6)
, std::make_tuple("tab", kVK_Tab)
, std::make_tuple("\t", kVK_Tab)
, std::make_tuple("caps lock", kVK_CapsLock)
, std::make_tuple("left shift", kVK_Shift)
, std::make_tuple("right shift", kVK_RightShift)
, std::make_tuple("shift", kVK_Shift)
, std::make_tuple("left control", kVK_Control)
, std::make_tuple("right control", kVK_RightControl)
, std::make_tuple("control", kVK_Control)
, std::make_tuple("left alternate", kVK_Option)
, std::make_tuple("left option", kVK_Option)
, std::make_tuple("right alternate", kVK_RightOption)
, std::make_tuple("right option", kVK_RightOption)
, std::make_tuple("alternate", kVK_Option)
, std::make_tuple("option", kVK_Option)
, std::make_tuple("left meta", -7)
, std::make_tuple("right meta", -8)
, std::make_tuple("meta", -7)
, std::make_tuple("muhenkan", -9)
, std::make_tuple("henkan", -10)
, std::make_tuple("katakana hiragana", -11)
, std::make_tuple("super", kVK_Command)
, std::make_tuple("windows", kVK_Command)
, std::make_tuple("command", kVK_Command)
, std::make_tuple("left windows", kVK_Command)
, std::make_tuple("right windows", kVK_Command)
, std::make_tuple("menu", -12)
, std::make_tuple("backspace", kVK_Delete)
, std::make_tuple("enter", kVK_Return)
, std::make_tuple("\n", kVK_Return)
, std::make_tuple("space", kVK_Space)
, std::make_tuple(" ", kVK_Space)
, std::make_tuple("1", kVK_ANSI_1)
, std::make_tuple("2", kVK_ANSI_2)
, std::make_tuple("3", kVK_ANSI_3)
, std::make_tuple("4", kVK_ANSI_4)
, std::make_tuple("5", kVK_ANSI_5)
, std::make_tuple("6", kVK_ANSI_6)
, std::make_tuple("7", kVK_ANSI_7)
, std::make_tuple("8", kVK_ANSI_8)
, std::make_tuple("9", kVK_ANSI_9)
, std::make_tuple("0", kVK_ANSI_0)
, std::make_tuple("a", kVK_ANSI_A)
, std::make_tuple("b", kVK_ANSI_B)
, std::make_tuple("c", kVK_ANSI_C)
, std::make_tuple("d", kVK_ANSI_D)
, std::make_tuple("e", kVK_ANSI_E)
, std::make_tuple("f", kVK_ANSI_F)
, std::make_tuple("g", kVK_ANSI_G)
, std::make_tuple("h", kVK_ANSI_H)
, std::make_tuple("i", kVK_ANSI_I)
, std::make_tuple("j", kVK_ANSI_J)
, std::make_tuple("k", kVK_ANSI_K)
, std::make_tuple("l", kVK_ANSI_L)
, std::make_tuple("m", kVK_ANSI_M)
, std::make_tuple("n", kVK_ANSI_N)
, std::make_tuple("o", kVK_ANSI_O)
, std::make_tuple("p", kVK_ANSI_P)
, std::make_tuple("q", kVK_ANSI_Q)
, std::make_tuple("r", kVK_ANSI_R)
, std::make_tuple("s", kVK_ANSI_S)
, std::make_tuple("t", kVK_ANSI_T)
, std::make_tuple("u", kVK_ANSI_U)
, std::make_tuple("v", kVK_ANSI_V)
, std::make_tuple("w", kVK_ANSI_W)
, std::make_tuple("x", kVK_ANSI_X)
, std::make_tuple("y", kVK_ANSI_Y)
, std::make_tuple("z", kVK_ANSI_Z)
, std::make_tuple("minus", kVK_ANSI_Minus)
, std::make_tuple("-", kVK_ANSI_Minus)
, std::make_tuple("hat", kVK_ANSI_Equal)
, std::make_tuple("^", kVK_ANSI_Equal)
, std::make_tuple("yen", kVK_JIS_Yen)
, std::make_tuple("\\", kVK_JIS_Yen)
, std::make_tuple("atmark", kVK_ANSI_LeftBracket)
, std::make_tuple("@", kVK_ANSI_LeftBracket)
, std::make_tuple("left square bracket", kVK_ANSI_RightBracket)
, std::make_tuple("[", kVK_ANSI_RightBracket)
, std::make_tuple("semicolon", kVK_ANSI_Semicolon)
, std::make_tuple(";", kVK_ANSI_Semicolon)
, std::make_tuple("colon", kVK_ANSI_Quote)
, std::make_tuple(":", kVK_ANSI_Quote)
, std::make_tuple("right square bracket", kVK_ANSI_Backslash)
, std::make_tuple("]", kVK_ANSI_Backslash)
, std::make_tuple("comma", kVK_ANSI_Comma)
, std::make_tuple(",", kVK_ANSI_Comma)
, std::make_tuple("dot", kVK_ANSI_Period)
, std::make_tuple(".", kVK_ANSI_Period)
, std::make_tuple("slash", kVK_ANSI_Slash)
, std::make_tuple("/", kVK_ANSI_Slash)
, std::make_tuple("backslash", kVK_ANSI_Backslash)
, std::make_tuple("\\", kVK_ANSI_Backslash)
, std::make_tuple("print screen", -13)
, std::make_tuple("scroll lock", -14)
, std::make_tuple("pause", -15)
, std::make_tuple("insert", -16)
, std::make_tuple("delete", -17)
, std::make_tuple("home", kVK_Home)
, std::make_tuple("end", kVK_End)
, std::make_tuple("page up", kVK_PageUp)
, std::make_tuple("page down", kVK_PageDown)
, std::make_tuple("up", kVK_UpArrow)
, std::make_tuple("left", kVK_LeftArrow)
, std::make_tuple("down", kVK_DownArrow)
, std::make_tuple("right", kVK_RightArrow)
, std::make_tuple("num lock", -18)
, std::make_tuple("num slash", kVK_ANSI_KeypadDivide)
, std::make_tuple("num asterisk", kVK_ANSI_KeypadMultiply)
, std::make_tuple("num minus", kVK_ANSI_KeypadMinus)
, std::make_tuple("num plus", kVK_ANSI_KeypadPlus)
, std::make_tuple("num enter", kVK_ANSI_KeypadEnter)
, std::make_tuple("num 7", kVK_ANSI_Keypad7)
, std::make_tuple("num 8", kVK_ANSI_Keypad8)
, std::make_tuple("num 9", kVK_ANSI_Keypad9)
, std::make_tuple("num 4", kVK_ANSI_Keypad4)
, std::make_tuple("num 5", kVK_ANSI_Keypad5)
, std::make_tuple("num 6", kVK_ANSI_Keypad6)
, std::make_tuple("num 1", kVK_ANSI_Keypad1)
, std::make_tuple("num 2", kVK_ANSI_Keypad2)
, std::make_tuple("num 3", kVK_ANSI_Keypad3)
, std::make_tuple("num 0", kVK_ANSI_Keypad0)
, std::make_tuple("num comma", kVK_JIS_KeypadComma)
, std::make_tuple("num dot", kVK_ANSI_KeypadDecimal)
, std::make_tuple("num equal", kVK_ANSI_KeypadEquals)
, std::make_tuple("num plusminus", -19)
, std::make_tuple("num left paren", -20)
, std::make_tuple("num right paren", -21)
, std::make_tuple("mute", kVK_Mute)
, std::make_tuple("volume down", kVK_VolumeDown)
, std::make_tuple("volume up", kVK_VolumeUp)
, std::make_tuple("power", -22)
, std::make_tuple("sleep", -23)
, std::make_tuple("wake up", -24)
, std::make_tuple("screen lock", -25)
, std::make_tuple("www", -26)
, std::make_tuple("mail", -27)
, std::make_tuple("play pause", -28)
, std::make_tuple("next song", -29)
, std::make_tuple("previous song", -30)
, std::make_tuple("wlan", -31)
, std::make_tuple("bluetooth", -32)
, std::make_tuple("brightness down", -33)
, std::make_tuple("brightness up", -34)
, std::make_tuple("display off", -35)
, std::make_tuple("function", -36)
};
