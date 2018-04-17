inv(0,1).
inv(1,0).
and(0,0,0).
and(0,1,0).
and(1,0,0).
and(1,1,1).
nand(In1,In2,Out):-and(In1,In2,Node), inv(Node,Out).