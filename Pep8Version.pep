; Bamboo and Nicholas Ailstock
; Computer Systems Final Project
; Professor Maria Schwartzman

BR       main
enter:   .ASCII ">  \x00"

i0:      .EQUATE 4 ;formal parameter #2d
q0Q:     .ASCII "\"Life moves pretty fast. If you don't stop and look around once in a while, you could miss it.\"\x00"
q0A1:    .ASCII "1. Ferris Bueller's Day Off\x00"
q0A2:    .ASCII "2. Christmas Vacation\x00"
q0A3:    .ASCII "3. Grown Ups\x00"
q0:      STRO q0Q, d
         CHARO '\n', i
         STRO q0A1, d
         CHARO '\n', i
         STRO q0A2, d
         CHARO '\n', i
         STRO q0A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i1:      .EQUATE 4 ;formal parameter #2d
q1Q:     .ASCII "\"If you want to know what a man's like, take a good look at how he treats his inferiors, not his equals.\"\x00"
q1A1:    .ASCII "1. Harry Potter and the Goblet of Fire\x00"
q1A2:    .ASCII "2. The Chronicles of Narnia: Prince Caspian\x00"
q1A3:    .ASCII "3. Percy Jackson & the Olympians: The Lightning Thief\x00"
q1:      STRO q1Q, d
         CHARO '\n', i
         STRO q1A1, d
         CHARO '\n', i
         STRO q1A2, d
         CHARO '\n', i
         STRO q1A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i2:      .EQUATE 4 ;formal parameter #2d
q2Q:     .ASCII "\"This is awkward. Not you're awkward but just because we're - I'm awkward, you're gorgeous - wait what?\"\x00"
q2A1:    .ASCII "1. Frozen\x00"
q2A2:    .ASCII "2. Tangled\x00"
q2A3:    .ASCII "3. The Princess Diaries 2: Royal Engagement\x00"
q2:      STRO q2Q, d
         CHARO '\n', i
         STRO q2A1, d
         CHARO '\n', i
         STRO q2A2, d
         CHARO '\n', i
         STRO q2A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i3:      .EQUATE 4 ;formal parameter #2d
q3Q:     .ASCII "\"Do, or do not. There is no 'try'.\"\x00"
q3A1:    .ASCII "1. Star Wars IV: A New Hope\x00"
q3A2:    .ASCII "2. Star Wars V: The Empire Strikes Back\x00"
q3A3:    .ASCII "3. Star Wars VI: Return of the Jedi\x00"
q3:      STRO q3Q, d
         CHARO '\n', i
         STRO q3A1, d
         CHARO '\n', i
         STRO q3A2, d
         CHARO '\n', i
         STRO q3A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i4:      .EQUATE 4 ;formal parameter #2d
q4Q:     .ASCII "\"I shall call him squishy and he shall be mine. He shall be my squishy. Come here squishy!\"\x00"
q4A1:    .ASCII "1. Monsters, Inc.\x00"
q4A2:    .ASCII "2. Finding Nemo\x00"
q4A3:    .ASCII "3. Toy Story 3\x00"
q4:      STRO q4Q, d
         CHARO '\n', i
         STRO q4A1, d
         CHARO '\n', i
         STRO q4A2, d
         CHARO '\n', i
         STRO q4A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i5:      .EQUATE 4 ;formal parameter #2d
q5Q:     .ASCII "\"Sometimes it is the people who no one imagines anything of who do the things that no one can imagine.\"\x00"
q5A1:    .ASCII "1. The Theory of Everything\x00"
q5A2:    .ASCII "2. The Imitation Game\x00"
q5A3:    .ASCII "3. Birdman\x00"
q5:      STRO q5Q, d
         CHARO '\n', i
         STRO q5A1, d
         CHARO '\n', i
         STRO q5A2, d
         CHARO '\n', i
         STRO q5A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i6:      .EQUATE 4 ;formal parameter #2d
q6Q:     .ASCII "\"Rudeness is merely an expression of fear. People fear they won't get what they want. The most dreadful and unattractive person only needs to be loved, and they will open up like a flower.\"\x00"
q6A1:    .ASCII "1. Boyhood\x00"
q6A2:    .ASCII "2. The Grand Budapest Hotel\x00"
q6A3:    .ASCII "3. 12 Years a Slave\x00"
q6:      STRO q6Q, d
         CHARO '\n', i
         STRO q6A1, d
         CHARO '\n', i
         STRO q6A2, d
         CHARO '\n', i
         STRO q6A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i7:      .EQUATE 4 ;formal parameter #2d
q7Q:     .ASCII "\"Sell me this pen.\"\x00"
q7A1:    .ASCII "1. American Hustle\x00"
q7A2:    .ASCII "2. Dallas Buyers Club\x00"
q7A3:    .ASCII "3. The Wolf of Wall Street\x00"
q7:      STRO q7Q, d
         CHARO '\n', i
         STRO q7A1, d
         CHARO '\n', i
         STRO q7A2, d
         CHARO '\n', i
         STRO q7A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i8:      .EQUATE 4 ;formal parameter #2d
q8Q:     .ASCII "\"Manners maketh man. Do you know what that means? Then let me teach you a lesson.\"\x00"
q8A1:    .ASCII "1. Iron Man 2\x00"
q8A2:    .ASCII "2. X-Men: First Class\x00"
q8A3:    .ASCII "3. Kingsman: The Secret Service\x00"
q8:      STRO q8Q, d
         CHARO '\n', i
         STRO q8A1, d
         CHARO '\n', i
         STRO q8A2, d
         CHARO '\n', i
         STRO q8A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



i9:      .EQUATE 4 ;formal parameter #2d
q9Q:     .ASCII "\"You know how Sister Berthe always makes me kiss the floor after we've had a disagreement? Well, lately I've taken to kissing the floor whenever I see her coming, just to save time.\"\x00"
q9A1:    .ASCII "1. Mary Poppins\x00"
q9A2:    .ASCII "2. My Fair Lady\x00"
q9A3:    .ASCII "3. The Sound Of Music\x00"
q9:      STRO q9Q, d
         CHARO '\n', i
         STRO q9A1, d
         CHARO '\n', i
         STRO q9A2, d
         CHARO '\n', i
         STRO q9A3, d
         CHARO '\n', i
         STRO enter, d
         ASLX
         DECI ans, x
         CHARO '\n', i
         RET0



ans:     .BLOCK 20 ;global variable #2d10a
keys:    .BLOCK 20 ;global variable #2d10a 
i:       .BLOCK 2 ;global variable #2d
score:   .EQUATE 0 ;local variable #2d
hi:      .ASCII "Welcome thingy.\x00"
bye:     .ASCII "Game ends here's your score bye thingy.\x00"

main:    SUBSP 2, i ;allocate #score
         LDA 0, i
         STA score, s

         ;initialize keys = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3}
         LDA 1, i
         LDX 0, i
         ASLX
         STA keys, x
         LDX 1, i
         ASLX
         STA keys, x
         LDX 2, i
         ASLX
         STA keys, x
         LDA 2, i
         LDX 3, i
         ASLX
         STA keys, x
         LDX 4, i
         ASLX
         STA keys, x
         LDX 5, i
         ASLX
         STA keys, x
         LDX 6, i
         ASLX
         STA keys, x
         LDA 3, i
         LDX 7, i
         ASLX
         STA keys, x
         LDX 8, i
         ASLX
         STA keys, x
         LDX 9, i
         ASLX
         STA keys, x

         STRO hi, d
         CHARO '\n', i

         ;function calls
         LDX 0, i
         STX -2, s
         SUBSP 2, i ;push #i0 
         CALL q0
         ADDSP 2, i ;pop #i0
         LDX 1, i
         STX -2, s
         SUBSP 2, i ;push #i1 
         CALL q1
         ADDSP 2, i ;pop #i1
         LDX 2, i
         STX -2, s
         SUBSP 2, i ;push #i2 
         CALL q2 
         ADDSP 2, i ;pop #i2
         LDX 3, i
         STX -2, s
         SUBSP 2, i ;push #i3
         CALL q3
         ADDSP 2, i ;pop #i3
         LDX 4, i
         STX -2, s
         SUBSP 2, i ;push #i4
         CALL q4
         ADDSP 2, i ;pop #i4
         LDX 5, i
         STX -2, s
         SUBSP 2, i ;push #i5
         CALL q5
         ADDSP 2, i ;pop #i5
         LDX 6, i
         STX -2, s
         SUBSP 2, i ;push #i6
         CALL q6
         ADDSP 2, i ;pop #i6
         LDX 7, i
         STX -2, s
         SUBSP 2, i ;push #i7
         CALL q7
         ADDSP 2, i ;pop #i7
         LDX 8, i
         STX -2, s
         SUBSP 2, i ;push #i8
         CALL q8
         ADDSP 2, i ;pop #i8
         LDX 9, i
         STX -2, s
         SUBSP 2, i ;push #i9
         CALL q9
         ADDSP 2, i ;pop #i9

         LDX 0, i
         STX i, d
loop:    LDX i, d
         CPX 10, i
         BRGE out
         ASLX
if:      LDA ans, x
         CPA keys, x
         BRNE after
         LDA score, s
         ADDA 1, i
         STA score, s
after:   LDX i, d
         ADDX 1, i
         STX i, d
         BR loop
out:     STRO bye, d
         CHARO '\n', i
         DECO score, s
         CHARO '\n', i
         SUBSP 2, i ;deallocate #score 
STOP
.END     