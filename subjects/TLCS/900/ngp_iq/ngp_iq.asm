;;; Segment .text (00200000)
00200000 20 4C 49 43 45 4E 53 45 44 20 42 59 20 53 4E 4B  LICENSED BY SNK
00200010 20 43 4F 52 50 4F 52 41 54 49 4F 4E 89 00 20 00  CORPORATION.. .
00200020 00 00 00 10 54 4C 43 53 20 49 51 20 20 20 20 20 ....TLCS IQ     
00200030 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00200040 88 00 20 00 88 00 20 00 88 00 20 00 88 00 20 00 .. ... ... ... .
00200050 88 00 20 00 E7 05 20 00 88 00 20 00 88 00 20 00 .. ... ... ... .
00200060 88 00 20 00 88 00 20 00 88 00 20 00 88 00 20 00 .. ... ... ... .
00200070 88 00 20 00 88 00 20 00 88 00 20 00 88 00 20 00 .. ... ... ... .
00200080 88 00 20 00 88 00 20 00 07                      .. ... ..      

;; fn00200089: 00200089
fn00200089 proc
	calr	0020060C
	set	06,(00006F86)
	lda	xix,(00200040)
	lda	xiy,(00006FB8)
	ld	b,12
	ld	xwa,(xix+:4)
	ld	(xiy+:4),xwa
	djnz	b,0020009B
	ld	(00008002),00
	ld	(00008003),00
	ld	(00008004),A0
	ld	(00008005),98
	ld	wa,0000
	ld	xhl,0000A000
	ld	bc,0200
	ld	(xhl+:2),wa
	djnz	bc,002000C2
	ld	bc,0250
	ld	xde,0000A400
	ld	xhl,0020061D
	invalid
	call	002005B8
	ei	00
	ld	bc,0010
	ld	xde,00008300
	ld	xhl,00200ABD
	invalid
	ld	(000083E0),33
	ld	(000083E1),07
	ld	(00008118),80
	jr	00200111
	push	iz
	pop	bc
	jr	NZ,00200174
	jr	OV,00207676
	jr	ULE,0020017A
	jr	GE,00200177
	jr	NZ,0020012A
	invalid
	jr	MI,00207673
	jr	MI,0020013E
	nop
	ld	xhl,002000FD
	ld	d,04
	ld	c,01
	ld	b,00
	call	00200557
	jr	00200136
	push	iz
	ld	w,20
	ld	w,54
	jr	MI,0020019C
	jr	OV,0020544C
	jr	MI,00207598
	jr	MI,00200151
	ld	w,20
	ld	w,2E
	nop
	ld	xhl,00200122
	ld	d,04
	ld	c,01
	ld	b,01
	call	00200557
	jr	00200154
	invalid
	jr	MI,002076B0
	jr	MI,0020016D
	jr	NV,002001B4
	jr	NZ,002001B8
	jr	OV,002001BC
	ld	xhl,00200147
	ld	d,04
	ld	c,02
	ld	b,04
	call	00200557
	jr	0020016E
	ld	xiy,63657078
	jr	OV,002065D2
	nop
	ld	xhl,00200165
	ld	d,02
	ld	c,04
	ld	b,05
	call	00200557
	jr	00200186
	ld	xbc,61757463
	jr	NV,00200186
	ld	xhl,0020017F
	ld	d,02
	ld	c,04
	ld	b,06
	call	00200557
	ld	xde,00007000
	ld	xhl,00200363
	ld	bc,012F
	invalid
	ld	w,01
	call	002004F2
	ld	xwa,00007000
	call	T,(xwa)
	ld	hl,0D06
	ld	a,(00004003)
	ld	w,04
	call	00200532
	ld	hl,0D05
	ld	a,04
	ld	w,04
	call	00200532
	cp	(00004003),04
	jr	NZ,002001E6
	jr	002001D5
	pop	sp
	pop	hl
	nop
	ld	xhl,002001D2
	ld	d,01
	ld	c,0F
	ld	b,04
	call	00200557
	jr	002001FB
	jr	002001EC
	pop	iz
	pop	sp
	pop	hl
	nop
	ld	xhl,002001E8
	ld	d,03
	ld	c,0F
	ld	b,04
	call	00200557
	jr	00200206
	pop	iz
	jr	NC,00200220
	jr	Z,0020026E
	jr	MI,00206A78
	nop
	ld	xhl,002001FD
	ld	d,04
	ld	c,02
	ld	b,08
	call	00200557
	jr	00200220
	ld	xiy,63657078
	jr	OV,00206684
	nop
	ld	xhl,00200217
	ld	d,02
	ld	c,04
	ld	b,09
	call	00200557
	jr	00200238
	ld	xbc,61757463
	jr	NV,00200238
	ld	xhl,00200231
	ld	d,02
	ld	c,04
	ld	b,0A
	call	00200557
	ld	xde,00007000
	ld	xhl,00200492
	ld	bc,0023
	invalid
	ld	w,01
	call	002004F2
	ld	xwa,00007000
	call	T,(xwa)
	ld	hl,0D0A
	ld	a,(00004003)
	ld	w,04
	call	00200532
	ld	hl,0D09
	ld	a,01
	ld	w,04
	call	00200532
	cp	(00004003),01
	jr	NZ,00200298
	jr	00200287
	pop	sp
	pop	hl
	nop
	ld	xhl,00200284
	ld	d,01
	ld	c,0F
	ld	b,08
	call	00200557
	jr	002002AD
	jr	0020029E
	pop	iz
	pop	sp
	pop	hl
	nop
	ld	xhl,0020029A
	ld	d,03
	ld	c,0F
	ld	b,08
	call	00200557
	jr	002002BA
	pop	ix
	jr	NC,00200320
	jr	C,002002D4
	jr	GE,00200324
	jr	ULE,0020752D
	nop
	ld	xhl,002002AF
	ld	d,04
	ld	c,02
	ld	b,0C
	call	00200557
	jr	002002D4
	ld	xiy,63657078
	jr	OV,00206738
	nop
	ld	xhl,002002CB
	ld	d,02
	ld	c,04
	ld	b,0D
	call	00200557
	jr	002002EC
	ld	xbc,61757463
	jr	NV,002002EC
	ld	xhl,002002E5
	ld	d,02
	ld	c,04
	ld	b,0E
	call	00200557
	ld	xde,00007000
	ld	xhl,002004B5
	ld	bc,002B
	invalid
	ld	w,01
	call	002004F2
	ld	xwa,00007000
	call	T,(xwa)
	ld	hl,0D0E
	ld	a,(00004003)
	ld	w,04
	call	00200532
	ld	hl,0D0D
	ld	a,00
	ld	w,04
	call	00200532
	cp	(00004003),00
	jr	NZ,0020034C
	jr	0020033B
	pop	sp
	pop	hl
	nop
	ld	xhl,00200338
	ld	d,01
	ld	c,0F
	ld	b,0C
	call	00200557
	jr	00200361
	jr	00200352
	pop	iz
	pop	sp
	pop	hl
	nop
	ld	xhl,0020034E
	ld	d,03
	ld	c,0F
	ld	b,0C
	call	00200557
	jr	00200361
	ldf	00
	invalid
	rcf
	sub	(xbc-0x37),xwa
	ld	b,00
	ld	c,0C
	ld	xde,00007019
	add	a,a
	jr	NZ,00200486
	jr	0020037A
	ld	(xde),c
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	ld	(xde),00
	inc	01,b
	inc	00000001,xde
	jr	00200373
	ldf	00
	dec	01,b
	add	b,02
	ld	(00004003),b
	ret
	ldf	00
	invalid
	rcf
	ld	xwa,(xbc-0x39)
	sub	(xde-0x37),xwa
	ld	xde,00007019
	ld	bc,0C0C
	rcf
	jr	002004A7
	ld	(xde),bc
	jr	C,002004AB
	nop
	nop
	nop
	ld	(00004003),a
	ldf	00
	ret
	ldf	00
	invalid
	rcf
	ld	xwa,(xbc-0x39)
	ex	(xde-0x39),xwa
	sub	(xhl-0x37),xwa
	ld	(00007400),0C0C
	ld	(00007500),0C0C
	jr	002004D0
	invalid
	nop
	jr	OV,002004D8
	nop
	ld	(00004003),a
	ldf	00
	ret
	cp	(00006F85),00
	jp	Z,(002000DD)
	invalid
	ld	bc,1EA8
	halt
	invalid
	jr	002004F0
	push	xwa
	ld	(00004004),00
	ld	a,(00007600)
	ld	a,(00007600)
	ld	a,(00004004)
	cp	a,w
	jr	NZ,002004F8
	pop	xwa
	ret
	push	xhl
	push	xde
	push	xbc
	ld	xde,00009800
	ld	c,h
	ld	b,00
	mul	bc,0002
	add	de,bc
	ld	h,00
	mul	hl,0040
	add	de,hl
	ld	(xde),a
	add	xde,00000001
	ld	(xde),w
	pop	xbc
	pop	xde
	pop	xhl
	ret
	push	xhl
	push	xbc
	push	xwa
	ld	c,a
	and	a,F0
	srl	04,a
	add	a,40
	call	0020050A
	ld	a,c
	and	a,0F
	add	a,40
	add	h,01
	call	0020050A
	pop	xwa
	pop	xbc
	pop	xhl
	ret
	push	xhl
	push	xde
	sll	01,d
	ld	(00004002),d
	ld	xde,00009800
	ld	xwa,00000000
	ld	a,c
	add	a,c
	add	xde,xwa
	ld	c,b
	ld	b,00
	mul	bc,0040
	add	xde,xbc
	ld	b,13
	ld	a,(xhl)
	cp	a,00
	jr	Z,0020059E
	inc	00000001,xhl
	cp	a,5B
	jr	C,00200589
	add	a,E0
	ld	w,00
	add	wa,0009
	add	w,(00004002)
	ld	(xde),a
	inc	00000001,xde
	ld	(xde),w
	inc	00000001,xde
	djnz	b,00200579
	pop	xde
	pop	xhl
	ret
	push	xwa
	push	xhl
	push	xde
	ld	a,w
	ld	w,d
	call	00200532
	pop	xde
	pop	xhl
	pop	xwa
	ld	w,d
	add	h,02
	jp	00200532
	ld	xbc,00009000
	ld	hl,04C0
	ld	(xbc),00
	add	xbc,00000001
	sub	hl,0001
	jr	NZ,002005C0
	ld	xbc,00009800
	ld	hl,04C0
	ld	(xbc),00
	add	xbc,00000001
	sub	hl,0001
	jr	NZ,002005D7
	ret
	push	xwa
	push	xbc
	push	xde
	invalid
	jr	NC,0020063B
	inc	01,(00004004)
	pop	xde
	pop	xbc
	pop	xwa
	reti
	push	sr
	ldf	03
	push	xix
	add	w,w
	add	w,w
	ld	xix,00FFFE00
	ld	xix,(xwa+a)
	call	T,(xix)
	pop	xix
	pop	sr
	ret
	cp	(00006F91),00
	jr	NZ,0020061C
	res	03,(00006F83)
	ld	(00006DA0),00
	ret
	nop
	nop
	ret	NV
	swi	04
	swi	04
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	ret	F
	retd	03F0
	ret	F
	pop	sr
	ret	F
	pop	sr
	nop
	nop
	invalid
	ld	(0000003C),F0
	push	xsp
	nop
	swi	04
	nop
	swi	04
	swi	04
	swi	07
	nop
	nop
	ret	NV
	ld	(000000FC),F0
	retd	00FC
	swi	04
	invalid
	nop
	nop
	ret	F
	and	c,(xix)
	ret	F
	cp	(xsp),l
	ld	(00000003),00
	ld	(000000FF),FC
	ret	NV
	nop
	swi	04
	nop
	swi	04
	invalid
	nop
	nop
	ld	(0000003F),FC
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	swi	04
	swi	07
	swi	04
	nop
	chg	00,(00000003)
	retd	0FC0
	and	w,(0000000F)
	retd	0000
	ret	NV
	ret	F
	invalid
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	swi	04
	push	xsp
	swi	04
	nop
	swi	04
	nop
	nop
	nop
	invalid
	swi	04
	push	xix
	swi	04
	swi	04
	swi	07
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	nop
	nop
	invalid
	swi	04
	push	xix
	swi	04
	invalid
	swi	04
	push	xix
	swi	04
	ld	(000000FF),00
	invalid
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(000000FF),00
	swi	04
	swi	07
	nop
	swi	04
	nop
	swi	04
	invalid
	swi	04
	nop
	swi	04
	swi	04
	swi	07
	nop
	nop
	swi	04
	swi	07
	nop
	swi	04
	nop
	swi	04
	invalid
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	nop
	ld	(0000003F),FC
	nop
	swi	04
	swi	04
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	swi	04
	push	xsp
	nop
	nop
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	swi	04
	swi	07
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	nop
	nop
	chg	00,(0000003F)
	retd	0FC0
	and	w,(0000000F)
	retd	0FC0
	ld	(0000003F),00
	swi	04
	pop	sr
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	invalid
	nop
	nop
	push	xix
	swi	04
	push	xix
	swi	04
	ex	(000000FF),w
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	nop
	nop
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	nop
	swi	04
	swi	04
	swi	07
	nop
	nop
	push	xix
	ret	NV
	swi	04
	swi	07
	swi	04
	swi	07
	push	xix
	ret	F
	push	xix
	ld	(00000000),0C
	swi	04
	incf
	swi	07
	srl	a,d
	swi	04
	swi	07
	swi	04
	sla	a,l
	and	w,(xsp)
	nop
	nop
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(000000FF),FC
	nop
	swi	04
	nop
	nop
	invalid
	swi	04
	incf
	swi	04
	sla	a,d
	swi	04
	swi	04
	push	xix
	swi	04
	invalid
	nop
	nop
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	invalid
	swi	04
	push	xix
	swi	04
	nop
	nop
	invalid
	swi	04
	nop
	swi	04
	ret	NV
	nop
	swi	04
	invalid
	nop
	nop
	swi	04
	swi	07
	and	w,(0000000F)
	retd	0FC0
	and	w,(0000000F)
	retd	0FC0
	nop
	nop
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	(0000003F),00
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	ld	wa,C03C
	incf
	nop
	pop	sr
	nop
	nop
	cp	c,d
	cp	c,d
	cp	c,d
	cp	c,d
	cp	c,d
	cp	c,d
	ld	(0000003C),00
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	invalid
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	nop
	nop
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	push	xix
	swi	04
	chg	00,(0000003F)
	retd	0FC0
	nop
	nop
	swi	04
	swi	07
	swi	04
	pop	sr
	swi	04
	retd	3FF0
	invalid
	swi	07
	swi	04
	swi	07
	nop
	nop
	invalid
	ld	wa,C3CC
	and	d,F0
	ex	(xwa),w
	invalid
	nop
	invalid
	push	sr
	invalid
	invalid
	push	xix
	push	xsp
	swi	07
	swi	04
	swi	07
	swi	04
	push	xix
	push	xsp
	invalid
	sub	(xwa+0x2A),xde
	sub	(xde-0x56),xde
	sub	(xde-0x56),xde
	invalid
	invalid
	invalid
	ld	xwa,F407D001
	invalid
	scc	C,iy
	swi	05
	jr	NC,0020288F
	xor	wa,(00000007)
	reti
Index was outside the bounds of the array.

