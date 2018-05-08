cmake_minimum_required(VERSION 3.10)
project(jemalloc)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

#
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/jemalloc.o src/jemalloc.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/arena.o src/arena.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/background_thread.o src/background_thread.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/base.o src/base.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/bitmap.o src/bitmap.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/ckh.o src/ckh.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/ctl.o src/ctl.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/extent.o src/extent.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/extent_dss.o src/extent_dss.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/extent_mmap.o src/extent_mmap.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/hash.o src/hash.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/hooks.o src/hooks.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/large.o src/large.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/malloc_io.o src/malloc_io.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/mutex.o src/mutex.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/mutex_pool.o src/mutex_pool.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/nstime.o src/nstime.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/pages.o src/pages.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/prng.o src/prng.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/prof.o src/prof.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/rtree.o src/rtree.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/stats.o src/stats.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/spin.o src/spin.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/sz.o src/sz.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/tcache.o src/tcache.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/ticker.o src/ticker.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/tsd.o src/tsd.c
#gcc -std=gnu11 -Wall -Wsign-compare -Wundef -pipe -g3 -fvisibility=hidden -O3 -funroll-loops -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/witness.o src/witness.c
#g++ -Wall -g3 -fvisibility=hidden -O3 -c -D_GNU_SOURCE -D_REENTRANT -Iinclude -Iinclude -o src/jemalloc_cpp.o src/jemalloc_cpp.cpp
#ar crus lib/libjemalloc.a src/jemalloc.o src/arena.o src/background_thread.o src/base.o src/bitmap.o src/ckh.o src/ctl.o src/extent.o src/extent_dss.o src/extent_mmap.o src/hash.o src/hooks.o src/large.o src/malloc_io.o src/mutex.o src/mutex_pool.o src/nstime.o src/pages.o src/prng.o src/prof.o src/rtree.o src/stats.o src/spin.o src/sz.o src/tcache.o src/ticker.o src/tsd.o src/witness.o src/jemalloc_cpp.o
#


#lib/libjemalloc.a
#src/jemalloc.o
#src/arena.o
#src/background_thread.o
#src/base.o src/bitmap.o
#src/ckh.o src/ctl.o
#src/extent.o
#src/extent_dss.o
#src/extent_mmap.o
#src/hash.o
#src/hooks.o
#src/large.o
#src/malloc_io.o
#src/mutex.o
#src/mutex_pool.o
#src/nstime.o
#src/pages.o
#src/prng.o
#src/prof.o
#src/rtree.o
#src/stats.o
#src/spin.o
#src/sz.o
#src/tcache.o
#src/ticker.o
#src/tsd.o
#src/witness.o
#src/jemalloc_cpp.o





set(CMAKE_C_FLAGS "-std=gnu11 -Wall -Wsign-compare -Wundef -pipe -fvisibility=hidden -ggdb -funroll-loops  -D_GNU_SOURCE -D_REENTRAN")
set(CMAKE_CXX_FLAGS "-Wall  -fvisibility=hidden -ggdb  -D_GNU_SOURCE -D_REENTRANT ")
set(JESRC
        src/jemalloc.c
        src/arena.c
        src/background_thread.c
        src/base.c
        src/bitmap.c
        src/ckh.c
        src/ctl.c
        src/extent.c
        src/extent_dss.c
        src/extent_mmap.c
        src/hash.c
        src/hooks.c
        src/large.c
        src/malloc_io.c
        src/mutex.c
        src/mutex_pool.c
        src/nstime.c
        src/pages.c
        src/prng.c
        src/prof.c
        src/rtree.c
        src/stats.c
        src/spin.c
        src/sz.c
        src/tcache.c
        src/ticker.c
        src/tsd.c
        src/witness.c
        src/jemalloc_cpp.cpp
        )

add_library(dbjemalloc STATIC ${JESRC})


add_executable(jemalloc main.cpp)
target_link_libraries(jemalloc pthread dl dbjemalloc )
#dbjemalloc