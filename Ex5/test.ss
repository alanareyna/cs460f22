(define (funky1 a b)
 (if (> a b)
 (let ((c (+ a b)))
 (* c b)
 )
 (let ((c (* a b)))
 (+ c b)
 )
 )
)
(define (funky2 a b)
 (let ((c (+ a b)) (d (* a b)))
 (if (> a b)
 (* c b)
 (+ d b)
 )
 )
)
(define (main)
 (display (funky1 1 2))
 (newline)
 (display (funky1 2 1))
 (newline)
 (display (funky2 1 2))
 (newline)
 (display (funky2 2 1))
 (newline)
)
(main)