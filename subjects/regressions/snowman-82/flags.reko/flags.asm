;;; Segment __TEXT,__text (0000000000000F9E)

;; foo: 0000000000000F9E
foo proc
	mov	ecx,[rdi]
	shr	ecx,0A
	xor	cl,sil
	jz	0000000000000FB4

l0000000000000FAC:
	mov	rax,+00000001
	ret

;; bar: 0000000000000FB4
;;   Called from:
;;     0000000000000FA6 (in foo)
bar proc
	xor	rax,rax
	ret
;;; Segment __TEXT,__unwind_info (0000000000000FB8)
0000000000000FB8                         01 00 00 00 1C 00 00 00         ........
0000000000000FC0 00 00 00 00 1C 00 00 00 00 00 00 00 1C 00 00 00 ................
0000000000000FD0 02 00 00 00 9E 0F 00 00 34 00 00 00 34 00 00 00 ........4...4...
0000000000000FE0 B9 0F 00 00 00 00 00 00 34 00 00 00 03 00 00 00 ........4.......
0000000000000FF0 0C 00 01 00 10 00 01 00 00 00 00 00 00 00 00 00 ................