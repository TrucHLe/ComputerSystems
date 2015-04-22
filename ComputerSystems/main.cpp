//
//  main.cpp
//  ComputerSystems
//
//  Created by Nick Ailstock and Truc Le on 4/6/15.
//  Copyright (c) 2015. All rights reserved.
//

#include <iostream>
using namespace std;

int ans[10];
int keys[10] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3};
int i;

/**
 LDX 0, i
 ASLX
 LDA num, i
 STA vector, x
 
 LDX 1, i
 ASLX
 LDA num1, i
 STA vector, x
 **/


void q0(int i) {
    cout << "\"Life moves pretty fast. If you don't stop and look around once in a while, you could miss it.\"" << endl;
    cout << "1. Ferris Bueller's Day Off" << endl;
    cout << "2. Christmas Vacation" << endl;
    cout << "3. Grown Ups" << endl;
    cout << ">  ";
    cin >> ans[i];
    
    if (ans[i] != keys[i])
        cout << "Wrong! It's Ferris Bueller's Day Off." << endl;
    else
        cout << "Correct!" << endl;
    cout << endl;
}


void q1(int i) {
    cout << "\"If you want to know what a man's like, take a good look at how he treats his inferiors, not his equals.\"" << endl;
    cout << "1. Harry Potter and the Goblet of Fire" << endl;
    cout << "2. The Chronicles of Narnia: Prince Caspian" << endl;
    cout << "3. Percy Jackson & the Olympians: The Lightning Thief" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's Harry Potter and the Goblet of Fire." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q2(int i) {
    cout << "\"This is awkward. Not you're awkward but just because we're - I'm awkward, you're gorgeous - wait what?\"" << endl;
    cout << "1. Frozen" << endl;
    cout << "2. Tangled" << endl;
    cout << "3. The Princess Diaries 2: Royal Engagement." << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's Frozen.s" << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q3(int i) {
    cout << "\"Do, or do not. There is no 'try'.\""<< endl;
    cout << "1. Star Wars IV: A New Hope" << endl;
    cout << "2. Star Wars V: The Empire Strikes Back" << endl;
    cout << "3. Star Wars VI: Return of the Jedi" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's Star Wars V: The Empire Strikes Back." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q4(int i) {
    cout << "\"I shall call him squishy and he shall be mine. He shall be my squishy. Come here squishy!\"" << endl;
    cout << "1. Monsters, Inc." << endl;
    cout << "2. Finding Nemo" << endl;
    cout << "3. Toy Story 3" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's Finding Nemo." << endl;
    else
        cout << "Correct!" << endl;

    cout << endl;
}


void q5(int i) {
    cout << "\"Sometimes it is the people who no one imagines anything of who do the things that no one can imagine.\"" << endl;
    cout << "1. The Theory of Everything" << endl;
    cout << "2. The Imitation Game" << endl;
    cout << "3. Birdman" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's The Imitation Game." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q6(int i) {
    cout << "\"Rudeness is merely an expression of fear. People fear they won't get what they want. The most dreadful and unattractive person only needs to be loved, and they will open up like a flower.\"" << endl;
    cout << "1. Boyhood" << endl;
    cout << "2. The Grand Budapest Hotel" << endl;
    cout << "3. 12 Years a Slave" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's The Grand Budapest Hotel." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q7(int i) {
    cout << "\"Sell me this pen.\"" << endl;
    cout << "1. American Hustle" << endl;
    cout << "2. Dallas Buyers Club" << endl;
    cout << "3. The Wolf of Wall Street" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's The Wolf of Wall Street." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q8(int i) {
    cout << "\"Manners maketh man. Do you know what that means? Then let me teach you a lesson.\"" << endl;
    cout << "1. Iron Man 2" << endl;
    cout << "2. X-Men: First Class" << endl;
    cout << "3. Kingsman: The Secret Service" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's Kingsman: The Secret Service." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}


void q9(int i) {
    cout << "\"You know how Sister Berthe always makes me kiss the floor after we've had a disagreement? Well, lately I've taken to kissing the floor whenever I see her coming, just to save time.\"" << endl;
    cout << "1. Mary Poppins" << endl;
    cout << "2. My Fair Lady" << endl;
    cout << "3. The Sound Of Music" << endl;
    cout << ">  ";
    cin >> ans[i];

    if (ans[i] != keys[i])
        cout << "Wrong! It's The Sound Of Music." << endl;
    else
        cout << "Correct!" << endl;
    
    cout << endl;
}

int main() {
    int score = 0;
    
    cout << "Now listen you guys," << endl;
    cout << "You know what normal kids would've instilled to slack off," << endl;
    cout << "But not you guys, because you're not normal." << endl;
    cout << "You're special." << endl;
    cout << "And because i think you have the right attitude, I think it's time we started our new class project." << endl;
    cout << "It's called.... Famous Movies' Quotes." << endl;
    cout << "And it's a requirement. And it may sound easy, but nothing could be harder." << endl;
    cout << "It will test your head, and your mind, and your brain too." << endl;
    cout << "And you could say that every team in the state will be competing for the top prize." << endl;
    cout << "Now lets see how many movies you've been watching." << endl;
    cout << endl;


    q0(0);
    q1(1);
    q2(2);
    q3(3);
    q4(4);
    q5(5);
    q6(6);
    q7(7);
    q8(8);
    q9(9);
    
    
    for (int i = 0; i < 10; i++)
    {
        if (ans[i] == keys[i]) {
            score = score + 1;
        }
    }
    
    
    cout << "Congratulations, you have completed the most difficult game ever converted into PEP8! Your total score is ";
    cout << score;
    cout << "/10" << endl;
    cout << "We will be having milk in cookies in Phy Psy to celebrate!" << endl;
    
    return 0;


}
