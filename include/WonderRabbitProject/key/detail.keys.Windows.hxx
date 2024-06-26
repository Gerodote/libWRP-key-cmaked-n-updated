#pragma once

#include "WonderRabbitProject/key/detail.keys.hxx"
#include "detail.include_symbols.hxx"

keys_element_t keys[] = {std::make_tuple("none", -1),
                         std::make_tuple("escape", VK_ESCAPE),
                         std::make_tuple("f1", VK_F1),
                         std::make_tuple("f2", VK_F2),
                         std::make_tuple("f3", VK_F3),
                         std::make_tuple("f4", VK_F4),
                         std::make_tuple("f5", VK_F5),
                         std::make_tuple("f6", VK_F6),
                         std::make_tuple("f7", VK_F7),
                         std::make_tuple("f8", VK_F8),
                         std::make_tuple("f9", VK_F9),
                         std::make_tuple("f10", VK_F10),
                         std::make_tuple("f11", VK_F11),
                         std::make_tuple("f12", VK_F12),
                         std::make_tuple("f13", VK_F13),
                         std::make_tuple("f14", VK_F14),
                         std::make_tuple("f15", VK_F15),
                         std::make_tuple("f16", VK_F16),
                         std::make_tuple("f17", VK_F17),
                         std::make_tuple("f18", VK_F18),
                         std::make_tuple("f19", VK_F19),
                         std::make_tuple("f20", VK_F20),
                         std::make_tuple("f21", VK_F21),
                         std::make_tuple("f22", VK_F22),
                         std::make_tuple("f23", VK_F23),
                         std::make_tuple("f24", VK_F24),
                         std::make_tuple("zenkaku/hankaku", VK_KANJI),
                         std::make_tuple("kanji", VK_KANJI),
                         std::make_tuple("tab", VK_TAB),
                         std::make_tuple("caps lock", VK_CAPITAL),
                         std::make_tuple("left shift", VK_LSHIFT),
                         std::make_tuple("right shift", VK_RSHIFT),
                         std::make_tuple("shift", VK_SHIFT),
                         std::make_tuple("left control", VK_LCONTROL),
                         std::make_tuple("right control", VK_RCONTROL),
                         std::make_tuple("control", VK_CONTROL),
                         std::make_tuple("left alternate", VK_MENU),
                         std::make_tuple("left option", VK_MENU),
                         std::make_tuple("right alternate", VK_MENU),
                         std::make_tuple("right option", VK_MENU),
                         std::make_tuple("alternate", VK_MENU),
                         std::make_tuple("option", VK_MENU),
                         std::make_tuple("left meta", -2),
                         std::make_tuple("right_meta", -3),
                         std::make_tuple("muhenkan", VK_NONCONVERT),
                         std::make_tuple("international5", VK_NONCONVERT),
                         std::make_tuple("henkan", VK_CONVERT),
                         std::make_tuple("international4", VK_CONVERT),
                         std::make_tuple("katakana hiragana", VK_OEM_COPY),
                         std::make_tuple("international2", VK_OEM_COPY),
                         std::make_tuple("super", VK_LWIN),
                         std::make_tuple("windows", VK_LWIN),
                         std::make_tuple("command", VK_LWIN),
                         std::make_tuple("left windows", VK_LWIN),
                         std::make_tuple("left gui", VK_LWIN),
                         std::make_tuple("right windows", VK_RWIN),
                         std::make_tuple("right gui", VK_RWIN),
                         std::make_tuple("application", VK_APPS),
                         std::make_tuple("menu", -19),
                         std::make_tuple("backspace", VK_BACK),
                         std::make_tuple("enter", VK_RETURN),
                         std::make_tuple("\n", VK_RETURN),
                         std::make_tuple("space", VK_SPACE),
                         std::make_tuple(" ", VK_SPACE),
                         std::make_tuple("1", '1'),
                         std::make_tuple("2", '2'),
                         std::make_tuple("3", '3'),
                         std::make_tuple("4", '4'),
                         std::make_tuple("5", '5'),
                         std::make_tuple("6", '6'),
                         std::make_tuple("7", '7'),
                         std::make_tuple("8", '8'),
                         std::make_tuple("9", '9'),
                         std::make_tuple("0", '0'),
                         std::make_tuple("a", 'A'),
                         std::make_tuple("b", 'B'),
                         std::make_tuple("c", 'C'),
                         std::make_tuple("d", 'D'),
                         std::make_tuple("e", 'E'),
                         std::make_tuple("f", 'F'),
                         std::make_tuple("g", 'G'),
                         std::make_tuple("h", 'H'),
                         std::make_tuple("i", 'I'),
                         std::make_tuple("j", 'J'),
                         std::make_tuple("k", 'K'),
                         std::make_tuple("l", 'L'),
                         std::make_tuple("m", 'M'),
                         std::make_tuple("n", 'N'),
                         std::make_tuple("o", 'O'),
                         std::make_tuple("p", 'P'),
                         std::make_tuple("q", 'Q'),
                         std::make_tuple("r", 'R'),
                         std::make_tuple("s", 'S'),
                         std::make_tuple("t", 'T'),
                         std::make_tuple("u", 'U'),
                         std::make_tuple("v", 'V'),
                         std::make_tuple("w", 'W'),
                         std::make_tuple("x", 'X'),
                         std::make_tuple("y", 'Y'),
                         std::make_tuple("z", 'Z'),
                         std::make_tuple("minus", '-'),
                         std::make_tuple("-", '-'),
                         std::make_tuple("hat", '^'),
                         std::make_tuple("^", '^'),
                         std::make_tuple("yen", '\\'),
                         std::make_tuple("\\", '\\'),
                         std::make_tuple("atmark", '@'),
                         std::make_tuple("@", '@'),
                         std::make_tuple("left square bracket", '['),
                         std::make_tuple("[", '['),
                         std::make_tuple("semicolon", ';'),
                         std::make_tuple(";", ';'),
                         std::make_tuple("colon", ':'),
                         std::make_tuple(":", ':'),
                         std::make_tuple("right square bracket", ']'),
                         std::make_tuple("]", ']'),
                         std::make_tuple("comma", ','),
                         std::make_tuple(",", ','),
                         std::make_tuple("dot", '.'),
                         std::make_tuple(".", '.'),
                         std::make_tuple("slash", '/'),
                         std::make_tuple("/", '/'),
                         std::make_tuple("backslash", '\\'),
                         std::make_tuple("\\", '\\'),
                         std::make_tuple("print screen", VK_SNAPSHOT),
                         std::make_tuple("scroll lock", VK_SCROLL),
                         std::make_tuple("pause", VK_PAUSE),
                         std::make_tuple("insert", VK_INSERT),
                         std::make_tuple("delete", VK_DELETE),
                         std::make_tuple("home", VK_HOME),
                         std::make_tuple("end", VK_END),
                         std::make_tuple("page up", VK_PRIOR),
                         std::make_tuple("page down", VK_NEXT),
                         std::make_tuple("up", VK_UP),
                         std::make_tuple("left", VK_LEFT),
                         std::make_tuple("down", VK_DOWN),
                         std::make_tuple("right", VK_RIGHT),
                         std::make_tuple("num lock", VK_NUMLOCK),
                         std::make_tuple("num slash", VK_DIVIDE),
                         std::make_tuple("num asterisk", VK_MULTIPLY),
                         std::make_tuple("num minus", VK_SUBTRACT),
                         std::make_tuple("num plus", VK_ADD),
                         std::make_tuple("num enter", VK_RETURN),
                         std::make_tuple("num 7", VK_NUMPAD7),
                         std::make_tuple("num 8", VK_NUMPAD8),
                         std::make_tuple("num 9", VK_NUMPAD9),
                         std::make_tuple("num 4", VK_NUMPAD4),
                         std::make_tuple("num 5", VK_NUMPAD5),
                         std::make_tuple("num 6", VK_NUMPAD6),
                         std::make_tuple("num 1", VK_NUMPAD1),
                         std::make_tuple("num 2", VK_NUMPAD2),
                         std::make_tuple("num 3", VK_NUMPAD3),
                         std::make_tuple("num 0", VK_NUMPAD0),
                         std::make_tuple("num comma", VK_OEM_COMMA),
                         std::make_tuple("num dot", VK_DECIMAL),
                         std::make_tuple("num equal", -6),
                         std::make_tuple("num plusminus", -7),
                         std::make_tuple("num left paren", -8),
                         std::make_tuple("num right paren", -9),
                         std::make_tuple("num left brace", -20),
                         std::make_tuple("num right brace", -21),
                         std::make_tuple("num tab", -22),
                         std::make_tuple("num backspace", -23),
                         std::make_tuple("num a", -24),
                         std::make_tuple("num b", -25),
                         std::make_tuple("num c", -26),
                         std::make_tuple("num d", -27),
                         std::make_tuple("num e", -28),
                         std::make_tuple("num f", -29),
                         std::make_tuple("num xor", -30),
                         std::make_tuple("num ^", -31),
                         std::make_tuple("num %", -32),
                         std::make_tuple("num <", -33),
                         std::make_tuple("num >", -34),
                         std::make_tuple("num &", -35),
                         std::make_tuple("num &&", -36),
                         std::make_tuple("num |", -37),
                         std::make_tuple("num ||", -38),
                         std::make_tuple("num :", -39),
                         std::make_tuple("num #", -40),
                         std::make_tuple("num space", -41),
                         std::make_tuple("num @", -42),
                         std::make_tuple("num !", -43),
                         std::make_tuple("num memory store", -44),
                         std::make_tuple("num memory recall", -45),
                         std::make_tuple("num memory clear", -46),
                         std::make_tuple("num memory add", -47),
                         std::make_tuple("num memory subtract", -48),
                         std::make_tuple("num memory multiply", -49),
                         std::make_tuple("num memory divide", -50),
                         std::make_tuple("num clear", -51),
                         std::make_tuple("num clear entry", -52),
                         std::make_tuple("num binary", -53),
                         std::make_tuple("num octal", -54),
                         std::make_tuple("num decimal", -55),
                         std::make_tuple("num hexadecimal", -56),
                         std::make_tuple("mute", VK_VOLUME_MUTE),
                         std::make_tuple("volume down", VK_VOLUME_DOWN),
                         std::make_tuple("volume up", VK_VOLUME_UP),
                         std::make_tuple("power", -10),
                         std::make_tuple("sleep", VK_SLEEP),
                         std::make_tuple("wake_up", -11),
                         std::make_tuple("screen_lock", -12),
                         std::make_tuple("www", VK_BROWSER_HOME),
                         std::make_tuple("mail", VK_LAUNCH_MAIL),
                         std::make_tuple("play pause", VK_MEDIA_PLAY_PAUSE),
                         std::make_tuple("next song", VK_MEDIA_NEXT_TRACK),
                         std::make_tuple("previous song", VK_MEDIA_PREV_TRACK),
                         std::make_tuple("wlan", -13),
                         std::make_tuple("bluetooth", -14),
                         std::make_tuple("brightness down", -15),
                         std::make_tuple("brightness up", -16),
                         std::make_tuple("display off", -17),
                         std::make_tuple("function", -18),
                         std::make_tuple("eisuu", -57),
                         std::make_tuple("lang2", -58),
                         std::make_tuple("kana kana", -59),
                         std::make_tuple("lang1", -60),
                         std::make_tuple("lang3", -61),
                         std::make_tuple("lang4", -62),
                         std::make_tuple("lang5", -63),
                         std::make_tuple("lang6", -64),
                         std::make_tuple("lang7", -65),
                         std::make_tuple("lang8", -66),
                         std::make_tuple("lang9", -67),
                         std::make_tuple("international1", -68),
                         std::make_tuple("international3", -69),
                         std::make_tuple("international6", -70),
                         std::make_tuple("international7", -71),
                         std::make_tuple("international8", -72),
                         std::make_tuple("international9", -73),
                         std::make_tuple("alternate erase", -74),
                         std::make_tuple("cancel", -75),
                         std::make_tuple("clear", -76),
                         std::make_tuple("prior", -77),
                         std::make_tuple("return", -78),
                         std::make_tuple("separator", -79),
                         std::make_tuple("out", -80),
                         std::make_tuple("oper", -81),
                         std::make_tuple("clear/again", -82),
                         std::make_tuple("exsel", -83),
                         std::make_tuple("num 00", -84),
                         std::make_tuple("num 000", -85),
                         std::make_tuple("thousands separator", -86),
                         std::make_tuple("decimal separator", -87),
                         std::make_tuple("currency unit", -88),
                         std::make_tuple("currency sub-unit", -89)};
