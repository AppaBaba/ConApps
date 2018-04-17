inv(0,1).
inv(1,0).
and(0,0,0).
and(0,1,0).
and(1,0,0).
and(1,1,1).

nand(In1,In2,Out):-and(In1,In2,Node),
			inv(Node,Out).

xor(NodeX,NodeY,NodeZ):-and(NodeX,NodeY,NodeA),
			and(NodeX,NodeA,NodeB),
			and(NodeY,NodeA,NodeC),
			and(NodeB,NodeC,NodeZ).

testnand:-nand(0,0,Out),
	write(Out),nl,
	nand(1,0,Out),
	write(Out),nl,
	nand(0,1,Out),
	write(Out),nl,
	nand(1,1,Out),
	write(Out),nl.