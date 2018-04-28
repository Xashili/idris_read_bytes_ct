module Main

import FileProvider
import Buffer

%language TypeProviders
%provide (mem : List Bits8) with loadImage "./ram.mem"

main : IO ()
main = do
     printLn mem
