(ql:quickload :cl+ssl)
(ql:quickload :cl-smtp)

(setf gmail-smtp "smtp.gmail.com")
(setf mail-addres "")
(setf passwd  "")
 
(defun replay (host-name from to subject massage login-addres password)
 `(cl-smtp:send-email ,host-name ,from ,to ,subject ,massage
                      :ssl :tls :authentication '(:login ,login-addres ,password)))


(replay gmail-smtp mail-addres mail-addres  "sub" "text" mail-addres passwd)

