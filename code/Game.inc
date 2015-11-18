; The actual game code to be added by the user

PROC InitializeGame ; Things to be done before game starts running

ENDP InitializeGame

PROC LoadGameResources ; Load resources such as BMP files and audio files

ret
ENDP LoadGameResources

PROC UpdateGame ; To be called upon updating the game. ss:si should contain game tick counter.

ret
ENDP UpdateGame

PROC DrawGame ; The only place in which the user is allowed to draw

ret
ENDP DrawGame

