// VCExeSample.h
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.6.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4020C0 (str char) str4020C0) (4020C8 (str char) str4020C8) (4020D4 (str char) str4020D4) (4020D8 (str char) str4020D8) (4020DC (str char) str4020DC) (4020E0 (str char) str4020E0) (4020E4 real32 r4020E4) (4020E8 real32 r4020E8) (4020EC real32 r4020EC) (403018 Eq_58 gbl_c))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (fn void ((ptr char), int32, (ptr char), real32))
	T_5 (in test1 : ptr32)
	T_6 (in signature of test1 : void)
	T_31 (in test1 : ptr32)
	T_41 (in test1 : ptr32)
Eq_20: (fn int32 ((ptr char), (ptr char), int32, (ptr char), real64))
	T_20 (in printf : ptr32)
	T_21 (in signature of printf : void)
Eq_48: cdecl_class
	T_48 (in c : (ptr Eq_48))
Eq_50: cdecl_class_vtbl
	T_50 (in c + 0x00000000 : word32)
Eq_51: cdecl_class_vtbl
	T_51 (in Mem0[c + 0x00000000:word32] : word32)
Eq_53: (fn void ((ptr cdecl_class), int32))
	T_53 (in Mem0[c + 0x00000000:word32] + 0x00000004 : word32)
Eq_54: (fn void ((ptr Eq_48), int32))
	T_54 (in Mem0[Mem0[c + 0x00000000:word32] + 0x00000004:word32] : word32)
Eq_58: (union "Eq_58" ((ptr cdecl_class) u0) (cdecl_class_ptr u1))
	T_58 (in Mem0[0x00403018:word32] : word32)
	T_66 (in Mem0[0x00403018:word32] : word32)
	T_69 (in Mem0[0x00403018:word32] : word32)
	T_77 (in Mem0[0x00403018:word32] : word32)
Eq_60: cdecl_class_vtbl
	T_60 (in Mem0[0x00403018:word32] + 0x00000000 : word32)
Eq_61: cdecl_class_vtbl
	T_61 (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] : word32)
Eq_63: (fn void ((ptr cdecl_class)))
	T_63 (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000000 : word32)
Eq_64: (fn void (Eq_58))
	T_64 (in Mem0[Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000000:word32] : word32)
Eq_71: cdecl_class_vtbl
	T_71 (in Mem0[0x00403018:word32] + 0x00000000 : word32)
Eq_72: cdecl_class_vtbl
	T_72 (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] : word32)
Eq_74: (fn void ((ptr cdecl_class), int32))
	T_74 (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000004 : word32)
Eq_75: (union "Eq_75" ((fn void ((ptr cdecl_class), int32)) u0) ((fn void (Eq_58, word32, real32)) u1))
	T_75 (in Mem0[Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000004:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : int32)
  Class: Eq_2
  DataType: int32
  OrigDataType: int32
T_3: (in argc : int32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in argv : (ptr (ptr char)))
  Class: Eq_4
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_5: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_18 (T_14, T_15, T_16, T_17)))
T_6: (in signature of test1 : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in arg1 : (ptr char))
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_8: (in arg2 : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_9: (in arg3 : (ptr char))
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_10: (in arg4 : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_11: (in argv : (ptr (ptr char)))
  Class: Eq_11
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (struct (0 T_14 t0000)))
T_12: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in argv + 0x00000000 : word32)
  Class: Eq_13
  DataType: ptr32
  OrigDataType: ptr32
T_14: (in Mem0[argv + 0x00000000:word32] : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_15: (in argc : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_16: (in 0x004020C0 : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_17: (in 1.0F : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_18: (in test1(*argv, argc, "test123", 1.0F) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: int32
  OrigDataType: word32
T_20: (in printf : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_29 (T_27, T_7, T_8, T_9, T_28)))
T_21: (in signature of printf : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in ptrArg04 : (ptr char))
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: 
T_23: (in  : 32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: 
T_24: (in  : int32)
  Class: Eq_8
  DataType: int32
  OrigDataType: 
T_25: (in  : 32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: 
T_26: (in  : real64)
  Class: Eq_26
  DataType: real64
  OrigDataType: 
T_27: (in 0x004020C8 : word32)
  Class: Eq_22
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_28: (in (real64) arg4 : real64)
  Class: Eq_26
  DataType: real64
  OrigDataType: real64
T_29: (in printf("%s %d %s %f", arg1, arg2, arg3, (real64) arg4) : int32)
  Class: Eq_29
  DataType: int32
  OrigDataType: int32
T_30: (in dwArg04 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_37 (T_32, T_33, T_34, T_36)))
T_32: (in 0x004020D8 : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_33: (in 0x00000002 : word32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_34: (in 0x004020D4 : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_35: (in 0x004020E8 : ptr32)
  Class: Eq_35
  DataType: (ptr real32)
  OrigDataType: (ptr (struct (0 T_36 t0000)))
T_36: (in Mem0[0x004020E8:real32] : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_37: (in test1("1", 0x00000002, "3", globals->r4020E8) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_38: (in dwArg04 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in 0x00000000 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_40: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in test1 : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_47 (T_42, T_43, T_44, T_46)))
T_42: (in 0x004020E0 : word32)
  Class: Eq_7
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_43: (in 0x00000006 : word32)
  Class: Eq_8
  DataType: int32
  OrigDataType: int32
T_44: (in 0x004020DC : word32)
  Class: Eq_9
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_45: (in 0x004020E4 : ptr32)
  Class: Eq_45
  DataType: (ptr real32)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_46: (in Mem0[0x004020E4:real32] : real32)
  Class: Eq_10
  DataType: real32
  OrigDataType: real32
T_47: (in test1("5", 0x00000006, "7", globals->r4020E4) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_48: (in c : (ptr Eq_48))
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr cdecl_class)
T_49: (in 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in c + 0x00000000 : word32)
  Class: Eq_50
  DataType: (ptr (ptr Eq_50))
  OrigDataType: (ptr (ptr cdecl_class_vtbl))
T_51: (in Mem0[c + 0x00000000:word32] : word32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr cdecl_class_vtbl)
T_52: (in 0x00000004 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in Mem0[c + 0x00000000:word32] + 0x00000004 : word32)
  Class: Eq_53
  DataType: (ptr (ptr Eq_53))
  OrigDataType: (ptr (ptr (fn void ((ptr cdecl_class), int32))))
T_54: (in Mem0[Mem0[c + 0x00000000:word32] + 0x00000004:word32] : word32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_56 (T_48, T_55)))
T_55: (in 0x000003E8 : word32)
  Class: Eq_55
  DataType: int32
  OrigDataType: int32
T_56: (in c->vtbl->method04(c, 0x000003E8) : void)
  Class: Eq_56
  DataType: void
  OrigDataType: void
T_57: (in 0x00403018 : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: cdecl_class_ptr
T_59: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in Mem0[0x00403018:word32] + 0x00000000 : word32)
  Class: Eq_60
  DataType: (ptr (ptr Eq_60))
  OrigDataType: (ptr (ptr cdecl_class_vtbl))
T_61: (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] : word32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr cdecl_class_vtbl)
T_62: (in 0x00000000 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000000 : word32)
  Class: Eq_63
  DataType: (ptr (ptr Eq_63))
  OrigDataType: (ptr (ptr (fn void ((ptr cdecl_class)))))
T_64: (in Mem0[Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000000:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_65: (in 0x00403018 : word32)
  Class: Eq_65
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (struct (0 T_66 t0000)))
T_66: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: (union ((ptr cdecl_class) u1) (cdecl_class_ptr u0))
T_67: (in (**globals->gbl_c)(globals->gbl_c) : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_68: (in 0x00403018 : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (struct (0 T_69 t0000)))
T_69: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: cdecl_class_ptr
T_70: (in 0x00000000 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in Mem0[0x00403018:word32] + 0x00000000 : word32)
  Class: Eq_71
  DataType: (ptr (ptr Eq_71))
  OrigDataType: (ptr (ptr cdecl_class_vtbl))
T_72: (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] : word32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr cdecl_class_vtbl)
T_73: (in 0x00000004 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000004 : word32)
  Class: Eq_74
  DataType: (ptr (ptr Eq_74))
  OrigDataType: (ptr (ptr (fn void ((ptr cdecl_class), int32))))
T_75: (in Mem0[Mem0[Mem0[0x00403018:word32] + 0x00000000:word32] + 0x00000004:word32] : word32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (union ((fn void ((ptr cdecl_class), int32)) u0) ((fn void (Eq_58, word32, real32)) u1)))
T_76: (in 0x00403018 : word32)
  Class: Eq_76
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (struct (0 T_77 t0000)))
T_77: (in Mem0[0x00403018:word32] : word32)
  Class: Eq_58
  DataType: Eq_58
  OrigDataType: cdecl_class_ptr
T_78: (in 0x000003E7 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in 0x004020EC : ptr32)
  Class: Eq_79
  DataType: (ptr real32)
  OrigDataType: (ptr (struct (0 T_80 t0000)))
T_80: (in Mem0[0x004020EC:real32] : real32)
  Class: Eq_80
  DataType: real32
  OrigDataType: real32
T_81: (in (**globals->gbl_c)(globals->gbl_c, 0x000003E7, globals->r4020EC) : void)
  Class: Eq_81
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	char str4020C0[];	// 4020C0
	char str4020C8[];	// 4020C8
	char str4020D4[];	// 4020D4
	char str4020D8[];	// 4020D8
	char str4020DC[];	// 4020DC
	char str4020E0[];	// 4020E0
	real32 r4020E4;	// 4020E4
	real32 r4020E8;	// 4020E8
	real32 r4020EC;	// 4020EC
	Eq_58 gbl_c;	// 403018
} Eq_1;

typedef void (Eq_5)(char *, int32, char *, real32);

typedef int32 (Eq_20)(char *, char *, int32, char *, real64);

typedef cdecl_class Eq_48;

typedef cdecl_class_vtbl Eq_50;

typedef cdecl_class_vtbl Eq_51;

typedef void (Eq_53)(cdecl_class * ptrArg04, int32 dwArg08);

typedef void (Eq_54)(cdecl_class *, int32);

typedef union Eq_58 {
	cdecl_class * u0;
	cdecl_class_ptr u1;
} Eq_58;

typedef cdecl_class_vtbl Eq_60;

typedef cdecl_class_vtbl Eq_61;

typedef void (Eq_63)(cdecl_class * ptrArg04);

typedef void (Eq_64)(Eq_58);

typedef cdecl_class_vtbl Eq_71;

typedef cdecl_class_vtbl Eq_72;

typedef void (Eq_74)(cdecl_class * ptrArg04, int32 dwArg08);

typedef union Eq_75 {
	void u0(cdecl_class * ptrArg04, int32 dwArg08);
	void u1(Eq_58, word32, real32);
} Eq_75;

