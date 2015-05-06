add_library(add add.c)
install(
    TARGETS add
    DESTINATION lib
)
install(
    FILES add.h
    DESTINATION include
)
