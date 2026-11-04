
;; ==========================================
;; Holberton C Programming - Emacs Configuration
;; ==========================================

;; C formatting - Betty style
(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)

;; Convert pasted leading spaces to tabs in C files
(defun holberton-convert-spaces-to-tabs ()
  (when (derived-mode-p 'c-mode)
    (untabify (point-min) (point-max))
    (tabify (point-min) (point-max))))

(add-hook 'c-mode-hook
          (lambda ()
            (setq indent-tabs-mode t)
            (setq tab-width 8)))

;; Whitespace checking
;; Highlight tabs, trailing spaces and lines exceeding 80 columns
(require 'whitespace)
(setq whitespace-style '(face tabs trailing lines-tail))
(global-whitespace-mode 1)

;; Line and column numbers
(global-display-line-numbers-mode 1)
(setq column-number-mode t)

;; Highlight matching brackets
(show-paren-mode 1)

;; Automatically close brackets and quotes
(electric-pair-mode 1)

;; Ensure files end with a newline
(setq require-final-newline t)
