// SPDX-License-Identifier: Apache-2.0
// Copyright 2022 Ricardo Quesada
// http://retro.moe/unijoysticle2

#include "ArduinoConsole.h"

#include "uni_log.h"

void Console::begin(int baud) {
    // ignore
    (void)baud;
}
void Console::print(const String& str) {
    uni_log("%s", str.c_str());
}

void Console::print(const char* str) {
    uni_log("%s", str);
}

void Console::print(int i) {
    uni_log("%d", i);
}

void Console::printhex(const String& str) {
    uni_log("%X", str.c_str());
}

void Console::printhex(const char* str) {
    uni_log("%X", str);
}

void Console::printhex(int i) {
    uni_log("%X", i);
}

void Console::println() {
    uni_log("\n");
}

void Console::println(const String& str) {
    uni_log("%s\n", str.c_str());
}

void Console::println(const char* str) {
    uni_log("%s\n", str);
}

void Console::println(int i) {
    uni_log("%d\n", i);
}

void Console::printf(const char* fmt, ...) {
    va_list args;

    va_start(args, fmt);
    uni_logv(fmt, args);
    va_end(args);
}

void Console::write(char c) {
    uni_log("%c", c);
}

class Console Console;