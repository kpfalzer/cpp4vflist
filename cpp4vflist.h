#define _join(_a,_b) _a##/##_b
#define _si(_x) #_x
#define _s(_x) _si(_x)
#define qpath(_a,_b) _s(_join(_a,_b))
