include(Utilities)

set(SIGNALS_SOURCES
    "matador.cpp"
    "sinais_help.cpp"
    "sinal1.cpp"
    "sinal2.cpp"
    "sinal3.cpp"
    "sinal4.cpp"
    "sinal5.cpp"
    "sinal6.cpp"
    "vitima.cpp")

compile_batch("${SIGNALS_SOURCES}")
