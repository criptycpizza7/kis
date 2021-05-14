(defun make-tree (m n)
  (cond
    ((<= n 1) (list (random m) nil nil))
    (t (list (random m)
	     (make-tree m (- n (random m)))
	     (make-tree m (- n (random m)))))))

(defun peak-count (L)
  (cond
    ((and (null (second L)) (null (third L)))
     1)
    (t
     (+ 1 (peak-count (second L))
	(peak-count (third L))))))

(defun leaves-count (L)
  (cond
    ((and (null (second L)) (null (third L)))
     1)
    (t
     (+ (leaves-count (second L))
	(leaves-count (third L))))))

(defun leaves-list (L)
  (cond
    ((and (null (second L)) (null (third L)))
     (list (car L)))
    (t
     (append (leaves-list (second L))
	     (leaves-list (third L))))))

(defun story-tree (n L)
  (cond
    ((= n 0)
     (list (car L)))
    (t (append
	(story-tree (- n 1) (second L))
	(story-tree (- n 1) (third L))))))

(defun deep-tree (L)
  (cond
    ((and (null (second L)) (null (third L))) 0)
    (t (+ 1 (max (deep-tree (second L))  (deep-tree (third L)))))))

(defun member-tree(L n)
  (cond
    ((null L) nil)
    ((= n (car L)) T)
    (t (or (member-tree (second L) n)  (member-tree (third L) n)))))

(defun replace-knot (L n m)
  (cond
    ((null L) nil)
    ((= (car L) n)
     (list m (replace-knot (second L) n m)
	   (replace-knot (third L) n m)))
    (t (list (car L)
	     (replace-knot (second L) n m)
	   (replace-knot (third L) n m)))))



	       
