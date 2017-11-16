include(Utilities)

set(SOCKET_SOURCES
    "cliente1.cpp"
    "cliente2.cpp"
    "cliente3.cpp"
    "cliente4.cpp"
    "cliente5.cpp"
    "servidor1.cpp"
    "servidor2.cpp"
    "servidor3.cpp"
    "servidor4.cpp"
    "servidor5.cpp")

compile_batch("${SOCKET_SOURCES}")
