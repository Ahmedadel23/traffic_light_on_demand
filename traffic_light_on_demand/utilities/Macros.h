#ifndef UTILS_H_
#define UTILS_H_
#define   SET_BIT(REGISTER,BIT)      ((REGISTER)|=(1<<(BIT)))
#define   CLEAR_BIT(REGISTER,BIT)    ((REGISTER)&= ~(1<<(BIT)))
#define   GET_BIT(REGISTER,BIT)    (((REGISTER) & (1<<(BIT)))>>(BIT))
#define   TOGGLE_BIT(REGISTER,BIT)   ((REGISTER)^=(1<<(BIT)))
#define   CHECK_BIT(Reg,bit) ((Reg>>bit)&1)
#endif
