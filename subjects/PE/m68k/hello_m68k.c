// hello_m68k.c
// Generated by decompiling hello_m68k.exe
// using Reko decompiler version 0.8.1.0.

#include "hello_m68k.h"

// 00001004: void Win32CrtStartup()
void Win32CrtStartup()
{
	__btst(d0, d1);
}

// 00001498: void fn00001498()
void fn00001498()
{
}

// 0000149C: void fn0000149C(Register word32 d0, Register word32 a5)
void fn0000149C(word32 d0, word32 a5)
{
	__syscall(43424);
	if (DPB(dwLoc0A, 0x4270, 0) == 0x00)
		*(word16 *) 0x0AF0 = 0x1A;
	else
	{
		__syscall(43118);
		__syscall(43262);
		__syscall(43282);
		__syscall(0xA930);
		__syscall(0xA9CC);
		__syscall(43387);
		__syscall(0xA850);
		__syscall(43398);
	}
	__syscall(~0x560B);
}

// 000014E8: void fn000014E8(Register word32 a5, Stack int32 dwArg02)
void fn000014E8(word32 a5, int32 dwArg02)
{
	0x00 = 0x00;
	__syscall(43424);
	if (dwLoc12 == null)
	{
		*(word16 *) 0x0AF0 = ~0x025C;
		__syscall(~0x560B);
		goto l0000159A;
	}
	else
	{
		struct Eq_n * a3_n = *dwLoc12;
		uint32 d0_n = a3_n->dw0000;
		word16 * a2_n = a5 - d0_n;
		word16 * a0_n = a2_n;
		uint32 d0_n = d0_n >> 0x01;
		if (d0_n >> 0x01 != 0x00)
		{
			do
			{
				*a0_n = 0x00;
				++a0_n;
				--d0_n;
			} while (d0_n != 0x00);
		}
		word32 a2_n = a2_n - a3_n->dw0004;
		__syscall(0xA02E);
		uint32 d0_n = a3_n->dw0008;
		word16 * a2_n = a2_n - d0_n;
		word16 * a0_n = a2_n;
		uint32 d0_n = d0_n >> 0x01;
		if (d0_n >> 0x01 != 0x00)
		{
			do
			{
				*a0_n = 0x00;
				++a0_n;
				--d0_n;
			} while (d0_n != 0x00);
		}
		ptr32 * a2_n = a2_n - a3_n->dw000C;
		struct Eq_n * a3_n = &a3_n->dw000C + 0x01 + a3_n->dw0004 / 0x0010 + a3_n->dw000C / 0x0010;
		__syscall(0xA02E);
l00001556:
		ui32 d0_n;
		ci8 v19_n = a3_n->b0000;
		++a3_n;
		uint32 d0_n = (uint32) (uint8) v19_n;
		byte CVZN_n = cond(v19_n);
		if (v19_n <= 0x00)
		{
			if (v19_n >= 0x00)
			{
				byte v23_n = a3_n->b0000;
				uip32 d0_n = SEQ(SLICE(d0_n, word24, 8), v23_n);
				if (v23_n != 0x00)
				{
					uip32 d0_n = SEQ(SLICE(__swap(SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n[0x01])), word24, 8), a3_n[0x02]);
					a3_n += 0x04;
					d0_n = SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n[0x03]) * 0x02;
l00001578:
					a2_n += d0_n;
					if (dwArg02 != 0x00 && DPB(CVZN_n, false, 0))
						*a2_n = (*a2_n + dwArg02)->ptr0002;
					else
						*a2_n += dwLoc02;
					goto l00001556;
				}
l0000159A:
				__syscall(0xA9A3);
				return;
			}
			++a3_n;
			d0_n = SEQ(SLICE(SEQ(SLICE(d0_n, word16, 16), (word16) d0_n << 0x08), word24, 8), a3_n->b0000);
		}
		d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) (d0_n * 0x02));
		goto l00001578;
	}
}

// 000015E8: void fn000015E8(Register word32 d0, Register ptr32 a5, Stack word32 dwArg04)
void fn000015E8(word32 d0, ptr32 a5, word32 dwArg04)
{
	word32 a7_n;
	word32 a6_n;
	word32 d3_n;
	byte CVZN_n;
	word32 d0_n;
	byte ZN_n;
	bool C_n;
	bool V_n;
	bool Z_n;
	word32 a0_n;
	byte CVZNX_n;
	struct Eq_n * a5_n;
	struct Eq_n * a2_n;
	(a5 + 0x0082)();
	if (d0_n == 0x00)
		return;
	int32 d3_n;
	if (a2_n - (a5_n->aFFFFF578 + 0x0A) == 0x00)
		d3_n = 0x00;
	else
	{
		if (a2_n - (a5_n->aFFFFF578 + 0x0012) != 0x00)
			return;
		d3_n = 0x01;
	}
	++a5_n->dwFFFFFAA8;
	if ((a2_n->w000C & 0x010C) != 0x00)
		return;
	if (a5_n->aFFFFF578[d3_n] == 0x00)
	{
		word32 a7_n;
		word32 a6_n;
		byte CVZN_n;
		word32 d0_n;
		byte ZN_n;
		bool C_n;
		bool V_n;
		bool Z_n;
		word32 a0_n;
		byte CVZNX_n;
		(*((char *) &a5_n->dwFFFFFAA8 + 0x05CA))();
		a5_n->aFFFFF578[d3_n] = d0_n;
		if (d0_n == 0x00)
			return;
	}
	word32 d0_n = a5_n->aFFFFF578[d3_n];
	a2_n->dw0008 = d0_n;
	a2_n->dw0000 = d0_n;
	a2_n->dw0018 = 0x0200;
	a2_n->dw0004 = 0x0200;
	a2_n->w000E |= 0x1102;
}

// 00001680: void fn00001680(Stack word32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
void fn00001680(word32 dwArg04, Eq_n * dwArg08)
{
	if (dwArg04 == 0x00)
	{
		if (!__btst(dwArg08->t000E, 0x04))
			fn00001D80(dwArg08);
	}
	else
	{
		if (__btst(dwArg08->t000E, 0x04))
			return;
		fn00001D80(dwArg08);
		dwArg08->t000E &= ~0x1100;
		dwArg08->dw0018 = 0x00;
		dwArg08->dw0000 = 0x00;
		dwArg08->dw0008 = 0x00;
	}
}

// 000016D0: void fn000016D0(Register Eq_n d0, Register word32 d6, Register (ptr32 Eq_n) a5, Stack (ptr32 byte) dwArg08)
void fn000016D0(Eq_n d0, word32 d6, Eq_n * a5, byte * dwArg08)
{
	Eq_n dwLoc0C_n = 0x00;
	uip32 d6_n = SEQ(SLICE(d6, word24, 8), *dwArg08);
	byte * dwArg08_n = dwArg08 + 0x01;
	if ((byte) d6_n != 0x00)
	{
		while (!DPB(VN, false, 0))
		{
			int32 d0_n;
			ci8 v26_n = (byte) d6_n - 0x20;
			VN = cond(v26_n);
			if (v26_n >= 0x00 && (byte) d6_n <= 0x78)
			{
				int32 d0_n = (int32) (int8) SEQ(SLICE(d0, word24, 8), (byte) d6_n);
				uip32 d0_n = SEQ(SLICE(d0_n, word24, 8), a5->aFFFFF7E8[d0_n]);
				d0_n = (int32) (int8) SEQ(SLICE(d0_n, word24, 8), (byte) d0_n & 0x0F);
			}
			else
				d0_n = 0x00;
			int32 d0_n = (word32) dwLoc0C_n.u0 + (d0_n << 0x03);
			uip32 d0_n = SEQ(SLICE(d0_n, word24, 8), a5->aFFFFF808[d0_n]);
			d0.u0 = (int32) (int8) SEQ(SLICE(d0_n, word24, 8), (byte) d0_n >> 0x04);
			dwLoc0C_n = d0;
			if (d0 <= 0x07)
			{
				uipr32 d0_n = SEQ(SLICE(d0, word16, 16), globals->a1758[(int32) (int16) d0 * 0x02]);
				word32 a7_n;
				word32 a6_n;
				word32 a4_n;
				word32 a3_n;
				word32 a2_n;
				word32 d7_n;
				word32 d6_n;
				word32 d5_n;
				word32 d4_n;
				word32 d3_n;
				word32 a5_n;
				byte CVZN_n;
				word32 a0_n;
				byte CVZNX_n;
				byte ZN_n;
				bool C_n;
				bool V_n;
				bool Z_n;
				byte VN_n;
				byte VZN_n;
				word32 d0_n;
				word32 d2_n;
				(0x1758 + (int32) ((int16) d0_n))();
				return;
			}
			d6_n = SEQ(SLICE(d6_n, word24, 8), *dwArg08_n);
			++dwArg08_n;
			if ((byte) d6_n == 0x00)
				return;
		}
	}
}

// 00001C40: void fn00001C40(Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Stack byte bArg07, Stack (ptr32 Eq_n) dwArg08, Stack (ptr32 int32) dwArg0C)
void fn00001C40(Eq_n * a5, int32 dwArg04, byte bArg07, Eq_n * dwArg08, int32 * dwArg0C)
{
	int32 d0_n;
	int32 v5_n = dwArg08->dw0004 - 0x01;
	dwArg08->dw0004 = v5_n;
	if (v5_n >= 0x00)
	{
		*dwArg08->ptr0000 = bArg07;
		byte * a0_n = dwArg08->ptr0000;
		d0_n = (int32) (int16) (uint32) (uint8) *a0_n;
		dwArg08->ptr0000 = a0_n + 0x01;
	}
	else
		d0_n = fn00001E94(a5, dwArg04, SLICE(dwArg04, byte, 24), dwArg08);
	if (d0_n != -0x01)
		++*dwArg0C;
	else
		*dwArg0C = d0_n;
}

// 00001C84: void fn00001C84(Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Stack word32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack (ptr32 int32) dwArg10)
void fn00001C84(Eq_n * a5, int32 dwArg04, word32 dwArg08, Eq_n * dwArg0C, int32 * dwArg10)
{
	Eq_n VZN_n = DPB(VZN, false, 0);
	if (!VZN_n)
	{
		do
		{
			fn00001C40(a5, dwArg04, SLICE(dwArg04, byte, 24), dwArg0C, dwArg10);
			VZN_n = DPB(VZN_n, false, 0);
		} while (VZN_n);
	}
}

// 00001CC4: void fn00001CC4(Register (ptr32 Eq_n) a5, Stack (ptr32 byte) dwArg04, Stack word32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack (ptr32 int32) dwArg10)
void fn00001CC4(Eq_n * a5, byte * dwArg04, word32 dwArg08, Eq_n * dwArg0C, int32 * dwArg10)
{
	word32 d0_n = dwArg08;
	word32 d5_n = dwArg08 - 0x01;
	Eq_n VZN_n = DPB(VZN, false, 0);
	if (!VZN_n)
	{
		byte * d3_n = dwArg04;
		do
		{
			int32 d0_n = (int32) (int8) SEQ(SLICE(d0_n, word24, 8), *d3_n);
			fn00001C40(a5, d0_n, SLICE(d0_n, byte, 24), dwArg0C, dwArg10);
			++d3_n;
			d0_n = d5_n;
			--d5_n;
			VZN_n = DPB(VZN_n, false, 0);
		} while (VZN_n);
	}
}

// 00001D0C: void fn00001D0C(Stack (ptr32 word32) dwArg04)
void fn00001D0C(word32 * dwArg04)
{
	*dwArg04 += 0x04;
}

// 00001D24: Register int32 fn00001D24(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04)
int32 fn00001D24(Eq_n * a5, Eq_n * dwArg04)
{
	if (dwArg04 == null)
		return fn00001E04(a5, 0x00);
	word32 d0_n = fn00001D80(dwArg04);
	if (d0_n != 0x00)
		return -0x01;
	bool Z_n = __btst(dwArg04->t000E, 0x06);
	if (Z_n)
		return 0x00;
	word32 a7_n;
	word32 a6_n;
	word32 a2_n;
	byte CVZN_n;
	word32 d0_n;
	bool Z_n;
	word32 d2_n;
	byte ZN_n;
	bool C_n;
	bool V_n;
	word32 a5_n;
	(*((char *) &a5->dwFFFFF800 + 0x088A))();
	return (int32) (int8) SEQ(SLICE(d0_n, word31, 8), (bool) cond(d0_n));
}

// 00001D80: Register int32 fn00001D80(Stack (ptr32 Eq_n) dwArg04)
int32 fn00001D80(Eq_n * dwArg04)
{
	struct Eq_n * d1_n = dwArg04->w000C;
	int32 d3_n = 0x00;
	struct Eq_n * a2_n = dwArg04;
	if ((d1_n & 0x03) == 0x02 && ((word16) d1_n & 0x0108) != 0x00)
	{
		int32 d0_n = dwArg04->dw0008;
		int32 d4_n = dwArg04->dw0000 - d0_n;
		if (d4_n > 0x00)
		{
			word32 a7_n;
			word32 a6_n;
			word32 d4_n;
			byte CVZN_n;
			word32 d1_n;
			word32 d0_n;
			byte ZN_n;
			bool C_n;
			bool V_n;
			word32 d2_n;
			bool Z_n;
			byte CVZNX_n;
			byte VZN_n;
			word32 a5_n;
			(a5 + 0x0092)();
			if (d0_n - d4_n == 0x00)
			{
				struct Eq_n * d0_n = a2_n->w000C;
				if (!__btst((byte) d0_n, 0x07))
				{
					struct Eq_n * d0_n;
					__bclr(d0_n, 0x01, out d0_n);
					a2_n->w000C = (cui16) d0_n;
				}
			}
			else
			{
				__bset(a2_n->dw000F, 0x05, out a2_n->dw000F);
				d3_n = -0x01;
			}
		}
	}
	a2_n->dw0000 = a2_n->dw0008;
	a2_n->dw0004 = 0x00;
	return d3_n;
}

// 00001DF4: void fn00001DF4(Register (ptr32 Eq_n) a5)
void fn00001DF4(Eq_n * a5)
{
	fn00001E04(a5, 0x01);
}

// 00001E04: Register int32 fn00001E04(Register (ptr32 Eq_n) a5, Stack int32 dwArg04)
int32 fn00001E04(Eq_n * a5, int32 dwArg04)
{
	struct Eq_n * a2_n = (char *) a5 - 2688;
	int32 d4_n = 0x00;
	int32 d5_n = 0x00;
	if ((char *) a5 - 2688 - a5->dwFFFFF800 <= 0x00)
	{
		do
		{
			if (dwArg04 == 0x01 && (a2_n->w000C & 131) != 0x00)
			{
				if (fn00001D24(a5, a2_n) != ~0x00)
					++d4_n;
			}
			else if (dwArg04 == 0x00 && !__btst(a2_n->dw000F, 0x01))
			{
				int32 d0_n = fn00001D24(a5, a2_n);
				if (d0_n == ~0x00)
					d5_n = d0_n;
			}
			++a2_n;
		} while (a2_n - a5->dwFFFFF800 <= 0x00);
	}
	if (dwArg04 != 0x01)
		d4_n = d5_n;
	return d4_n;
}

// 00001E94: Register int32 fn00001E94(Register (ptr32 Eq_n) a5, Stack int32 dwArg04, Stack byte bArg07, Stack (ptr32 Eq_n) dwArg08)
int32 fn00001E94(Eq_n * a5, int32 dwArg04, byte bArg07, Eq_n * dwArg08)
{
	struct Eq_n * d0_n = dwArg08->ptr000C;
	struct Eq_n * a3_n = dwArg08;
	int32 d3_n = dwArg08->dw0010;
	struct Eq_n * a2_n = &dwArg08->ptr000C;
	if (((word16) d0_n & 0x82) != 0x00 && !__btst((byte) d0_n, 0x06))
	{
		if (__btst((byte) d0_n, 0x00))
		{
l00001EDA:
			struct Eq_n * d0_n;
			__bset(dwArg08->ptr000C, 0x01, out d0_n);
			dwArg08->ptr000C = d0_n;
			struct Eq_n * d0_n;
			__bclr(d0_n, 0x04, out d0_n);
			dwArg08->ptr000C = d0_n;
			dwArg08->dw0004 = 0x00;
			struct Eq_n * d0_n = dwArg08->ptr000C;
			cui16 v24_n = (word16) d0_n & 0x010C;
			int32 d4_n = 0x00;
			uipr32 d0_n = SEQ(SLICE(d0_n, word16, 16), v24_n);
			if (v24_n == 0x00)
			{
				if (dwArg08 - ((char *) a5 - 2656) == 0x00 || dwArg08 - ((char *) a5 - 2624) == 0x00)
				{
					word32 a7_n;
					word32 a6_n;
					word32 d5_n;
					byte CVZN_n;
					word32 d1_n;
					byte ZN_n;
					bool C_n;
					bool V_n;
					bool Z_n;
					word32 a0_n;
					byte CVZNX_n;
					word32 d2_n;
					(*((char *) &a5->dwFFFFFAA8 + 0x05DA))();
					if (d0_n != 0x00)
						goto l00001F1C;
				}
				fn00002014(d0_n, a5, a3_n);
			}
l00001F1C:
			int32 d5_n;
			if ((a2_n->dw0000 & 0x0108) != 0x00)
			{
				byte * d0_n = a3_n->ptr0008;
				d5_n = a3_n->ptr0000 - d0_n;
				a3_n->ptr0000 = d0_n + 0x01;
				a3_n->dw0004 = a3_n->dw0018 - 0x01;
				Eq_n VZN_n = DPB(VZN, false, 0);
				if (!VZN_n)
				{
					word32 a7_n;
					word32 a6_n;
					struct Eq_n * a3_n;
					word32 d4_n;
					word32 d3_n;
					byte CVZN_n;
					int32 d0_n;
					word32 d1_n;
					byte ZN_n;
					bool C_n;
					bool V_n;
					bool Z_n;
					word32 a0_n;
					word32 a5_n;
					byte CVZNX_n;
					byte VZN_n;
					word32 d2_n;
					(*((char *) &a5->dwFFFFFAA8 + 1514))();
					*a3_n->ptr0008 = bArg07;
					d4_n = d0_n;
				}
				else
				{
					ptr32 a0_n = (char *) a5 - 0x06A8;
					bool Z_n = __btst(a0_n + d3_n, 0x05);
					if (!Z_n)
					{
						word32 a7_n;
						word32 a6_n;
						word32 d3_n;
						byte CVZN_n;
						word32 d0_n;
						word32 d1_n;
						byte ZN_n;
						bool C_n;
						bool V_n;
						bool Z_n;
						word32 a0_n;
						word32 a5_n;
						byte CVZNX_n;
						byte VZN_n;
						word32 d2_n;
						(*((char *) &a5->dwFFFFFAA8 + 1522))();
					}
					*a3_n->ptr0008 = bArg07;
				}
			}
			else
			{
				word32 a7_n;
				word32 a6_n;
				word32 a3_n;
				word32 d4_n;
				word32 d3_n;
				byte CVZN_n;
				int32 d0_n;
				word32 d1_n;
				byte ZN_n;
				bool C_n;
				bool V_n;
				bool Z_n;
				word32 a0_n;
				word32 a5_n;
				byte CVZNX_n;
				byte VZN_n;
				word32 d2_n;
				(*((char *) &a5->dwFFFFFAA8 + 1514))();
				d4_n = d0_n;
			}
			if (d4_n - d5_n == 0x00)
				return dwArg04 & 0xFF;
			__bset(a2_n->t0003, 0x05, out a2_n->t0003);
			return -0x01;
		}
		dwArg08->dw0004 = 0x00;
		d0_n = dwArg08->ptr000C;
		if (!__btst((byte) d0_n, 0x04))
		{
			dwArg08->ptr0000 = dwArg08->ptr0008;
			__bclr(dwArg08->t000F, 0x00, out dwArg08->t000F);
			goto l00001EDA;
		}
	}
	struct Eq_n * d0_n;
	__bset(d0_n, 0x05, out d0_n);
	dwArg08->ptr000C = d0_n;
	return -0x01;
}

// 00001FD8: void fn00001FD8(Register (ptr32 Eq_n) a5)
void fn00001FD8(Eq_n * a5)
{
	struct Eq_n * d4_n = (char *) a5 - 2592;
	if ((char *) a5 - 2592 - a5->dwFFFFF800 <= 0x00)
	{
		do
		{
			word32 d3_n;
			fn00002068(d4_n, out d3_n) == ~0x00;
			++d4_n;
		} while (d4_n - a5->dwFFFFF800 <= 0x00);
	}
}

// 00002014: void fn00002014(Register uipr32 d0, Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04)
void fn00002014(uipr32 d0, Eq_n * a5, Eq_n * dwArg04)
{
	++a5->dwFFFFFAA8;
	word32 a7_n;
	word32 a6_n;
	struct Eq_n * a2_n;
	byte CVZN_n;
	word32 a5_n;
	byte CVZNX_n;
	ptr32 d0_n;
	bool Z_n;
	word32 a0_n;
	word32 d2_n;
	(*((char *) &a5->dwFFFFFAA8 + 0x05CA))();
	a2_n->ptr0008 = d0_n;
	if (d0_n != 0x00)
	{
		__bset(a2_n->t000F, 0x03, out a2_n->t000F);
		a2_n->dw0018 = 0x0200;
	}
	else
	{
		__bset(a2_n->t000F, 0x02, out a2_n->t000F);
		a2_n->ptr0008 = (char *) &a2_n->t000F + 0x05;
		a2_n->dw0018 = 0x01;
	}
	a2_n->ptr0000 = a2_n->ptr0008;
	a2_n->dw0004 = 0x00;
}

// 00002068: Register int32 fn00002068(Stack (ptr32 Eq_n) dwArg04, Register out ptr32 d3Out)
int32 fn00002068(Eq_n * dwArg04, ptr32 & d3Out)
{
	int32 d0_n = dwArg04->w000C;
	int32 d3_n = -0x01;
	struct Eq_n * a2_n = dwArg04;
	if (__btst((byte) d0_n, 0x06))
	{
		if (((word16) d0_n & 131) != 0x00)
		{
			fn00001D80(dwArg04);
			word32 d0_n = fn000020F0(dwArg04);
			word32 a7_n;
			word32 a6_n;
			byte CVZN_n;
			word32 d0_n;
			bool Z_n;
			byte ZN_n;
			bool C_n;
			bool V_n;
			ptr32 a5_n;
			byte VN_n;
			word32 d2_n;
			(a5 + 0x00A2)();
			Eq_n VN_n = DPB(VN_n, false, 0);
			if (!VN_n)
				d3_n = -0x01;
			else
			{
				int32 d0_n = a2_n->dw001C;
				if (d0_n != 0x00)
				{
					word32 a7_n;
					word32 a6_n;
					word32 d3_n;
					byte CVZN_n;
					word32 a2_n;
					word32 d0_n;
					bool Z_n;
					byte ZN_n;
					bool C_n;
					bool V_n;
					ptr32 a5_n;
					byte VN_n;
					word32 d2_n;
					(a5_n + 0x00B2)();
					word32 a7_n;
					word32 a6_n;
					byte CVZN_n;
					word32 d0_n;
					bool Z_n;
					byte ZN_n;
					bool C_n;
					bool V_n;
					word32 a5_n;
					byte VN_n;
					word32 d2_n;
					(a5_n + 122)();
					a2_n->dw001C = 0x00;
				}
			}
		}
		a2_n->w000C = (cui16) 0x00;
		return d3_n;
	}
	else
	{
		dwArg04->w000C = (cui16) 0x00;
		return -0x01;
	}
}

// 000020F0: Register word32 fn000020F0(Stack (ptr32 Eq_n) dwArg04)
word32 fn000020F0(Eq_n * dwArg04)
{
	word32 d0_n = dwArg04->w000C;
	if (((word16) d0_n & 131) != 0x00)
	{
		bool Z_n = __btst((byte) d0_n, 0x03);
		if (!Z_n)
		{
			word32 a7_n;
			word32 a6_n;
			struct Eq_n * a2_n;
			byte CVZN_n;
			word32 d1_n;
			byte ZN_n;
			bool C_n;
			bool V_n;
			bool Z_n;
			word32 a5_n;
			word32 d2_n;
			(a5 + 122)();
			__bclr(a2_n->t000F, 0x03, out a2_n->t000F);
			a2_n->dw0000 = 0x00;
			a2_n->dw0008 = 0x00;
			a2_n->dw0004 = 0x00;
		}
	}
	return d0_n;
}

// 000021F0: void fn000021F0(Register (ptr32 Eq_n) a5)
void fn000021F0(Eq_n * a5)
{
	struct Eq_n * d0_n = a5->ptrFFFFFAA0->ptr001C;
	struct Eq_n * a1_n = d0_n;
	if (d0_n != null)
	{
		int32 d1_n;
		for (d1_n = 0x00; d1_n < 0x03; ++d1_n)
		{
			word32 d0_n = *a1_n->ptr0004;
			if (d0_n != 0x45434F4E)
			{
				if (d0_n == 0x46535953)
				{
					a5->aFFFFF958[d1_n] |= 0x01;
					struct Eq_n * a0_n = *a1_n->ptr0008;
					struct Eq_n * a0_n = SEQ(SLICE(a0_n, word16, 16), a0_n->w0002);
					a0_n[d1_n * 0x04] = (struct Eq_n) a0_n;
				}
			}
			else
			{
				a5->aFFFFF958[d1_n] |= 0x41;
				a1_n[d1_n * 0x04 / 0x0014] = (struct Eq_n) a1_n;
			}
			++a1_n;
		}
	}
}

// 00002264: void fn00002264(Register word32 d1, Stack (ptr32 byte) dwArg04)
void fn00002264(word32 d1, byte * dwArg04)
{
	if (dwArg04 != null)
	{
		byte v11_n = *dwArg04;
		uip32 d1_n = SEQ(SLICE(d1, word24, 8), v11_n);
		if (v11_n != 0x00)
		{
			byte * a2_n = dwArg04;
			uint32 d0_n;
			byte * a1_n = dwArg04 + 0x01;
			for (d0_n = (uint32) (uint8) (byte) d1_n; d0_n != 0x00; --d0_n)
			{
				*a2_n = *a1_n;
				++a1_n;
				++a2_n;
			}
			*a2_n = 0x00;
		}
	}
}

// 00002294: void fn00002294(Register (ptr32 Eq_n) a5, Stack word32 dwArg04)
void fn00002294(Eq_n * a5, word32 dwArg04)
{
	fn00002354(a5, dwArg04, 0x00, 0x00, 0x00);
}

// 000022C4: void fn000022C4(Register ptr32 a5)
void fn000022C4(ptr32 a5)
{
	fn000023B4(a5 + -744, a5 + -0x02E4);
	word32 a0_n = fn000023B4(a5 + -0x02F0, a5 + -0x02EC);
	word32 a7_n;
	word32 a6_n;
	word32 a2_n;
	byte CVZN_n;
	ptr32 a5_n;
	bool Z_n;
	bool C_n;
	bool N_n;
	bool V_n;
	word32 a1_n;
	word32 d0_n;
	word32 a0_n;
	byte ZN_n;
	(a5 + 0x00C2)();
	0x00 = 0x00;
	word32 dwLoc16_n = DPB(dwLoc16, 0xA1AD, 8);
	word32 a7_n;
	word32 a6_n;
	word32 a2_n;
	byte CVZN_n;
	struct Eq_n * a5_n;
	bool Z_n;
	bool C_n;
	bool N_n;
	bool V_n;
	word32 a1_n;
	word32 d0_n;
	word32 a0_n;
	byte ZN_n;
	(a5_n + 0x00C2)();
	if (a2_n - dwLoc16_n != 0x00)
	{
		__syscall(0xA1AD);
		if (false)
			a5_n->dwFFFFF948 = a0_n;
	}
}

// 00002354: void fn00002354(Register (ptr32 Eq_n) a5, Stack word32 dwArg04, Stack int32 dwArg08, Stack int32 dwArg0C, Stack byte bArg0F)
void fn00002354(Eq_n * a5, word32 dwArg04, int32 dwArg08, int32 dwArg0C, byte bArg0F)
{
	a5->bFFFFFA9C = bArg0F;
	if (dwArg08 == 0x00)
	{
		if (a5->ptrFFFFFD3C != null)
			fn000023B4(a5->ptrFFFFFD3C, a5->tFFFFFD38);
		fn000023B4((char *) &a5->ptrFFFFFAA0 + 0x0280, (char *) &a5->ptrFFFFFAA0 + 0x0288);
	}
	word32 a0_n = fn000023B4((char *) &a5->ptrFFFFFAA0 + 0x028C, (char *) &a5->ptrFFFFFAA0 + 656);
	if (dwArg0C == 0x00)
	{
		if (a5->ptrFFFFFAA0 != null)
			a5->ptrFFFFFAA0->dw000E = dwArg04;
		word32 a7_n;
		word32 a6_n;
		word32 a5_n;
		byte CVZN_n;
		byte ZN_n;
		bool C_n;
		bool V_n;
		bool Z_n;
		word32 a0_n;
		(*((char *) &a5->ptrFFFFFD3C + 0x0326))();
	}
}

// 000023B4: Register (ptr32 word32) fn000023B4(Stack (ptr32 word32) dwArg04, Stack Eq_n dwArg08)
word32 * fn000023B4(word32 * dwArg04, Eq_n dwArg08)
{
	Eq_n d4_n = dwArg08;
	word32 * d3_n = dwArg04;
	if (dwArg08 - dwArg04 > 0x00)
	{
		do
		{
			a0 = d3_n;
			<anonymous> * d0_n = *d3_n;
			if (d0_n != null && d0_n != (<anonymous> *) ~0x00)
			{
				word32 a7_n;
				word32 a6_n;
				word32 d5_n;
				byte CVZN_n;
				byte CZ_n;
				word32 d0_n;
				bool Z_n;
				byte CVZNX_n;
				d0_n();
			}
			++d3_n;
		} while (d4_n - d3_n > 0x00);
	}
	return a0;
}

// 000023F8: void fn000023F8(Register Eq_n a5, Stack ptr32 dwArg04)
void fn000023F8(Eq_n a5, ptr32 dwArg04)
{
	fn00002418(a5);
	fn0000243C(a5, dwArg04);
	<anonymous> * a0_n = *((word32) a5 - 1288);
	word32 a7_n;
	word32 a6_n;
	byte CVZN_n;
	word32 a5_n;
	word32 a0_n;
	a0_n();
}

// 00002418: void fn00002418(Register Eq_n a5)
void fn00002418(Eq_n a5)
{
	fn0000243C(a5, 252);
	<anonymous> * a0_n = *((word32) a5 - 1012);
	if (a0_n != null)
	{
		word32 a7_n;
		word32 a6_n;
		word32 a0_n;
		word32 d0_n;
		byte CVZN_n;
		bool Z_n;
		a0_n();
	}
	fn0000243C(a5, 0xFF);
}

// 0000243C: void fn0000243C(Register Eq_n a5, Stack ptr32 dwArg04)
void fn0000243C(Eq_n a5, ptr32 dwArg04)
{
	int32 d1_n = 0x00;
	struct Eq_n * d2_n = (word32) a5 - 0x044C;
	while (dwArg04 - d2_n->dw0000 != 0x00)
	{
		++d2_n;
		++d1_n;
		if (d2_n - (a5 + -1012) >=u 0x00)
			break;
	}
	if (dwArg04 - *((word32) a5 + (d1_n * 0x08 - 0x044C)) == 0x00)
	{
		byte * a0_n = *((word32) a5 + (d1_n * 0x08 - 0x0448));
		byte * a1_n = a0_n;
		do
		{
			a1_n = a1_n + 0x01;
			byte * a1_n = a1_n;
		} while (*a1_n != 0x00);
		word32 a7_n;
		word32 a6_n;
		word32 a2_n;
		byte CVZN_n;
		word32 a1_n;
		word32 a5_n;
		word32 d1_n;
		word32 a0_n;
		word32 d2_n;
		word32 d0_n;
		bool Z_n;
		byte CVZNX_n;
		bool C_n;
		byte ZN_n;
		bool V_n;
		(a5 + 0x0092)();
	}
}

// 000024B0: void fn000024B0(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04)
void fn000024B0(Eq_n * a5, Eq_n dwArg04)
{
	fn000024C4(a5, fp - 0x04, dwArg04, a5->dwFFFFFAC4);
}

// 000024C4: void fn000024C4(Register (ptr32 Eq_n) a5, Register ptr32 a6, Stack Eq_n dwArg04, Stack word32 dwArg08)
void fn000024C4(Eq_n * a5, ptr32 a6, Eq_n dwArg04, word32 dwArg08)
{
	if (dwArg04 > -0x0020)
		return;
	uipr32 d3_n = SEQ(SLICE((word32) dwArg04.u1 + 0x03, word16, 16), (word16) (dwArg04 + 0x03) & ~0x03);
	do
	{
		*(fp - 0x10) = d3_n;
		word32 d4_n;
		if (fn00002510(a5, fp - 0x04, dwArg00, out d4_n) != 0x00 || d4_n == 0x00)
			return;
		*(fp - 0x10) = d3_n;
	} while (fn00002644(a5, dwArg00) != 0x00);
}

// 00002510: Register int32 fn00002510(Register (ptr32 Eq_n) a5, Register ptr32 a6, Stack (ptr32 Eq_n) dwArg04, Register out ptr32 d4Out)
int32 fn00002510(Eq_n * a5, ptr32 a6, Eq_n * dwArg04, ptr32 & d4Out)
{
	*d4Out = d4;
	Eq_n a0_n;
	struct Eq_n * d0_n = fn000027B0(a5, dwArg04, out a0_n);
	struct Eq_n * a2_n = d0_n;
	if (d0_n == null)
	{
		if (fn000028A0(a0_n, d0_n, a5, fp - 0x04, dwArg04) == -0x01)
			return 0x00;
		*(fp - 0x10) = (struct Eq_n **) dwArg04;
		word32 a0_n;
		struct Eq_n * d0_n = fn000027B0(a5, dwArg00, out a0_n);
		a2_n = d0_n;
		if (d0_n == null)
			fn000027A0();
	}
	struct Eq_n * d0_n = a2_n->ptr0000->ptr0004;
	uipr32 d1_n = a2_n->dw0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - dwArg04 != 0x04)
	{
		*(fp - 0x10) = (struct Eq_n **) dwArg04;
		*(fp - 0x14) = (struct Eq_n **) a2_n;
		struct Eq_n * d0_n = fn000025B4(a5, dwArg00, dwArg04);
		if (d0_n != null)
		{
			struct Eq_n * d0_n;
			__bclr(d0_n->ptr0004, 0x01, out d0_n);
			struct Eq_n * d0_n;
			__bset(d0_n, 0x00, out d0_n);
			d0_n->ptr0004 = d0_n;
		}
	}
	uipr32 d0_n = a2_n->dw0004;
	a2_n->dw0004 = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03);
	a5->ptrFFFFFACC = a2_n->ptr0000;
	uipr32 d0_n = a2_n->dw0004;
	return SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) + 0x04;
}

// 000025B4: Register (ptr32 Eq_n) fn000025B4(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack (ptr32 Eq_n) dwArg08)
Eq_n * fn000025B4(Eq_n * a5, Eq_n * dwArg04, Eq_n * dwArg08)
{
	struct Eq_n * a0_n = dwArg04->ptr0000;
	struct Eq_n * d0_n = a0_n->ptr0004;
	word32 d1_n = dwArg04->dw0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg08 <= 0x00)
		return null;
	word32 a0_n;
	struct Eq_n * d0_n = fn0000273C(a0_n, a5, out a0_n);
	if (d0_n == null)
		return null;
	word32 d0_n = dwArg04->dw0004;
	struct Eq_n * d0_n = dwArg08 + SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) / 0x08;
	d0_n->ptr0004 = (struct Eq_n *) &d0_n->ptr0004;
	d0_n->ptr0004 = d0_n;
	d0_n->ptr0000 = dwArg04->ptr0000;
	dwArg04->ptr0000 = d0_n;
	return d0_n;
}

// 00002610: void fn00002610(Register (ptr32 Eq_n) a5, Stack word32 dwArg04)
void fn00002610(Eq_n * a5, word32 dwArg04)
{
	a5->dwFFFFFD34 = dwArg04;
}

// 00002644: Register int32 fn00002644(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04)
int32 fn00002644(Eq_n * a5, Eq_n * dwArg04)
{
	<anonymous> * a0_n = a5->ptrFFFFFD34;
	if (a0_n == null)
		return 0x00;
	word32 a7_n;
	word32 a6_n;
	word32 a5_n;
	word32 a0_n;
	word32 d0_n;
	byte CVZN_n;
	bool Z_n;
	byte ZN_n;
	bool C_n;
	bool V_n;
	a0_n();
	if (d0_n == 0x00)
		return 0x00;
	return 0x01;
}

// 0000273C: Register (ptr32 Eq_n) fn0000273C(Register (ptr32 Eq_n) a0, Register (ptr32 Eq_n) a5, Register out ptr32 a0Out)
Eq_n * fn0000273C(Eq_n * a0, Eq_n * a5, ptr32 & a0Out)
{
	struct Eq_n * d0_n;
	if (a5->ptrFFFFFAD0 == null)
	{
		word32 a0_n;
		d0_n = fn0000275C(a0, a5, out a0_n);
		if (d0_n == null)
			return d0_n;
	}
	d0_n = a5->ptrFFFFFAD0;
	a5->ptrFFFFFAD0 = d0_n->ptr0000;
	word32 a0_n;
	*a0Out = d0_n;
	return d0_n;
}

// 0000275C: Register int32 fn0000275C(Register (ptr32 Eq_n) a0, Register (ptr32 Eq_n) a5, Register out ptr32 a0Out)
int32 fn0000275C(Eq_n * a0, Eq_n * a5, ptr32 & a0Out)
{
	*a0Out = a0;
	__syscall(0xA11E);
	if (a0 == null)
		return 0x00;
	a5->ptrFFFFFAD0 = a0;
	struct Eq_n * d0_n = a0;
	struct Eq_n * d1_n = (char *) &a0->ptr0004 + 0x04;
	if (&a0->dw0FF8 - a0 > 0x00)
	{
		do
		{
			d0_n->ptr0000 = d1_n;
			d0_n = d1_n;
			d1_n = (struct Eq_n *) ((char *) &d1_n->ptr0004 + 0x04);
			struct Eq_n * d1_n = d1_n;
		} while (&a0->dw0FF8 - d1_n > 0x00);
	}
	a0->dw0FF8 = 0x00;
	word32 a0_n;
	*a0Out = (word32 *) &a0->dw0FF8;
	return 0x01;
}

// 000027A0: void fn000027A0()
void fn000027A0()
{
	word32 a7_n;
	word32 a6_n;
	word32 d2_n;
	byte CVZN_n;
	word32 a5_n;
	(a5 + 0x005A)();
}

// 000027B0: Register (ptr32 Eq_n) fn000027B0(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Register out ptr32 a0Out)
Eq_n * fn000027B0(Eq_n * a5, Eq_n * dwArg04, ptr32 & a0Out)
{
	*a0Out = a0;
	struct Eq_n * a2_n = a5->ptrFFFFFACC;
	struct Eq_n * a1_n = null;
	if ((char *) &a5->ptrFFFFFAD0 + 0x04 - a2_n != 0x00)
	{
		do
		{
			ui32 * a4_n = &a2_n->ptr0004;
			if ((*a4_n & 0x03) == 0x01)
			{
				while (true)
				{
					struct Eq_n * a0_n = a2_n->ptr0000;
					*a0Out = a0_n;
					struct Eq_n * d0_n = a0_n->ptr0004;
					ui32 d3_n = *a4_n;
					if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d3_n, word16, 16), (word16) d3_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
						break;
					if ((d0_n & 0x03) != 0x01)
						goto l0000280C;
					a2_n->ptr0000 = a0_n->ptr0000;
					a0_n->ptr0000 = a5->ptrFFFFFAD0;
					a5->ptrFFFFFAD0 = a0_n;
				}
l00002880:
				a1_n = a2_n;
				return a1_n;
			}
l0000280C:
			a2_n = a2_n->ptr0000;
		} while (a2_n - ((char *) (&a5->ptrFFFFFAD0) + 0x04) != 0x00);
	}
	a2_n = a5->ptrFFFFFAC8;
	if (a2_n - a5->ptrFFFFFACC == 0x00)
		return a1_n;
	do
	{
		ui32 * a3_n = &a2_n->ptr0004;
		if ((*a3_n & 0x03) == 0x01)
		{
			do
			{
				struct Eq_n * a0_n = a2_n->ptr0000;
				*a0Out = a0_n;
				struct Eq_n * d3_n = a0_n->ptr0004;
				ui32 d1_n = *a3_n;
				if (SEQ(SLICE(d3_n, word16, 16), (word16) d3_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
					goto l00002880;
				if ((d3_n & 0x03) != 0x01)
					goto l0000288C;
				a2_n->ptr0000 = a0_n->ptr0000;
				a0_n->ptr0000 = a5->ptrFFFFFAD0;
				a5->ptrFFFFFAD0 = a0_n;
			} while (a0_n - a5->ptrFFFFFACC != 0x00);
			a5->ptrFFFFFACC = a2_n;
			struct Eq_n * a0_n = a2_n->ptr0000;
			*a0Out = a0_n;
			struct Eq_n * d0_n = a0_n->ptr0004;
			ui32 d1_n = *a3_n;
			if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - dwArg04 >= 0x00)
				goto l00002880;
			return a1_n;
		}
l0000288C:
		a2_n = a2_n->ptr0000;
	} while (a2_n - a5->ptrFFFFFACC != 0x00);
	return null;
}

// 000028A0: Register int32 fn000028A0(Register Eq_n a0, Register (ptr32 Eq_n) a2, Register (ptr32 Eq_n) a5, Register ptr32 a6, Stack (ptr32 Eq_n) dwArg04)
int32 fn000028A0(Eq_n a0, Eq_n * a2, Eq_n * a5, ptr32 a6, Eq_n * dwArg04)
{
	int32 d4_n = a5->dwFFFFFAF4;
	uipr32 a2_n = SEQ(SLICE(a2, word16, 16), 0x10);
	int32 d5_n = -0x01;
	uipr32 d3_n = SEQ(SLICE((char *) &dwArg04->dw0004 + 0x03, word16, 16), (word16) (dwArg04 + 0x07) & ~0x03);
	if (d4_n - a5->dwFFFFFAE0 < 0x00)
	{
		int32 d7_n = d4_n << 0x04;
		do
		{
			if (*((word32) *a5->tFFFFFADC + d7_n) != 0x00)
			{
				*(fp - 0x20) = d3_n;
				*(fp - 0x24) = d4_n;
				if (fn00002A54(a5, dwArg00, dwArg04) != ~0x00)
				{
					a5->dwFFFFFAF4 = d4_n;
					return 0x00;
				}
			}
			a0 = *a5->tFFFFFADC;
			if (*((word32) a0 + d7_n) == 0x00)
			{
				d5_n = d4_n;
				break;
			}
			++d4_n;
			d7_n += a2_n;
		} while (d4_n - a5->dwFFFFFAE0 < 0x00);
	}
	if (d5_n != -0x01)
	{
l000029B4:
		*(fp - 0x20) = d3_n;
		*(fp - 0x24) = d5_n;
		return fn000029C8(a0, a5, fp - 0x04, dwArg00, dwArg04);
	}
	if (a5->tFFFFFADC != 0x00)
	{
		a0 = a5->tFFFFFADC;
		__syscall(0xA024);
	}
	if (a5->tFFFFFADC != 0x00)
	{
		a0 = a5->tFFFFFAF0;
		if (*a0 == 0x00)
			goto l00002974;
	}
	__syscall(0xA122);
	if (a0 == 0x00)
		return -0x01;
	__syscall(41001);
	if (a5->tFFFFFADC != 0x00)
	{
		__syscall(0xA02E);
		__syscall(0xA023);
	}
	a5->tFFFFFADC = a0;
l00002974:
	a0 = (word32) *a5->tFFFFFADC + (a5->dwFFFFFAE0 << 0x04);
	int32 d0_n = 0x07;
	do
	{
		*a0 = 0x00;
		struct Eq_n * a0_n = (word32) a0 + 0x04;
		a0_n->dw0000 = 0x00;
		a0_n->dw0004 = 0x00;
		a0_n->dw0008 = 0x00;
		a0_n->dw000C = 0x00;
		a0_n->dw0010 = 0x00;
		a0_n->dw0014 = 0x00;
		a0_n->dw0018 = 0x00;
		a0_n->dw001C = 0x00;
		a0_n->dw0020 = 0x00;
		a0_n->dw0024 = 0x00;
		a0_n->dw0028 = 0x00;
		a0_n->dw002C = 0x00;
		a0_n->dw0030 = 0x00;
		a0_n->dw0034 = 0x00;
		a0_n->dw0038 = 0x00;
		word16 v49_n = (word16) d0_n;
		a0 = &a0_n->dw0038 + 0x01;
		d0_n = SEQ(SLICE(d0_n, word16, 16), v49_n - 0x01);
	} while (v49_n != 0x00);
	d5_n = a5->dwFFFFFAE0;
	a5->dwFFFFFAE0 += 0x0020;
	goto l000029B4;
}

// 000029C8: Register int32 fn000029C8(Register Eq_n a0, Register (ptr32 Eq_n) a5, Register ptr32 a6, Stack ui32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
int32 fn000029C8(Eq_n a0, Eq_n * a5, ptr32 a6, ui32 dwArg04, Eq_n * dwArg08)
{
	word32 d4_n = a5->dwFFFFFAEC;
	struct Eq_n * d4_n = SEQ(SLICE(d4_n + 0x0FFF, word16, 16), (word16) (d4_n + 0x0FFF) & 0xF000);
	if (d4_n - dwArg08 < 0x00)
		d4_n = dwArg08;
	int32 d0_n;
	__syscall(0xA11E);
	if (a0 != 0x00)
	{
		word32 a1_n = *a5->tFFFFFADC;
		if (((word16) a0 & 0x03) != 0x00)
			*((word32) a0 + dwArg04 * 0x10) = SEQ(SLICE((word32) a0 + 0x03, word16, 16), (word16) (a0 + 0x03) & ~0x03);
		else
			*((word32) a0 + dwArg04 * 0x10) = a0;
		struct Eq_n * a1_n = a1_n + (dwArg04 << 0x04);
		a1_n->t000C = a0;
		a1_n->ptr0008 = d4_n;
		a1_n->dw0004 = 0x00;
		d0_n = fn00002A54(a5, dwArg04, dwArg08);
		if (d0_n == 0x00)
			return d0_n;
		*(fp - 0x14) = dwArg04;
		fn00002AE0(a2, a5, dwArg00);
	}
	d0_n = -0x01;
	return d0_n;
}

// 00002A54: Register int32 fn00002A54(Register (ptr32 Eq_n) a5, Stack ui32 dwArg04, Stack (ptr32 Eq_n) dwArg08)
int32 fn00002A54(Eq_n * a5, ui32 dwArg04, Eq_n * dwArg08)
{
	struct Eq_n * a2_n = (word32) *a5->tFFFFFADC + (dwArg04 << 0x04);
	uipr32 d4_n = a2_n->dw0008;
	word32 d1_n = a2_n->dw0004;
	up32 d0_n = d4_n - d1_n;
	up32 d3_n = SEQ(SLICE((char *) &dwArg08->ptr0000 + 0x03, word16, 16), (word16) (dwArg08 + 0x03) & ~0x03);
	struct Eq_n * a1_n = a2_n->dw0000 + d1_n;
	if (d3_n - d0_n > 0x00)
	{
		__syscall(0xA020);
		word32 d4_n = d4_n - d0_n + d3_n;
		uipr32 d4_n = SEQ(SLICE(d4_n + 0x04, word16, 16), (word16) (d4_n + 0x04) & ~0x03);
		a2_n = (word32) *a5->tFFFFFADC + (dwArg04 << 0x04);
		if (*a5->tFFFFFAF0 != 0x00)
			return -0x01;
		a2_n->dw0008 = d4_n;
		a1_n = a2_n->dw0000 + a2_n->dw0004;
	}
	a2_n->dw0004 += d3_n;
	if (fn00002BB4(a5, a1_n, d3_n) != 0x00)
		fn000027A0();
	return 0x00;
}

// 00002AE0: void fn00002AE0(Register (arr Eq_n) a2, Register (ptr32 Eq_n) a5, Stack ui32 dwArg04)
void fn00002AE0(Eq_n a2[], Eq_n * a5, ui32 dwArg04)
{
	if (*((word32) *a5->tFFFFFADC + dwArg04 * 0x10) != 0x00)
		__syscall(0xA01F);
	a2[dwArg04].dw0000 = 0x00;
	a2[dwArg04].dw0004 = 0x00;
	a2[dwArg04].dw0008 = 0x00;
}

// 00002B18: void fn00002B18(Register (ptr32 Eq_n) a5, Stack Eq_n dwArg04)
void fn00002B18(Eq_n * a5, Eq_n dwArg04)
{
	if (dwArg04 != 0x00)
	{
		struct Eq_n * a2_n = *(dwArg04 - 0x04);
		struct Eq_n * d1_n = a2_n->ptr0004;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - (dwArg04 - 0x04) != 0x00)
			fn000027A0();
		struct Eq_n * d0_n;
		__bclr(a2_n->ptr0004, 0x01, out d0_n);
		struct Eq_n * d0_n;
		__bset(d0_n, 0x00, out d0_n);
		a2_n->ptr0004 = d0_n;
		if (a5->tFFFFFAE4 != -0x01 && d0_n - (a5->ptrFFFFFACC)->ptr0004 < 0x00)
		{
			word32 d1_n = a2_n->ptr0000->dw0004;
			if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - 0x04 - a5->tFFFFFAE4 >= 0x00)
				a5->ptrFFFFFACC = a2_n;
		}
	}
}

// 00002BB4: Register int32 fn00002BB4(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack up32 dwArg08)
int32 fn00002BB4(Eq_n * a5, Eq_n * dwArg04, up32 dwArg08)
{
	struct Eq_n *** dwLoc1C_n = fp + ~0x17;
	struct Eq_n * a0_n;
	struct Eq_n * d0_n = fn0000273C(fp + ~0x17, a5, out a0_n);
	if (d0_n != null)
	{
		struct Eq_n * a0_n;
		if (fn0000273C(a0_n, a5, out a0_n) == null)
			goto l00002DE8;
		word32 a0_n;
		if (fn0000273C(a0_n, a5, out a0_n) != null)
		{
			struct Eq_n * a3_n;
			up32 d0_n = fn00002EA8(a5, dwArg04, fp + ~0x07);
			if (d0_n == 0x00)
			{
				if ((dwLoc08->ptr0004 & 0x03) != 0x02)
					goto l00002DE8;
				a3_n = dwLoc08;
			}
			else
			{
				a3_n = d0_n;
				dwLoc1C_n = fp + ~0x13;
			}
			a3_n->ptr0004 = dwArg04;
			struct Eq_n * d1_n;
			__bclr(dwArg04, 0x01, out d1_n);
			struct Eq_n * d1_n;
			bool Z_n = __bset(d1_n, 0x00, out d1_n);
			a3_n->ptr0004 = d1_n;
			dwArg04->ptr0000 = a3_n;
			if (d0_n + 0x03 <= 0x03)
			{
				uipr32 d0_n = SEQ(SLICE(d0_n + 0x03, word16, 16), globals->a2C58[(int32) (int16) (d0_n + 0x03) * 0x02]);
				word32 a7_n;
				word32 a6_n;
				word32 a2_n;
				byte CVZN_n;
				word32 a3_n;
				word32 d2_n;
				word32 a0_n;
				int32 d0_n;
				bool Z_n;
				byte ZN_n;
				bool C_n;
				bool V_n;
				word32 d1_n;
				word32 a5_n;
				byte CVZNX_n;
				word32 a1_n;
				byte CZ_n;
				(11352 + (int32) ((int16) d0_n))();
				return d0_n;
			}
			if ((dwLoc08->ptr0004 & 0x03) == 0x02)
			{
				if ((char *) &a5->ptrFFFFFAD0 + 0x04 - dwLoc08->ptr0000 == 0x00)
				{
					struct Eq_n * d0_n = a3_n->ptr0004;
					up32 d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) + dwArg08;
					if (d0_n - a5->dwFFFFFAD8 > 0x00)
						a5->dwFFFFFAD8 = d0_n;
				}
				fn00002E18(a3_n, dwArg08, dwLoc08->ptr0000, fp + ~0x1B);
				struct Eq_n * d0_n = dwLoc08->ptr0000->ptr0004;
				struct Eq_n * d1_n = dwLoc08->ptr0004;
				up32 d0_n = SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03);
				fn00002E18(dwLoc08, d0_n, a3_n, fp + ~0x1B);
				struct Eq_n * d0_n = a5->ptrFFFFFACC->ptr0004;
				if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 > 0x00)
				{
					struct Eq_n * d0_n = a3_n->ptr0000->ptr0004;
					struct Eq_n * d1_n = a3_n->ptr0004;
					if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - 0x04 - a5->dwFFFFFAE4 >= 0x00)
						a5->ptrFFFFFACC = a3_n;
				}
				return 0x00;
			}
		}
	}
l00002DE8:
	if (*dwLoc1C_n != 0x00)
	{
		do
		{
			**dwLoc1C_n = (struct Eq_n ***) a5->ptrFFFFFAD0;
			a5->ptrFFFFFAD0 = (struct Eq_n *) *dwLoc1C_n;
			struct Eq_n *** v30_n = (char *) dwLoc1C_n + 0x04;
			dwLoc1C_n = v30_n;
		} while (*v30_n != 0x00);
	}
	return -0x01;
}

// 00002E18: void fn00002E18(Stack (ptr32 Eq_n) dwArg04, Stack up32 dwArg08, Stack (ptr32 Eq_n) dwArg0C, Stack (ptr32 (ptr32 (ptr32 Eq_n))) dwArg10)
void fn00002E18(Eq_n * dwArg04, up32 dwArg08, Eq_n * dwArg0C, Eq_n * * * dwArg10)
{
	struct Eq_n * d2_n = dwArg04->ptr0004;
	struct Eq_n * a2_n = dwArg04;
	if ((d2_n & 0x03) != 0x02)
	{
		struct Eq_n * d1_n = dwArg0C->ptr0004;
		if ((d1_n & 0x03) == 0x02)
		{
			struct Eq_n * d2_n = SEQ(SLICE(d2_n, word16, 16), (word16) d2_n & ~0x03) + dwArg08;
			dwArg0C->ptr0004 = d2_n;
			struct Eq_n * d2_n;
			__bclr(d2_n, 0x00, out d2_n);
			struct Eq_n * d2_n;
			__bset(d2_n, 0x01, out d2_n);
			dwArg0C->ptr0004 = d2_n;
			dwArg04->ptr0000 = dwArg0C;
			return;
		}
		struct Eq_n * d2_n = SEQ(SLICE(d2_n, word16, 16), (word16) d2_n & ~0x03) + dwArg08;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - d2_n != 0x00)
		{
			struct Eq_n ** a0_n = *dwArg10;
			struct Eq_n * v36_n = *a0_n;
			*dwArg10 = (struct Eq_n ***) ((char *) a0_n + 0x04);
			v36_n->ptr0004 = d2_n;
			struct Eq_n * d2_n;
			__bclr(d2_n, 0x00, out d2_n);
			struct Eq_n * d2_n;
			__bset(d2_n, 0x01, out d2_n);
			v36_n->ptr0004 = d2_n;
			dwArg04->ptr0000 = v36_n;
			a2_n = v36_n;
		}
	}
	a2_n->ptr0000 = dwArg0C;
}

// 00002EA8: Register int32 fn00002EA8(Register (ptr32 Eq_n) a5, Stack (ptr32 Eq_n) dwArg04, Stack (ptr32 (ptr32 Eq_n)) dwArg08)
int32 fn00002EA8(Eq_n * a5, Eq_n * dwArg04, Eq_n * * dwArg08)
{
	if ((char *) &a5->ptrFFFFFAD0 + 0x04 - a5->ptrFFFFFAC8 == 0x00)
		return -0x03;
	struct Eq_n * d0_n = a5->ptrFFFFFAC8->ptr0004;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 > 0x00)
		return -0x01;
	up32 d0_n = a5->dwFFFFFAD8;
	if (SEQ(SLICE(d0_n, word16, 16), (word16) d0_n & ~0x03) - dwArg04 <= 0x00)
		return -0x02;
	struct Eq_n * a1_n = a5->ptrFFFFFAC8;
	while (true)
	{
		struct Eq_n * a0_n = a1_n->ptr0000;
		struct Eq_n * d1_n = a0_n->ptr0004;
		if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - dwArg04 > 0x00)
			break;
		a1_n = a0_n;
	}
	*dwArg08 = (struct Eq_n **) a1_n;
	struct Eq_n * d1_n = a1_n->ptr0004;
	int32 d0_n = 0x00;
	if (SEQ(SLICE(d1_n, word16, 16), (word16) d1_n & ~0x03) - dwArg04 != 0x00)
		d0_n = 0x01;
	return d0_n;
}

// 00003340: void fn00003340(Register word32 d0, Register word32 d1, Register (ptr32 Eq_n) a5, Stack word16 wArg06)
void fn00003340(word32 d0, word32 d1, Eq_n * a5, word16 wArg06)
{
	uipr32 d1_n = SEQ(SLICE(d1, word16, 16), wArg06);
	a5->dwFFFFF940 = (int32) (int16) SEQ(SLICE(d0, word16, 16), (word16) d1_n);
	int32 d2_n = 0x00;
	struct Eq_n * d0_n = &a5->dwFFFFF940 + 111;
	do
	{
		if ((word16) d1_n - d0_n->w0000 == 0x00)
		{
			a5->tFFFFF93C.u1 = (uint32) (uint16) a5->aFFFFFAFE[d2_n].w0000;
			return;
		}
		++d0_n;
		++d2_n;
	} while (d0_n - (a5 + -0x044C) <u 0x00);
	a5->tFFFFF93C.u0 = 22;
}

