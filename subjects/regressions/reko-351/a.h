// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.8.1.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr32 code) ptr8000270C) (80002714 (arr (ptr32 code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 uint32 dw80002726) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_53: (fn void ())
	T_53 (in deregister_tm_clones : ptr32)
	T_54 (in signature of deregister_tm_clones : void)
Eq_137: (fn void ())
	T_137 (in register_tm_clones : ptr32)
	T_138 (in signature of register_tm_clones : void)
	T_140 (in register_tm_clones : ptr32)
Eq_170: (fn void (real64, int32))
	T_170 (in pow_int : ptr32)
	T_171 (in signature of pow_int : void)
	T_182 (in pow_int : ptr32)
Eq_173: (fn void (int32))
	T_173 (in factorial : ptr32)
	T_174 (in signature of factorial : void)
	T_184 (in factorial : ptr32)
Eq_191: (fn void (real64))
	T_191 (in sine_taylor : ptr32)
	T_192 (in signature of sine_taylor : void)
Eq_197: (fn void (real64, real64, Eq_201))
	T_197 (in _sin : ptr32)
	T_198 (in signature of _sin : void)
Eq_201: (union "Eq_201" ((ptr32 word32) u0) ((ref int32) u1))
	T_201 (in tArg14 : Eq_201)
	T_210 (in fp - 0x00000008 : word32)
Eq_223: (ref int32)
	T_223 (in tArg14 + 0x00000000 : word32)
Eq_228: (union "Eq_228" ((ptr32 word32) u0) ((ref int32) u1))
	T_228 (in tArg14 + 0x00000000 : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in true : bool)
  Class: Eq_2
  DataType: bool
  OrigDataType: bool
T_3: (in 00000000 : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: word32
T_5: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in a7_39 : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in a6_40 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in d0_41 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in CVZN_42 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in CVZNX_43 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in d1_44 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in C_45 : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in a0_46 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in ZN_47 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in V_48 : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in Z_49 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in 00000000 : ptr32)
  Class: Eq_17
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_18: (in d0_11 : int32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_19: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_20: (in false : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in 0x00000001 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: word32
T_22: (in d0_15 : int32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_23: (in 0x00000001 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in d0_11 >> 0x00000001 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_25: (in 0x00000000 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: word32
T_26: (in d0_15 == 0x00000000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 00000000 : ptr32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in 0x00000000 : word32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: word32
T_29: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in a7_49 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in a6_50 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in d0_51 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in CVZN_52 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in CVZNX_53 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in N_54 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in Z_55 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in a0_56 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ZN_57 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in C_58 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in V_59 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in 00000000 : ptr32)
  Class: Eq_41
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_42: (in 80002724 : ptr32)
  Class: Eq_42
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_43 t0000)))
T_43: (in Mem0[0x80002724:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x00 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in globals->b80002724 != 0x00 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in d0_116 : uint32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: up32
T_47: (in 80002726 : ptr32)
  Class: Eq_47
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_48 t0000)))
T_48: (in Mem0[0x80002726:word32] : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: word32
T_49: (in a2_105 : (arr (ptr32 code)))
  Class: Eq_49
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: (ptr32 (struct (0 (arr T_286) a0000)))
T_50: (in 80002714 : ptr32)
  Class: Eq_49
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: ptr32
T_51: (in 0x00000000 : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: up32
T_52: (in d0_116 >= 0x00000000 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in deregister_tm_clones : ptr32)
  Class: Eq_53
  DataType: (ptr32 Eq_53)
  OrigDataType: (ptr32 (fn T_55 ()))
T_54: (in signature of deregister_tm_clones : void)
  Class: Eq_53
  DataType: (ptr32 Eq_53)
  OrigDataType: 
T_55: (in deregister_tm_clones() : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in 00000000 : ptr32)
  Class: Eq_56
  DataType: ptr32
  OrigDataType: ptr32
T_57: (in 0x00000000 : word32)
  Class: Eq_56
  DataType: ptr32
  OrigDataType: word32
T_58: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in d0_97 : uint32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: uint32
T_60: (in 0x00000001 : word32)
  Class: Eq_60
  DataType: up32
  OrigDataType: up32
T_61: (in d0_116 + 0x00000001 : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: up32
T_62: (in 80002726 : ptr32)
  Class: Eq_62
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_63 t0000)))
T_63: (in Mem100[0x80002726:word32] : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: word32
T_64: (in a0_102 : (ptr32 code))
  Class: Eq_64
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_65: (in 4 : int32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_66: (in d0_97 * 4 : word32)
  Class: Eq_66
  DataType: ui32
  OrigDataType: ui32
T_67: (in a2_105[d0_97 * 4] : word32)
  Class: Eq_64
  DataType: (ptr32 code)
  OrigDataType: word32
T_68: (in a7_103 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in a6_104 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in CVZN_106 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in d2_107 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in ZN_108 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in C_109 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74: (in V_110 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in Z_111 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in d0_112 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in CVZNX_113 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in CZ_114 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in a0_115 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in 80002726 : ptr32)
  Class: Eq_80
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_81 t0000)))
T_81: (in Mem100[0x80002726:word32] : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_46
  DataType: uint32
  OrigDataType: up32
T_83: (in d0_116 < 0x00000000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x01 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_85: (in 80002724 : ptr32)
  Class: Eq_85
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_86 t0000)))
T_86: (in Mem77[0x80002724:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_87: (in a7_81 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in a6_82 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in a2_83 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in CVZN_84 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in d2_85 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in ZN_86 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in C_87 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in V_88 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in Z_89 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in d0_90 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in CVZNX_91 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in CZ_92 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in a0_93 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in 00000000 : ptr32)
  Class: Eq_100
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_101: (in 00000000 : ptr32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: ptr32
T_102: (in 0x00000000 : word32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: word32
T_103: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in 8000271C : ptr32)
  Class: Eq_104
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_105 t0000)))
T_105: (in Mem0[0x8000271C:word32] : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in 0x00000000 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_107: (in globals->dw8000271C != 0x00000000 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in a7_83 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in a6_84 : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in a0_85 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in ZN_86 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in C_87 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in V_88 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in Z_89 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in a1_90 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in CVZN_91 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in d0_92 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in CVZNX_93 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in N_94 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in 00000000 : ptr32)
  Class: Eq_120
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_121: (in 00000000 : ptr32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: ptr32
T_122: (in 0x00000000 : word32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: word32
T_123: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in a7_64 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in a6_65 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in a0_66 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in ZN_67 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in C_68 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in V_69 : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in Z_70 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in a1_71 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in CVZN_72 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in d0_73 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in CVZNX_74 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in N_75 : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in 00000000 : ptr32)
  Class: Eq_136
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_137: (in register_tm_clones : ptr32)
  Class: Eq_137
  DataType: (ptr32 Eq_137)
  OrigDataType: (ptr32 (fn T_139 ()))
T_138: (in signature of register_tm_clones : void)
  Class: Eq_137
  DataType: (ptr32 Eq_137)
  OrigDataType: 
T_139: (in register_tm_clones() : void)
  Class: Eq_139
  DataType: void
  OrigDataType: void
T_140: (in register_tm_clones : ptr32)
  Class: Eq_137
  DataType: (ptr32 Eq_137)
  OrigDataType: (ptr32 (fn T_141 ()))
T_141: (in register_tm_clones() : void)
  Class: Eq_139
  DataType: void
  OrigDataType: void
T_142: (in rArg04 : real64)
  Class: Eq_142
  DataType: real64
  OrigDataType: real64
T_143: (in dwArg04 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_144: (in dwLoc08_15 : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_145: (in 2 : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_146: (in 0x00000001 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in dwLoc08_15 + 0x00000001 : word32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_148: (in dwLoc08_15 - dwArg04 : word32)
  Class: Eq_148
  DataType: int32
  OrigDataType: int32
T_149: (in 0x00000000 : word32)
  Class: Eq_148
  DataType: int32
  OrigDataType: int32
T_150: (in dwLoc08_15 - dwArg04 > 0x00000000 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in rArg04 : real64)
  Class: Eq_151
  DataType: real64
  OrigDataType: real64
T_152: (in dwArg0C : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_153: (in dwLoc08_16 : int32)
  Class: Eq_153
  DataType: int32
  OrigDataType: int32
T_154: (in 0x00000000 : word32)
  Class: Eq_153
  DataType: int32
  OrigDataType: word32
T_155: (in 0x00000001 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in dwLoc08_16 + 0x00000001 : word32)
  Class: Eq_153
  DataType: int32
  OrigDataType: word32
T_157: (in dwLoc08_16 - dwArg0C : word32)
  Class: Eq_157
  DataType: int32
  OrigDataType: int32
T_158: (in 0x00000000 : word32)
  Class: Eq_157
  DataType: int32
  OrigDataType: int32
T_159: (in dwLoc08_16 - dwArg0C >= 0x00000000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in rArg04 : real64)
  Class: Eq_160
  DataType: real64
  OrigDataType: real64
T_161: (in dwArg0C : int32)
  Class: Eq_161
  DataType: int32
  OrigDataType: int32
T_162: (in dwArg04_7 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in (word32) rArg04 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_164: (in dwLoc08_24 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_165: (in 3 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_166: (in dwLoc08_133 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_167: (in 5 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_168: (in rLoc28 : real64)
  Class: Eq_151
  DataType: real64
  OrigDataType: real64
T_169: (in DPB(rLoc28, dwArg04_7, 0) : real64)
  Class: Eq_151
  DataType: real64
  OrigDataType: real64
T_170: (in pow_int : ptr32)
  Class: Eq_170
  DataType: (ptr32 Eq_170)
  OrigDataType: (ptr32 (fn T_172 (T_168, T_164)))
T_171: (in signature of pow_int : void)
  Class: Eq_170
  DataType: (ptr32 Eq_170)
  OrigDataType: 
T_172: (in pow_int(rLoc28, dwLoc08_24) : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
T_173: (in factorial : ptr32)
  Class: Eq_173
  DataType: (ptr32 Eq_173)
  OrigDataType: (ptr32 (fn T_175 (T_164)))
T_174: (in signature of factorial : void)
  Class: Eq_173
  DataType: (ptr32 Eq_173)
  OrigDataType: 
T_175: (in factorial(dwLoc08_24) : void)
  Class: Eq_175
  DataType: void
  OrigDataType: void
T_176: (in 0x00000004 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in dwLoc08_24 + 0x00000004 : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_178: (in dwLoc08_24 - dwArg0C : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_179: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_180: (in dwLoc08_24 - dwArg0C > 0x00000000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in DPB(rLoc28, dwArg04_7, 0) : real64)
  Class: Eq_151
  DataType: real64
  OrigDataType: real64
T_182: (in pow_int : ptr32)
  Class: Eq_170
  DataType: (ptr32 Eq_170)
  OrigDataType: (ptr32 (fn T_183 (T_168, T_166)))
T_183: (in pow_int(rLoc28, dwLoc08_133) : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
T_184: (in factorial : ptr32)
  Class: Eq_173
  DataType: (ptr32 Eq_173)
  OrigDataType: (ptr32 (fn T_185 (T_166)))
T_185: (in factorial(dwLoc08_133) : void)
  Class: Eq_175
  DataType: void
  OrigDataType: void
T_186: (in 0x00000004 : word32)
  Class: Eq_186
  DataType: word32
  OrigDataType: word32
T_187: (in dwLoc08_133 + 0x00000004 : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_188: (in dwLoc08_133 - dwArg0C : word32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_189: (in 0x00000000 : word32)
  Class: Eq_188
  DataType: int32
  OrigDataType: int32
T_190: (in dwLoc08_133 - dwArg0C > 0x00000000 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in sine_taylor : ptr32)
  Class: Eq_191
  DataType: (ptr32 Eq_191)
  OrigDataType: (ptr32 (fn T_196 (T_195)))
T_192: (in signature of sine_taylor : void)
  Class: Eq_191
  DataType: (ptr32 Eq_191)
  OrigDataType: 
T_193: (in rLoc10 : real64)
  Class: Eq_193
  DataType: real64
  OrigDataType: real64
T_194: (in 0x40091EB8 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in DPB(rLoc10, 0x40091EB8, 0) : real64)
  Class: Eq_142
  DataType: real64
  OrigDataType: real64
T_196: (in sine_taylor(DPB(rLoc10, 0x40091EB8, 0)) : void)
  Class: Eq_196
  DataType: void
  OrigDataType: void
T_197: (in _sin : ptr32)
  Class: Eq_197
  DataType: (ptr32 Eq_197)
  OrigDataType: (ptr32 (fn T_211 (T_204, T_207, T_210)))
T_198: (in signature of _sin : void)
  Class: Eq_197
  DataType: (ptr32 Eq_197)
  OrigDataType: 
T_199: (in rArg04 : real64)
  Class: Eq_199
  DataType: real64
  OrigDataType: real64
T_200: (in rArg0C : real64)
  Class: Eq_200
  DataType: real64
  OrigDataType: real64
T_201: (in tArg14 : Eq_201)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: (union ((ptr32 (struct (0 T_224 t0000))) u1) ((ref int32) u0))
T_202: (in rLoc1C : real64)
  Class: Eq_202
  DataType: real64
  OrigDataType: real64
T_203: (in 0x40091EB8 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in DPB(rLoc1C, 0x40091EB8, 0) : real64)
  Class: Eq_199
  DataType: real64
  OrigDataType: real64
T_205: (in rLoc14 : real64)
  Class: Eq_205
  DataType: real64
  OrigDataType: real64
T_206: (in 0x3F689374 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in DPB(rLoc14, 0x3F689374, 0) : real64)
  Class: Eq_200
  DataType: real64
  OrigDataType: real64
T_208: (in fp : ptr32)
  Class: Eq_208
  DataType: ptr32
  OrigDataType: ptr32
T_209: (in 0x00000008 : word32)
  Class: Eq_209
  DataType: ui32
  OrigDataType: ui32
T_210: (in fp - 0x00000008 : word32)
  Class: Eq_201
  DataType: Eq_201
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_211: (in _sin(DPB(rLoc1C, 0x40091EB8, 0), DPB(rLoc14, 0x3F689374, 0), fp - 0x00000008) : void)
  Class: Eq_211
  DataType: void
  OrigDataType: void
T_212: (in rLoc0C_23 : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_213: (in rLoc0C : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_214: (in SLICE(rArg04, word32, 32) : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in DPB(rLoc0C, SLICE(rArg04, word32, 32), 32) : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_216: (in v9_26 : real64)
  Class: Eq_216
  DataType: real64
  OrigDataType: real64
T_217: (in (real80) rLoc0C_23 : real80)
  Class: Eq_217
  DataType: real80
  OrigDataType: real80
T_218: (in (real80) rLoc0C_23 * rLoc0C_23 : real80)
  Class: Eq_218
  DataType: real80
  OrigDataType: real80
T_219: (in (real64) ((real80) rLoc0C_23 * rLoc0C_23) : real64)
  Class: Eq_216
  DataType: real64
  OrigDataType: real64
T_220: (in dwLoc20_100 : int32)
  Class: Eq_220
  DataType: int32
  OrigDataType: int32
T_221: (in 1 : int32)
  Class: Eq_220
  DataType: int32
  OrigDataType: int32
T_222: (in 0x00000000 : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in tArg14 + 0x00000000 : word32)
  Class: Eq_223
  DataType: Eq_223
  OrigDataType: (ref int32)
T_224: (in Mem0[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in 0x00000001 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in Mem0[tArg14 + 0x00000000:word32] + 0x00000001 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_227: (in 0x00000000 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in tArg14 + 0x00000000 : word32)
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: (union ((ptr32 word32) u1) ((ref int32) u0))
T_229: (in Mem115[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_224
  DataType: Eq_201
  OrigDataType: word32
T_230: (in v23_65 : int32)
  Class: Eq_230
  DataType: int32
  OrigDataType: int32
T_231: (in 0x00000001 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in dwLoc20_100 + 0x00000001 : word32)
  Class: Eq_230
  DataType: int32
  OrigDataType: int32
T_233: (in (real80) rLoc0C_23 : real80)
  Class: Eq_233
  DataType: real80
  OrigDataType: real80
T_234: (in (real80) rLoc0C_23 * v9_26 : real80)
  Class: Eq_234
  DataType: real80
  OrigDataType: real80
T_235: (in (real64) ((real80) rLoc0C_23 * v9_26) : real64)
  Class: Eq_235
  DataType: real64
  OrigDataType: real64
T_236: (in (real80) (real64) ((real80) rLoc0C_23 * v9_26) : real80)
  Class: Eq_236
  DataType: real80
  OrigDataType: real80
T_237: (in (real80) (real64) ((real80) rLoc0C_23 * v9_26) * v9_26 : real80)
  Class: Eq_237
  DataType: real80
  OrigDataType: real80
T_238: (in (real64) ((real80) (real64) ((real80) rLoc0C_23 * v9_26) * v9_26) : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_239: (in 0x00000003 : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in v23_65 + 0x00000003 : word32)
  Class: Eq_220
  DataType: int32
  OrigDataType: int32
T_241: (in rLoc14 : real64)
  Class: Eq_241
  DataType: real64
  OrigDataType: real64
T_242: (in (real80) rLoc14 : real80)
  Class: Eq_242
  DataType: real80
  OrigDataType: real80
T_243: (in (real80) v23_65 : real80)
  Class: Eq_243
  DataType: real80
  OrigDataType: real80
T_244: (in (real80) rLoc14 * (real80) v23_65 : real80)
  Class: Eq_244
  DataType: real80
  OrigDataType: real80
T_245: (in (real64) ((real80) rLoc14 * (real80) v23_65) : real64)
  Class: Eq_245
  DataType: real64
  OrigDataType: real64
T_246: (in (real80) (real64) ((real80) rLoc14 * (real80) v23_65) : real80)
  Class: Eq_246
  DataType: real80
  OrigDataType: real80
T_247: (in 0x00000001 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in v23_65 + 0x00000001 : word32)
  Class: Eq_248
  DataType: int32
  OrigDataType: int32
T_249: (in (real80) (v23_65 + 0x00000001) : real80)
  Class: Eq_249
  DataType: real80
  OrigDataType: real80
T_250: (in (real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001) : real80)
  Class: Eq_250
  DataType: real80
  OrigDataType: real80
T_251: (in (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) : real64)
  Class: Eq_251
  DataType: real64
  OrigDataType: real64
T_252: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) : real80)
  Class: Eq_252
  DataType: real80
  OrigDataType: real80
T_253: (in 0x00000002 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in v23_65 + 0x00000002 : word32)
  Class: Eq_254
  DataType: int32
  OrigDataType: int32
T_255: (in (real80) (v23_65 + 0x00000002) : real80)
  Class: Eq_255
  DataType: real80
  OrigDataType: real80
T_256: (in (real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) * (real80) (v23_65 + 0x00000002) : real80)
  Class: Eq_256
  DataType: real80
  OrigDataType: real80
T_257: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) * (real80) (v23_65 + 0x00000002)) : real64)
  Class: Eq_257
  DataType: real64
  OrigDataType: real64
T_258: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) * (real80) (v23_65 + 0x00000002)) : real80)
  Class: Eq_258
  DataType: real80
  OrigDataType: real80
T_259: (in v23_65 + 0x00000003 : word32)
  Class: Eq_259
  DataType: int32
  OrigDataType: int32
T_260: (in (real80) (v23_65 + 0x00000003) : real80)
  Class: Eq_260
  DataType: real80
  OrigDataType: real80
T_261: (in (real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) * (real80) (v23_65 + 0x00000002)) * (real80) (v23_65 + 0x00000003) : real80)
  Class: Eq_261
  DataType: real80
  OrigDataType: real80
T_262: (in (real64) ((real80) (real64) ((real80) (real64) ((real80) (real64) ((real80) rLoc14 * (real80) v23_65) * (real80) (v23_65 + 0x00000001)) * (real80) (v23_65 + 0x00000002)) * (real80) (v23_65 + 0x00000003)) : real64)
  Class: Eq_241
  DataType: real64
  OrigDataType: real64
T_263: (in (real80) rLoc0C_23 : real80)
  Class: Eq_263
  DataType: real80
  OrigDataType: real80
T_264: (in (real80) rLoc0C_23 / rLoc14 : real80)
  Class: Eq_264
  DataType: real80
  OrigDataType: real80
T_265: (in (real64) ((real80) rLoc0C_23 / rLoc14) : real64)
  Class: Eq_200
  DataType: real64
  OrigDataType: real64
T_266: (in (real64) ((real80) rLoc0C_23 / rLoc14) < rArg0C : bool)
  Class: Eq_266
  DataType: bool
  OrigDataType: bool
T_267: (in a0_12 : (ptr32 code))
  Class: Eq_267
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_268: (in 8000270C : ptr32)
  Class: Eq_268
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_269 t0000)))
T_269: (in Mem0[0x8000270C:word32] : word32)
  Class: Eq_267
  DataType: (ptr32 code)
  OrigDataType: word32
T_270: (in -1 : int32)
  Class: Eq_267
  DataType: (ptr32 code)
  OrigDataType: int32
T_271: (in a0_12 == (<anonymous> *) -1 : bool)
  Class: Eq_271
  DataType: bool
  OrigDataType: bool
T_272: (in a7_26 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in a6_27 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in a2_28 : ptr32)
  Class: Eq_274
  DataType: ptr32
  OrigDataType: ptr32
T_275: (in CVZN_29 : byte)
  Class: Eq_275
  DataType: byte
  OrigDataType: byte
T_276: (in a0_30 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in d0_31 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in Z_32 : bool)
  Class: Eq_278
  DataType: bool
  OrigDataType: bool
T_279: (in 4 : int32)
  Class: Eq_279
  DataType: int32
  OrigDataType: int32
T_280: (in a2_28 - 4 : word32)
  Class: Eq_280
  DataType: (ptr32 int32)
  OrigDataType: (ptr32 (struct (0 T_283 t0000)))
T_281: (in 0x00000000 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in a2_28 - 4 + 0x00000000 : word32)
  Class: Eq_282
  DataType: word32
  OrigDataType: word32
T_283: (in Mem0[a2_28 - 4 + 0x00000000:word32] : word32)
  Class: Eq_283
  DataType: int32
  OrigDataType: word32
T_284: (in -1 : int32)
  Class: Eq_283
  DataType: int32
  OrigDataType: int32
T_285: (in *(a2_28 - 4) != -1 : bool)
  Class: Eq_285
  DataType: bool
  OrigDataType: bool
T_286:
  Class: Eq_286
  DataType: (ptr32 code)
  OrigDataType: (struct 0004 (0 T_67 t0000))
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	uint32 dw80002726;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef void (Eq_53)();

typedef void (Eq_137)();

typedef void (Eq_170)(real64, int32);

typedef void (Eq_173)(int32);

typedef void (Eq_191)(real64);

typedef void (Eq_197)(real64, real64, Eq_201);

typedef union Eq_201 {
	word32 * u0;
	<anonymous> u1;
} Eq_201;

typedef int32 & Eq_223;

typedef union Eq_228 {
	word32 * u0;
	<anonymous> u1;
} Eq_228;

