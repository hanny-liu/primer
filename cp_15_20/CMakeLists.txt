cmake_minimum_required(VERSION 3.13)
project(cp_15_20)

set(CMAKE_CXX_STANDARD 14)

add_executable(cp_15_20 main.cpp base.h pub_derv.h priv_derv.h derived_from_public.h derived_from_private.h)