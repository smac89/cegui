find_program(NINJA_PATH ninja)

if (NINJA_PATH)
#    set (CMAKE_GENERATOR "Ninja" CACHE INTERNAL "")
#    option(CMAKE_MAKE_PROGRAM "" ${NINJA_PATH})
endif()
