
and2(0,0,0).
and2(1,0,0).
and2(0,1,0).
and2(1,1,1).
or2(0,0,0).
or2(1,0,1).
or2(0,1,1).
or2(1,1,1).
dec(0,1,0).
dec(1,0,1).

mplex2(A1,A0,S,Out):-dec(S,D0,D1),
		    and2(A0,D0,Q0),
		    and2(A1,D1,Q1),
		    or2(Q0,Q1,Out).