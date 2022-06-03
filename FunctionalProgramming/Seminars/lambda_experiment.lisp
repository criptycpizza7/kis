(defmacro delay (expr) `(lambda () ,expr))

(defun force (thunk) (funcall thunk))

(defmacro cons-stream (head tail) `(cons ,head (delay ,tail)))

(defun head (lazy-stream) (car lazy-stream))

(defun tail (lazy-stream) (force (cdr lazy-stream)))







(defmacro beta (L value)
  `(lambda() (funcall ,L ,value)))

(defun delta (L) (if (functionp L) (delta (funcall L)) L))



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(defun true ()
  (lambda  (x)
    (lambda  (y) x)))

(defun false ()
  (lambda (x)
	       (lambda  (y) y)))


(defun if_m (p x y)
  (funcall (funcall p x) y))

(defun and_m (x y)
  (funcall (funcall x y)
	   (false)))

(defun or_m (x y)
  (funcall (funcall x (true))
	   y))

(defun nil_m()
    (lambda (x) (true)))

(defun null_m (c)
    (funcall c (lambda (x) (lambda (y) (false))))))

(defun cons_m (x y)
  (lambda (s) (if_m s x y)))

(defun car_m (L)
  (funcall L (true)))

(defun cdr_m (L)
  (funcall L (false)))

(defun Y (f)
  ((lambda (g) (funcall g g))
   (lambda (g)
     (funcall f (lambda (&rest a)
		  (apply (funcall g g) a))))))
 
(defun fac (n)
  (funcall
   (Y (lambda (f)
       (lambda (x)
         (if (zerop x)
	   1
	   (* x (funcall f (1- x)))))))
   n))
 
(defun fib (n)
  (funcall
   (Y (lambda (f)
       (lambda (n a b)
         (if (< n 1)
           a
           (funcall f (1- n) b (+ a b))))))
   n 0 1))
