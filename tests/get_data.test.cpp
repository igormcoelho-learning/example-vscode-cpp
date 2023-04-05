// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

#include <catch2/catch_all.hpp>
//
#include <lista01/get_data.hpp>

TEST_CASE("Teste1") {
  int x = 10;
  REQUIRE(x == 12);
}

TEST_CASE("Teste2") {
  //
  REQUIRE(get_ij() == "i=10 j=20.5");
}
