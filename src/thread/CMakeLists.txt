include(Utilities)

set(THREAD_SOURCES
    "threads.cpp"
    "thread2.cpp"
    "thread2_2.cpp"
    "thread3.cpp"
    "thread4.cpp"
    "thread5.cpp"
    "thread6.cpp"
    "thread7.cpp"
    "thread8.cpp"
    "thread9.cpp")

compile_batch("${THREAD_SOURCES}" -lpthread)
