// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho
#include <memory>
//
#include <fmt/core.h>  // NOLINT

#include <lista01/get_data.hpp>

using fmt::print;

struct XY {
  int x;
  int y;
};

int main() {
  print("{} {}! Curso em C/C++\n", "Olá", "Mundo");
  //
  auto ptr = std::make_shared<XY>(XY{.x = 1, .y = 2});
  return 0;
}

// Ctrl+Shift+P
// CMake: build
// CMake: configure
// CMake: debug
// [aplicacao]
