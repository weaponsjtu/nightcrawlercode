 (ft-set-jid! "javawebzwp@gmail.com")
 (ft-set-server! "talk.google.com")
; (ft-set-password! "p455w0rd")
 (ft-set-sslconn! #t)
; (ft-set-proxy! "172.16.2.20")
; (ft-set-port! 3128)
; (add-hook! ft-login-hook
;            (lambda (status)
;              (if status
;                  (begin
;                    (ft-set-prompt! "~\\/~ ")
;                    (ft-set-status-msg! "chat I use GNU Freetalk")))))
;;;
;;; Let ctrl-a display full roster, ctrl-e who i am, ctrl-h online buddies
; (ft-bind-to-ctrl-key #\a "(/who \"all\")")
 (ft-bind-to-ctrl-key #\e "(/whoami \"\")")
 (ft-bind-to-ctrl-key #\h "(/who \"\")")
