include(Utilities)

set(CONCURRENT_SOURCES
    "consumer_producer_unity_buffer.cpp")

compile_batch("${CONCURRENT_SOURCES}" -lpthread)
