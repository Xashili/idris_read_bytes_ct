module FileProvider

import Buffer

%default total

export
loadImage : String -> IO (Provider (List Bits8))
loadImage fileName = do
    Right file <- _openFile fileName "r"
      | Left err => pure (Error $ show err)
    Just buf <- newBuffer size
      | Nothing => pure (Error "allocation failed")
    
    buf' <- readBufferFromFile file buf size
    pure <$> bufferData buf'
  where
    size : Int
    size = 20

