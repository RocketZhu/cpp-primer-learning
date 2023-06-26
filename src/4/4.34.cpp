float fval;
double dval;
int ival;
char cval;
if (fval) //在条件中，float fval自动转换为bool值
dval = fval + ival; //int 先转换为 float，最后float求和后再转化为等号左边的double
dval + ival * cval; // cval 先转化为int, 乘法后int->double
