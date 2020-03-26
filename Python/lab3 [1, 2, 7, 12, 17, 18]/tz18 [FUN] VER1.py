# 141, Суптеля Владислав
# 【Дата】:「09.03.20」
# 18. Перевірити, чи можна переливати кров донор пацієнту.

print("Резус-фактор не враховуємо . . . \n")
def bloodseeker():
    d, r = map(int, input("「Донор」(d), 「Реципієнт」(r): ").split())
    if d == r:
        print("Da.")
    elif 1 == d:
        print("Da.")
    elif r == 4:
        print("Da.")
    else:
        print("Nyet.")
bloodseeker()

# Реципиент	         Донор
#             O(I)  A(II)	B(III)	AB(IV)
# O(I)	      Да     Нет	  Нет    Нет
# A(II)	      Да	 Да	      Нет    Нет
# B(III)	  Да	 Нет	  Да     Нет
# AB(IV)	  Да	 Да	      Да     Да
