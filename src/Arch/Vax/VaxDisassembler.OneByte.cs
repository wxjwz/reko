﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Reko.Core;

namespace Reko.Arch.Vax
{
    public partial class VaxDisassembler
    {
        // http://www2.hmc.edu/www_common/OVMS072-OLD/72final/4515/4515pro_038.html#mnemonics

        private static OpRec[] oneByteInstructions = new[]
        {
 /* 00 */ new OpRec(Opcode.halt, ""), 
 /* 01 */ new OpRec(Opcode.nop, ""), 
 /* 02 */ new OpRec(Opcode.rei, ""), 
 /* 03 */ new OpRec(Opcode.bpt, ""), 
 /* 04 */ new OpRec(Opcode.ret, ""), 
 /* 05 */ new OpRec(Opcode.rsb, ""), 
 /* 06 */ new OpRec(Opcode.ldpctx, ""), 
 /* 07 */ new OpRec(Opcode.svpctx, ""), 
 /* 08 */ new OpRec(Opcode.cvtps, "rw,ab,rw,ab"), 
 /* 09 */ new OpRec(Opcode.cvtsp, "rw,ab,rw,ab"),
 /* 0A */ new OpRec(Opcode.index, "rl,rl,rl,rl,rl,wl"),
 /* 0B */ new OpRec(Opcode.crc, "ab,rl,rw,ab"), 
 /* 0C */ new OpRec(Opcode.prober, "rb,rw,ab"), 
 /* 0D */ new OpRec(Opcode.probew, "rb,rw,ab"), 
 /* 0E */ new OpRec(Opcode.insque, "ab,ab"), 
 /* 0F */ new OpRec(Opcode.remque, "ab,wl"), 

 /* 10 */ new OpRec(Opcode.bsbb, "bb"), 
 /* 11 */ new OpRec(Opcode.brb, "bb"), 
 /* 12 */ new OpRec(Opcode.bneq, "bb"),    // bnequ
 /* 13 */ new OpRec(Opcode.beql, "bb"),  // beqlu
 /* 14 */ new OpRec(Opcode.bgtr, "bb"), 
 /* 15 */ new OpRec(Opcode.bleq, "bb"), 
 /* 16 */ new OpRec(Opcode.jsb, "ab"), 
 /* 17 */ new OpRec(Opcode.jmp, "ab"), 
 /* 18 */ new OpRec(Opcode.bgeq, "bb"), 
 /* 19 */ new OpRec(Opcode.blss, "bb"), 
 /* 1A */ new OpRec(Opcode.bgtru, "bb"), 
 /* 1B */ new OpRec(Opcode.blequ, "bb"), 
 /* 1C */ new OpRec(Opcode.bvc, "bb"), 
 /* 1D */ new OpRec(Opcode.bvs, "bb"), 
 /* 1E */ new OpRec(Opcode.bgequ, "bb"), // bcc, 
 /* 1F */ new OpRec(Opcode.blssu, "bb"), //  bcs, 

 /* 20 */ new OpRec(Opcode.addp4, "rw,ab,rw,ab"),
 /* 21 */ new OpRec(Opcode.addp6, "rw,ab,rw,ab,rw,ab"),
 /* 22 */ new OpRec(Opcode.subp4, "rw,ab,rw,ab"),
 /* 23 */ new OpRec(Opcode.subp6, "rw,ab,rw,ab,rw,ab"),
 /* 24 */ new OpRec(Opcode.cvtpt, "rw,ab,ab,rw"),
 /* 25 */ new OpRec(Opcode.mulp,  "rw,ab,rw,ab,rw,ab"),
 /* 26 */ new OpRec(Opcode.cvttp, "rw,ab,ab,rw"),
 /* 27 */ new OpRec(Opcode.divp,   "rw,ab,rw,ab,rw,ab"),
 /* 28 */ new OpRec(Opcode.movc3, "rw,ab,ab"),
 /* 29 */ new OpRec(Opcode.cmpc3, "rw,ab,ab"),
 /* 2A */ new OpRec(Opcode.scanc, "rw,ab,ab,rb"),
 /* 2B */ new OpRec(Opcode.spanc, "rw,ab,ab,rb"),
 /* 2C */ new OpRec(Opcode.movc5,  -1), 
 /* 2D */ new OpRec(Opcode.cmpc5,  -1), 
 /* 2E */ new OpRec(Opcode.movtc,  -1), 
 /* 2F */ new OpRec(Opcode.movtuc,  -1), 

 /* 30 */ new OpRec(Opcode.bsbw, "bw"), 
 /* 31 */ new OpRec(Opcode.brw, "bw"), 
 /* 32 */ new OpRec(Opcode.cvtwl,  -1), 
 /* 33 */ new OpRec(Opcode.cvtwb,  -1), 
 /* 34 */ new OpRec(Opcode.movp,  -1), 
 /* 35 */ new OpRec(Opcode.cmpp3,  -1), 
 /* 36 */ new OpRec(Opcode.cvtpl,  -1), 
 /* 37 */ new OpRec(Opcode.cmpp4,  -1), 
 /* 38 */ new OpRec(Opcode.editpc,  -1), 
 /* 39 */ new OpRec(Opcode.matchc,  -1), 
 /* 3A */ new OpRec(Opcode.locc,  -1), 
 /* 3B */ new OpRec(Opcode.skpc,  -1), 
 /* 3C */ new OpRec(Opcode.movzwl,  -1), 
 /* 3D */ new OpRec(Opcode.acbw,  -1), 
 /* 3E */ new OpRec(Opcode.movaw,  -1), 
 /* 3F */ new OpRec(Opcode.pushaw,  -1), 
 
 /* 40 */ new OpRec(Opcode.addf2,  -1), 
 /* 41 */ new OpRec(Opcode.addf3,  -1), 
 /* 42 */ new OpRec(Opcode.subf2,  -1), 
 /* 43 */ new OpRec(Opcode.subf3,  -1), 
 /* 44 */ new OpRec(Opcode.mulf2,  -1), 
 /* 45 */ new OpRec(Opcode.mulf3,  -1), 
 /* 46 */ new OpRec(Opcode.divf2,  -1), 
 /* 47 */ new OpRec(Opcode.divf3,  -1), 
 /* 48 */ new OpRec(Opcode.cvtfb,  -1), 
 /* 49 */ new OpRec(Opcode.cvtfw,  -1), 
 /* 4A */ new OpRec(Opcode.cvtfl,  -1), 
 /* 4B */ new OpRec(Opcode.cvtrfl,  -1), 
 /* 4C */ new OpRec(Opcode.cvtbf,  -1), 
 /* 4D */ new OpRec(Opcode.cvtwf,  -1), 
 /* 4E */ new OpRec(Opcode.cvtlf, "rl,wf"), 
 /* 4F */ new OpRec(Opcode.acbf,  -1), 

 /* 50 */ new OpRec(Opcode.movf,  -1), 
 /* 51 */ new OpRec(Opcode.cmpf,  "rf,rf"), 
 /* 52 */ new OpRec(Opcode.mnegf,  -1), 
 /* 53 */ new OpRec(Opcode.tstf,  -1), 
 /* 54 */ new OpRec(Opcode.emodf,  -1), 
 /* 55 */ new OpRec(Opcode.polyf,  -1), 
 /* 56 */ new OpRec(Opcode.cvtfd,  -1), 
 /* 57 */ new OpRec(Opcode.Reserved ,  -1), 
 /* 58 */ new OpRec(Opcode.adawi,  -1), 
 /* 59 */ new OpRec(Opcode.Reserved ,  -1), 
 /* 5A */ new OpRec(Opcode.Reserved ,  -1), 
 /* 5B */ new OpRec(Opcode.Reserved ,  -1), 
 /* 5C */ new OpRec(Opcode.insqhi,  -1), 
 /* 5D */ new OpRec(Opcode.insqti,  -1), 
 /* 5E */ new OpRec(Opcode.remqhi,  -1), 
 /* 5F */ new OpRec(Opcode.remqti,  -1), 

 /* 60 */ new OpRec(Opcode.addd2,  -1), 
 /* 61 */ new OpRec(Opcode.addd3,  -1), 
 /* 62 */ new OpRec(Opcode.subd2,  -1), 
 /* 63 */ new OpRec(Opcode.subd3,  -1), 
 /* 64 */ new OpRec(Opcode.muld2,  -1), 
 /* 65 */ new OpRec(Opcode.muld3,  -1), 
 /* 66 */ new OpRec(Opcode.divd2,  -1), 
 /* 67 */ new OpRec(Opcode.divd3,  -1), 
 /* 68 */ new OpRec(Opcode.cvtdb,  -1), 
 /* 69 */ new OpRec(Opcode.cvtdw,  -1), 
 /* 6A */ new OpRec(Opcode.cvtdl,  -1), 
 /* 6B */ new OpRec(Opcode.cvtrdl,  -1), 
 /* 6C */ new OpRec(Opcode.cvtbd,  -1), 
 /* 6D */ new OpRec(Opcode.cvtwd,  -1), 
 /* 6E */ new OpRec(Opcode.cvtld,  -1), 
 /* 6F */ new OpRec(Opcode.acbd,  -1),

 /* 70 */ new OpRec(Opcode.movd,  -1), 
 /* 71 */ new OpRec(Opcode.cmpd,  -1), 
 /* 72 */ new OpRec(Opcode.mnegd,  -1), 
 /* 73 */ new OpRec(Opcode.tstd,  -1), 
 /* 74 */ new OpRec(Opcode.emodd,  -1), 
 /* 75 */ new OpRec(Opcode.polyd,  -1), 
 /* 76 */ new OpRec(Opcode.cvtdf,  -1), 
 /* 77 */ new OpRec(Opcode.Reserved,  -1), 
 /* 78 */ new OpRec(Opcode.ashl,  -1), 
 /* 79 */ new OpRec(Opcode.ashq,  -1), 
 /* 7A */ new OpRec(Opcode.emul,  -1), 
 /* 7B */ new OpRec(Opcode.ediv,  -1), 
 /* 7C */ new OpRec(Opcode.clrq, -1), //  clrd,  clrg,  -1), 
 /* 7D */ new OpRec(Opcode.movq,  -1), 
 /* 7E */ new OpRec(Opcode.movaq, -1), //  movad,  movag,  -1), 
 /* 7F */ new OpRec(Opcode.pushaq, -1), //  pushad,  pushag,  -1), 

 /* 80 */ new OpRec(Opcode.addb2, "rb,wb"), 
 /* 81 */ new OpRec(Opcode.addb3, "rb,rb,wb"), 
 /* 82 */ new OpRec(Opcode.subb2, "rb,wb"), 
 /* 83 */ new OpRec(Opcode.subb3, "rb,rb,wb"), 
 /* 84 */ new OpRec(Opcode.mulb2,  -1), 
 /* 85 */ new OpRec(Opcode.mulb3,  -1), 
 /* 86 */ new OpRec(Opcode.divb2,  -1), 
 /* 87 */ new OpRec(Opcode.divb3,  -1), 
 /* 88 */ new OpRec(Opcode.bisb2,  -1), 
 /* 89 */ new OpRec(Opcode.bisb3,  -1), 
 /* 8A */ new OpRec(Opcode.bicb2,  -1), 
 /* 8B */ new OpRec(Opcode.bicb3,  -1), 
 /* 8C */ new OpRec(Opcode.xorb2, "rb,wb"),  
 /* 8D */ new OpRec(Opcode.xorb3, "rb,rb,wb"),  
 /* 8E */ new OpRec(Opcode.mnegb,  -1), 
 /* 8F */ new OpRec(Opcode.caseb,  -1), 

 /* 90 */ new OpRec(Opcode.movb,  "rb,wb"), 
 /* 91 */ new OpRec(Opcode.cmpb,  "rb,rb"), 
 /* 92 */ new OpRec(Opcode.mcomb,  -1), 
 /* 93 */ new OpRec(Opcode.bitb,  -1), 
 /* 94 */ new OpRec(Opcode.clrb,  -1), 
 /* 95 */ new OpRec(Opcode.tstb,  -1), 
 /* 96 */ new OpRec(Opcode.incb,  -1), 
 /* 97 */ new OpRec(Opcode.decb,  -1), 
 /* 98 */ new OpRec(Opcode.cvtbl,  -1), 
 /* 99 */ new OpRec(Opcode.cvtbw,  -1), 
 /* 9A */ new OpRec(Opcode.movzbl,  -1), 
 /* 9B */ new OpRec(Opcode.movzbw,  -1), 
 /* 9C */ new OpRec(Opcode.rotl,  -1), 
 /* 9D */ new OpRec(Opcode.acbb,  -1), 
 /* 9E */ new OpRec(Opcode.movab, "ab,wl"), 
 /* 9F */ new OpRec(Opcode.pushab,  -1), 

 /* A0 */ new OpRec(Opcode.addw2, "rw,ww"), 
 /* A1 */ new OpRec(Opcode.addw3, "rw,rw,ww"), 
 /* A2 */ new OpRec(Opcode.subw2,  -1), 
 /* A3 */ new OpRec(Opcode.subw3,  -1), 
 /* A4 */ new OpRec(Opcode.mulw2,  -1), 
 /* A5 */ new OpRec(Opcode.mulw3,  -1), 
 /* A6 */ new OpRec(Opcode.divw2,  -1), 
 /* A7 */ new OpRec(Opcode.divw3,  -1), 
 /* A8 */ new OpRec(Opcode.bisw2, "rw,ww"), 
 /* A9 */ new OpRec(Opcode.bisw3,  -1), 
 /* AA */ new OpRec(Opcode.bicw2,  -1), 
 /* AB */ new OpRec(Opcode.bicw3,  -1), 
 /* AC */ new OpRec(Opcode.xorw2, "rw,ww"), 
 /* AD */ new OpRec(Opcode.xorw3, "rw,rw,ww"), 
 /* AE */ new OpRec(Opcode.mnegw,  -1), 
 /* AF */ new OpRec(Opcode.casew,  -1), 

 /* B0 */ new OpRec(Opcode.movw, "rw,ww"), 
 /* B1 */ new OpRec(Opcode.cmpw,  -1), 
 /* B2 */ new OpRec(Opcode.mcomw,  -1), 
 /* B3 */ new OpRec(Opcode.bitw,  -1), 
 /* B4 */ new OpRec(Opcode.clrw,  -1), 
 /* B5 */ new OpRec(Opcode.tstw,  -1), 
 /* B6 */ new OpRec(Opcode.incw,  -1), 
 /* B7 */ new OpRec(Opcode.decw,  -1), 
 /* B8 */ new OpRec(Opcode.bispsw,  -1), 
 /* B9 */ new OpRec(Opcode.bicpsw,  -1), 
 /* BA */ new OpRec(Opcode.popr,  -1), 
 /* BB */ new OpRec(Opcode.pushr,  -1), 
 /* BC */ new OpRec(Opcode.chmk,  -1), 
 /* BD */ new OpRec(Opcode.chme,  -1), 
 /* BE */ new OpRec(Opcode.chms,  -1), 
 /* BF */ new OpRec(Opcode.chmu,  -1), 

 /* C0 */ new OpRec(Opcode.addl2, "rl,wl"), 
 /* C1 */ new OpRec(Opcode.addl3, "rl,rl,wl"), 
 /* C2 */ new OpRec(Opcode.subl2,  -1), 
 /* C3 */ new OpRec(Opcode.subl3,  -1), 
 /* C4 */ new OpRec(Opcode.mull2,  -1), 
 /* C5 */ new OpRec(Opcode.mull3,  -1), 
 /* C6 */ new OpRec(Opcode.divl2,  -1), 
 /* C7 */ new OpRec(Opcode.divl3,  -1), 
 /* C8 */ new OpRec(Opcode.bisl2,  -1), 
 /* C9 */ new OpRec(Opcode.bisl3,  -1), 
 /* CA */ new OpRec(Opcode.bicl2,  -1), 
 /* CB */ new OpRec(Opcode.bicl3,  -1), 
 /* CC */ new OpRec(Opcode.xorl2,  -1), 
 /* CD */ new OpRec(Opcode.xorl3,  -1), 
 /* CE */ new OpRec(Opcode.mnegl,  -1), 
 /* CF */ new OpRec(Opcode.casel,  -1), 

 /* D0 */ new OpRec(Opcode.movl, "rl,wl"), 
 /* D1 */ new OpRec(Opcode.cmpl, "rl,wl"), 
 /* D2 */ new OpRec(Opcode.mcoml,  -1), 
 /* D3 */ new OpRec(Opcode.bitl,  -1), 
 /* D4 */ new OpRec(Opcode.clrl, -1), //  clrf,  -1), 
 /* D5 */ new OpRec(Opcode.tstl,  -1), 
 /* D6 */ new OpRec(Opcode.incl,  -1), 
 /* D7 */ new OpRec(Opcode.decl,  -1), 
 /* D8 */ new OpRec(Opcode.adwc,  -1), 
 /* D9 */ new OpRec(Opcode.sbwc,  -1), 
 /* DA */ new OpRec(Opcode.mtpr,  -1), 
 /* DB */ new OpRec(Opcode.mfpr,  -1), 
 /* DC */ new OpRec(Opcode.movpsl,  -1), 
 /* DD */ new OpRec(Opcode.pushl, "rl"), 
 /* DE */ new OpRec(Opcode.moval, -1), // mova,  -1), 
 /* DF */ new OpRec(Opcode.pushal, -1), // pushaf,  -1), 

 /* E0 */ new OpRec(Opcode.bbs,  -1), 
 /* E1 */ new OpRec(Opcode.bbc,  -1), 
 /* E2 */ new OpRec(Opcode.bbss,  -1), 
 /* E3 */ new OpRec(Opcode.bbcs,  -1), 
 /* E4 */ new OpRec(Opcode.bbsc,  -1), 
 /* E5 */ new OpRec(Opcode.bbcc,  -1), 
 /* E6 */ new OpRec(Opcode.bbssi,  -1), 
 /* E7 */ new OpRec(Opcode.bbcci,  -1), 
 /* E8 */ new OpRec(Opcode.blbs,  -1), 
 /* E9 */ new OpRec(Opcode.blbc,  -1), 
 /* EA */ new OpRec(Opcode.ffs,  -1), 
 /* EB */ new OpRec(Opcode.ffc,  -1), 
 /* EC */ new OpRec(Opcode.cmpv,  -1), 
 /* ED */ new OpRec(Opcode.cmpzv,  -1), 
 /* EE */ new OpRec(Opcode.extv,  -1), 
 /* EF */ new OpRec(Opcode.extzv,  -1), 

 /* F0 */ new OpRec(Opcode.insv,  -1), 
 /* F1 */ new OpRec(Opcode.acbl,  -1), 
 /* F2 */ new OpRec(Opcode.aoblss,  -1), 
 /* F3 */ new OpRec(Opcode.aobleq,  -1), 
 /* F4 */ new OpRec(Opcode.sobgeq,  -1), 
 /* F5 */ new OpRec(Opcode.sobgtr,  -1), 
 /* F6 */ new OpRec(Opcode.cvtlb,  -1), 
 /* F7 */ new OpRec(Opcode.cvtlw,  -1), 
 /* F8 */ new OpRec(Opcode.ashp,  -1), 
 /* F9 */ new OpRec(Opcode.cvtlp,  -1), 
 /* FA */ new OpRec(Opcode.callg,  -1), 
 /* FB */ new OpRec(Opcode.calls,  -1), 
 /* FC */ new OpRec(Opcode.xfc,  -1), 
 //* FD */ new OpRec(Opcode.escd to Digital,  -1), 
 //* FE */ new OpRec(Opcode.esce to Digital,  -1), 
 //* FF */ new OpRec(Opcode.escf to Digital,  -1), 

            };
    }
}