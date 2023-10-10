#ifndef ABS
#define ABS(x){\
	if (x >= 0) \
	(x) = (x); \
	else \
	((x) = (-x));\
	}
#endif /* ABS(x) */
