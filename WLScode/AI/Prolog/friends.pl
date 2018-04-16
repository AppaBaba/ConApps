likes(joe, jan).
likes(jan, joe).
likes(don, jan).

friends(X, Y):-likes(X, Y), likes(Y, X).
