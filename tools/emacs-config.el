
;; ==========================================
;; Holberton C Programming - Emacs Configuration
;; ==========================================

;; C formatting - Betty style
(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)

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
