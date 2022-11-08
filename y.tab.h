#ifndef _yy_defines_h_
#define _yy_defines_h_

#define PLUS 257
#define MINUS 258
#define DIV 259
#define MOD 260
#define MULT 261
#define EQ 262
#define LT 263
#define GT 264
#define GE 265
#define LE 266
#define NOT 267
#define OR 268
#define AND 269
#define IF 270
#define LET 271
#define LPAR 272
#define RPAR 273
#define GETINT 274
#define GETBOOL 275
#define DEFFUN 276
#define TRUE 277
#define FALSE 278
#define INT 279
#define BOOL 280
#define ERR 281
#define PRINT 282
#define EVAL 283
#define CALL 284
#define FUNID 285
#define REGID 286
#define INP 287
#define ID 288
#define CONST 289
#define BOOLID 290
#define INTID 291
#define LETID 292
#define VARID 293
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {int val; char* str;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
