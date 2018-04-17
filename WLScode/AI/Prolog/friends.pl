likes(joe, jan).
likes(jan, joe).
likes(don, jan).

friends(X, Y):-likes(X, Y), likes(Y, X).

bestfriends:-
    write('They are best friends'),nl,
    friends(X,Y),
    write(X),
    write(' likes '),
    write(Y),nl,
    true.
