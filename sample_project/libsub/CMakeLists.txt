add_library(sub sub.c)
install(
    TARGETS sub
    DESTINATION lib
)
install(
    FILES sub.h
    DESTINATION include
)
