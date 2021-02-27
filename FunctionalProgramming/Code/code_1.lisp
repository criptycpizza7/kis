(defun f(x y) (setf x (+ x 1)) (* y x))

(defun sum (n)
  (if (= n 1)
      1
      (+ n (sum (- n 1)))))

(defun sum_list (L)
  (if (null L)
      0
      (+ (car L) (sum_list (cdr L)))))

(defun mylast (L)
  (if (null (cdr L))
      (cons (car L) nil)
      (mylast (cdr L))))

(defun myreverse (L)
  (if (null L)
      L
      (append (myreverse (cdr L)) (list (car L)))))

(defun myappend (A B)
  (cond
    ((null A) B)
    ((null B) A)
    (t  (cons (car A) (myappend (cdr A) B)))))
