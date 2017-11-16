include(Utilities)

set(PROCESSES_SOURCES
    "fork1.cpp"
    "fork2.cpp"
    "fork3.cpp"
    "vitima2.cpp")

compile_batch("${PROCESSES_SOURCES}")
