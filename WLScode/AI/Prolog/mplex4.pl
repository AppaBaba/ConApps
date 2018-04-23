
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
dec2x4(0,0,0,0,0,1).
dec2x4(0,1,0,0,1,0).
dec2x4(1,0,0,1,0,0).
dec2x4(1,1,1,0,0,0).

plex2(A0,A1,S,Out):-dec(S,D0,D1),
		    and2(A0,D0,Q0),
		    and2(A1,D1,Q1),
		    or2(Q0,Q1,Out).

mpx4(A3,A2,A1,A0,S1,S0,Out):-dec2x4(S1,S0,D3,D2,D1,D0),
			    and2(A0,D0,Q0),
			    and2(A1,D1,Q1),
			    and2(A2,D2,Q2),
			    and2(A3,D3,Q3),
			    or2(Q0,Q1,M1),
			    or2(Q2,Q3,M2),
			    or2(M1,M2,Out).