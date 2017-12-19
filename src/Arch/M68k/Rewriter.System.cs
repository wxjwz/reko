﻿#region License
/* 
 * Copyright (C) 1999-2017 John Källén.
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

using Reko.Core.Rtl;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Reko.Arch.M68k
{
    public partial class Rewriter
    {
        private void RewriteBkpt()
        {
            rtlc = RtlClass.Invalid;
            var src = this.orw.RewriteSrc(di.op1, di.Address);
            m.SideEffect(host.PseudoProcedure("__bkpt", VoidType.Instance, src));
        }

        private void RewriteMoves()
        {
            rtlc = RtlClass.System;
            var src = this.orw.RewriteSrc(di.op1, di.Address);
            var dst = orw.RewriteDst(di.op2, di.Address, di.dataWidth, src, (s, d) =>
                host.PseudoProcedure("__moves", VoidType.Instance, s));
        }
    }
}