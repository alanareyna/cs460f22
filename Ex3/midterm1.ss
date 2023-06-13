(define (combine ls1 ls2)
 (if (null? ls1) ls2 
(cons (car ls1) (combine (cdr ls1) ls2))))

(display (combine '(1) '(2)))
(newline)
(display (combine '(9 a) '(b c)))
