(require 2htdp/image)

(define IMAGE1 (rectangle 10 15 "solid" "red"))
(define IMAGE1 (rectangle 15 10 "solid" "red"))

(> (image-height IMAGE1) 
   (image-height IMAGE2))

(< (image-height IMAGE1) 
   (image-height IMAGE2))

(and (= (image-width IMAGE1) 
        (image-width IMAGE2))
     (= (image-height IMAGE1) 
        (image-height IMAGE2)))