;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 3                                                                  ;
; Author: Alana Reyna                                                         ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  
(define (list_sum mylist)
    (if (not (list? mylist))
      0
      (if (null? mylist)
        0
          (if (not (number? (car mylist)))
              (+ 0 (list_sum (cdr mylist)))
              (+ (car mylist) (list_sum (cdr mylist)))
              )
          )
      )
)

(define (last mylist)
  (cond ((null? (cdr mylist)) (car mylist))
        (else (last (cdr mylist)))
  )
)

(define (insert_last myvalue mylist)
  (if (null? mylist)
      (list myvalue)
      (cons (car mylist) (insert_last myvalue (cdr mylist)))
  )
)

(define (remove_first mylist)
    (cond ((list? (car mylist)) cons(remove_first (car mylist) (cdr mylist)))
    (else (cdr mylist))     
    )  
)

(define (remove_last mylist)
    (if (null? (cdr mylist))
      '()
        (cons (car mylist) (remove_last (cdr mylist)))
    )  
)

(define (list_reverse mylist)
  (if (null? mylist)
      '()
      (append (list_reverse (cdr mylist)) (list (car mylist)))
  )
)

;; newton method or babylonian?
;; (define (square_root n)
;;   (if (null? n)
;;     0
;;     (* n n)
;;   )
;; )

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Author: Alana Reyna                                                         ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;                                                                    
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 3: all_reverse                                                      ;
; Parameters: mylist                                                          ;
; Returns: The list that is inputted in reverse. This function will reverse   ;
;           the elements in a sublist as well.                                ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;                                                           
(define (all_reverse mylist)
  (define (all_reverse2 mylist i)
    (if (null? mylist)
      i
      (if (list? (car mylist))
        (all_reverse2 (cdr mylist) (cons (all_reverse (car mylist)) i))
        (all_reverse2 (cdr mylist) (cons (car mylist) i)))))
  (all_reverse2 mylist '())
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4a: quicksort                                                       ;
; Helper functions: lessThan, greaterThan                                     ;
; Parameters: mylist                                                          ;
; Returns: The unsorted list that is inputted sorted using the quick sort     ;
;            algorithm.                                                       ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4a: quicksort                                                       ;
; Helper function: lessThan                                                   ;
; Parameters: mylist, pivot                                                   ;
; Returns: The left side of the inputted list is sorted and returned.         ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (lessThan mylist pivot)
  (cond ((null? mylist) '())
        ((< (car mylist) pivot) (cons (car mylist) (lessThan (cdr mylist) pivot)))
        (else (lessThan (cdr mylist) pivot))
  )  
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4a: quicksort                                                       ;
; Helper function: greaterThan                                                ;
; Parameters: mylist, pivot                                                   ;
; Returns: The right side of the inputted list is sorted and returned.        ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (greaterThan mylist pivot)
  (cond ((null? mylist) '())
        ((> (car mylist) pivot) (cons (car mylist) (greaterThan (cdr mylist) pivot)))
        (else (greaterThan (cdr mylist) pivot))
  )
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4a: quicksort                                                       ;
; Driver function: quicksort                                                  ;
; Parameters: mylist                                                          ;
; Returns: The sorted list in descending order.                               ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (quicksort mylist)
  (cond ((null? mylist) '())
  (else (let ((pivot (last mylist)))
          (append (append (quicksort (greaterThan mylist pivot)) (list pivot) (quicksort (lessThan mylist pivot))))
        ))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4: mergesort                                                        ;
; Helper functions: merge, split, leftList, rightList                         ;
; Parameters: mylist                                                          ;
; Returns: The unsorted list that is inputted sorted using the merge sort     ;
;            algorithm.                                                       ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

;; merge function
(define (merge l1 l2)
  (if (null? l1) l2
      (if (null? l2) l1
        (if (< (car l1) (car l2))
            (cons (car l1) (merge (cdr l1) l2))
            (cons (car l2) (merge (cdr l2) l1))
            )))
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4b: mergesort                                                       ;
; Helper function: split                                                      ;
; Parameters: mylist                                                          ;
; Returns: Calls the leftList and rightList functions to split the input list ;
;           into two sublists.                                                ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (split mylist)
  (cons (leftList mylist) (cons (rightList mylist) '()))
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4b: mergesort                                                       ;
; Helper function: leftList                                                   ;
; Parameters: mylist                                                          ;
; Returns: creates a sublist from the input list starting with the first      ;
;          element of the list and including every other element.             ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (leftList mylist)
  (if (null? mylist) '()
    (if (null? (cdr mylist)) (list (car mylist))
      (cons (car mylist) (leftList (cddr mylist)))  
        ))
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4b: mergesort                                                       ;
; Helper function: rightList                                                  ;
; Parameters: mylist                                                          ;
; Returns: creates a sublist from the input list starting with the second     ;
;          element of the list and including every other element.             ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (rightList mylist)
  (if (null? mylist) '()
    (if (null? (cdr mylist)) '()
      (cons (cadr mylist) (rightList (cddr mylist)))
        )  
      )  
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 4b: mergesort                                                       ;
; Drive3r function: mergesort                                                 ;
; Parameters: mylist                                                          ;
; Returns: Sorts the input list using the mergesort algorithm in ascending    ;
;          order.                                                             ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 
(define (mergesort mylist)
  (if (null? mylist) mylist
    (if (null? (cdr mylist)) mylist
      (merge (mergesort (car (split mylist))) (mergesort (cadr (split mylist))))
        ))
)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 5: numbers_only                                                     ;
; Parameters: mynumlist                                                       ;
; Returns: Sorts the inputted list and returns the list with only numerical   ; 
;            values.                                                          ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

(define (numbers_only mynumlist)
  (define (numbers_only2 mynumlist i)
    (if (null? mynumlist) i
      (if (not (list? mynumlist)) (display "Invalid input: please input a list") 
        (if (list? (car mynumlist))
          (append (numbers_only (car mynumlist)) (numbers_only2 (cdr mynumlist) i))
          (if (number? (car mynumlist))
            (cons (car mynumlist) (append (numbers_only2 (cdr mynumlist) i) i))
            (numbers_only2 (cdr mynumlist) i) 
          )
        )
      ) 
    )
  )
  (numbers_only2 mynumlist '())
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Exercise 5                                                                  ;
; Problem 6: Modification of quicksort and mergesort to only sort the list's  ;
;            numerical values.                                                ;
; Parameters: mynumlist                                                       ;
; Returns: Sorts the inputted list and returns the list with only numerical   ; 
;            values using quicksort and mergesort by calling numbers_only.    ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Problem 6: quicksortModified                                                ;
; Helper functions: lessThan, greaterThan                                     ;
; Parameters: mynumlist                                                       ;
; Returns: Sorts the inputted list and returns the list with only numerical   ; 
;            values.                                                          ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

;; lessThan helper function
(define (lessThan mylist pivot)
  (cond ((null? mylist) '())
        ((< (car mylist) pivot) (cons (car mylist) (lessThan (cdr mylist) pivot)))
        (else (lessThan (cdr mylist) pivot))
  )  
)

;; greater than helper function:
(define (greaterThan mylist pivot)
  (cond ((null? mylist) '())
        ((> (car mylist) pivot) (cons (car mylist) (greaterThan (cdr mylist) pivot)))
        (else (greaterThan (cdr mylist) pivot))
  )
)

;; quicksortModified: converts input list to only use numerical values, 
;; then sorts the list using the quicksort algorithm 
(define (quicksort mylist)
  (let ((numList (numbers_only mylist)))
    (cond ((null? numList) '()) 
      (else 
        (let ((pivot (last numList)))
          (append 
            (append 
              (quicksort (greaterThan numList pivot)) (list pivot)            
              (quicksort (lessThan numList pivot))
           )
          )             
        )
      )     
    ) 
  )  
)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Problem 6: mergeSortModified                                                ;
; Helper functions: merge, split, leftList, rightList                         ;
; Parameters: mynumlist                                                       ;
; Returns: Sorts the inputted list and returns the list with only numerical   ; 
;     values using a modified version of mergesort that calls numbers_only.   ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; 

;; merge helper function
(define (merge l1 l2)
  (if (null? l1) l2
      (if (null? l2) l1
        (if (< (car l1) (car l2))
            (cons (car l1) (merge (cdr l1) l2))
            (cons (car l2) (merge (cdr l2) l1))
            )))
)

;; split function
(define (split mylist)
  ;; call leftList and rightList functions to split list into two parts
  (cons (leftList mylist) (cons (rightList mylist) '()))
)

;; left sublist than function: creates a sublist from input list starting with the first element of the list and every other element following
(define (leftList mylist)
  (if (null? mylist) '()
    (if (null? (cdr mylist)) (list (car mylist))
      (cons (car mylist) (leftList (cddr mylist)))  
        ))
)

;; right sublist than function: creates a sublist from input list starting with the second element of the list and every other element following
(define (rightList mylist)
  (if (null? mylist) '()
    (if (null? (cdr mylist)) '()
      (cons (cadr mylist) (rightList (cddr mylist)))
        )  
      )  
)

;; mergeSortModified: modified mergeSort driver code that takes an input list, calls numbers_only on the list to convert the list to only numeric values, then sort the list in ascending order
(define (mergesort mylist)
  (let ((numList (numbers_only mylist)))
    (if (null? numList) numList
      (if (null? (cdr numList)) numList
        (merge (mergesort (car (split numList))) (mergesort (cadr (split numList))))
      )
    )
  )
)

;; main driver code that calls and displays the results of functions from Ex5
(define (main)
  (display "Testing Exercise 5") 
  (newline)
  (newline)
  (display "Testing Exercise 5 problem 3: ") 
  (newline)
  (newline)
  (display "Input for problem 3: ") 
  (display "(all_reverse '(1 (2 3 f 4) 5 (a (6 (7 8) d 9))))")
  (newline)
  (display "Output for problem 3: ") 
  (display (all_reverse '(1 (2 3 f 4) 5 (a (6 (7 8) d 9)))))
  (newline)
  (newline)
  (display "Testing Exercise 5 problem 4a (quicksort): ") 
  (newline)
  (display "Input for problem 4a: (quicksort '(2 88 3 10 99 22 31 6))")
  (newline)
  (display "Output for problem 4a: ")
  (display (quicksort '(2 88 3 10 99 22 31 6)))
  (newline)
  (newline)
  (display "Testing Exercise 5 problem 4b (mergeSort): ") 
  (newline)
  (display "Input for problem 4b: (mergeSort '(2 88 3 10 99 22 31 6))")
  (newline)
  (display "Output for problem 4b: ")
  (display (mergesort '(2 88 3 10 99 22 31 6)))
  (newline)
  (newline)
  (display "Testing Exercise 5 problem 5")
  (newline)
  (display "numbers_only input '()")
  (newline)
  (display "numbers_only output: ")
  (display (numbers_only '()))
  (newline)
  (display "numbers_only input 1")
  (newline)
  (display "numbers_only output: ")
  (numbers_only 1)
  (newline)
  (display "numbers_only input '(1 2 3 (a b 4) 5)")
  (newline)
  (display "numbers_only output: ")
  (display (numbers_only '(1 2 3 (a b 4) 5)))
  (newline)
  (newline)
  (display "Testing Exercise 5 problem 6")
  (newline)
  (display "quicksort on input ‘(1 5 3 6 8 92 –1 0 4 5 3): FAILS")
  (newline)
  (display "mergeSort on input ‘(1 5 3 6 8 92 –1 0 4 5 3): FAILS")
  (newline)
  (display "quicksort on input ‘(a b d e c t s): FAILS")
  (newline)
  (display "mergeSort on input ‘(a b d e c t s): FAILS")
  (newline)
  (display "Testing Exercise 5 problem 6 sort algorithms using the numbers_only function")
  (newline)
  (display "Testing Exercise 5 problem 6 quicksortmodified")
  (newline)
  (display "quicksortmodified input: '(1 5 3 6 8 92 –1 0 4 5 3)")
  (newline)
  (display "quicksortModified output: ")
  (display (quicksort '(1 5 3 6 8 92 –1 0 4 5 3)))
  (newline)
  (display "quicksortmodified input: '(a b d e c t s)")
  (newline)
  (display "quicksortModified output: ")
  (display (quicksort '(a b d e c t s)))
  (newline)
  (display "Testing Exercise 5 problem 6 mergeSortmodified")
  (newline)
  (display "mergeSortmodified input '(1 5 3 6 8 92 –1 0 4 5 3): ")
  (newline)
  (display "mergeSortModified output: ")
  (display (mergesort '(1 5 3 6 8 92 –1 0 4 5 3)))
  (newline)
  (display "mergeSortmodified input '(a b d e c t s)")
  (newline)
  (display "mergesortModified output: ")
  (display (mergesort '(a b d e c t s)))
  (newline)
  (display "MERGE SORT TEST: ")
  (display (mergesort '(1 (2 3 f 4) 5 (a (6 (7 8) d 9)))))
  (newline)
  (display "NUMBERS_ONLY TEST: ")
  (display (numbers_only '(1 (2 3 f 4) 5 (a (6 (7 8) d 9)))))
  (newline)
  (display "NUMBERS_ONLY TEST: ")
  (display (numbers_only '(1 (2/3 f 4) 5 (a (6 (7 8) d 9/10)))))
)

(main)