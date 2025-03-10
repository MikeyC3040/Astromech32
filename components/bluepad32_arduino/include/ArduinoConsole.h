// SPDX-License-Identifier: Apache-2.0
// Copyright 2022 Ricardo Quesada
// http://retro.moe/unijoysticle2

#ifndef BP32_CONSOLE_H
#define BP32_CONSOLE_H

#include <cstddef>

// Arduino includes
#include <WString.h>

class Console {
   public:
    void begin(int baud);

    void print(const String& str);
    void print(const char* str);
    void print(int i);

    void printhex(const String& str);
    void printhex(const char* str);
    void printhex(int i);

    void println();
    void println(const String& str);
    void println(const char* str);
    void println(int i);

    void printf(const char* fmt, ...);

    void write(char c);
};

extern Console Console;

#endif  // BP32_CONSOLE_H