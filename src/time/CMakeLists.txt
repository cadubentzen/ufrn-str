include(Utilities)

set(TIME_SOURCES
    "clock1.cpp"
    "clock2.cpp"
    "getdifftime.cpp"
    "gmtime.cpp"
    "ordenacao.cpp"
    "sistema.cpp"
    "sleep.cpp"
    "tempo2.cpp"
    "tempo.cpp"
    "tempomicro.cpp")

compile_batch("${TIME_SOURCES}")
