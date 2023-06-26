char cval;
int ival;
unsigned int ui;
float fval;
double dval;
cval = 'a' + 3;//char -> int, 加法后，int -> char
fval = ui - ival * 1.0;//ival 的 int->double, 做完乘法后unsigned->double, 最后double->float
dval = ui * fval;//unsigned->float, 做完乘法后 float->double
cval = ival + fval + dval;//int->float,做完加法后，float->double,做完加法后，double->char