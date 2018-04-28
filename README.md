# idris_read_bytes_ct
Read a file into List Bits8 during compile time in Idris
To compile the shared library use

    cc -o idris_buffer.so -fPIC -shared idris_buffer.c -lc
