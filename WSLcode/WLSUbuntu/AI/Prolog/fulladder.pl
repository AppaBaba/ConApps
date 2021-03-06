inv(0,1).
inv(1,0).
and(0,0,0).
and(0,1,0).
and(1,0,0).
and(1,1,1).
or(0,0,0).
or(1,0,1).
or(0,1,1).
or(1,1,1).

nand(A,B,NZ):-and(A,B,C),
		inv(C,NZ).

xor(A,B,S):-nand(A,B,D),
	    nand(A,D,E),
	    nand(B,D,F),
	    nand(E,F,S).

halfadder(A,B,Sum,Carry):-xor(A,B,Sum),
			and(A,B,Carry).

fulladder(A,B,Cin,Sum,Carry):-xor(A,B,S1),
			and(A,B,C1),
			xor(S1,Cin,Sum),
			and(Cin,S1,C2),
			or(C2,C1,Carry).