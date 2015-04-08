//
//  main.cpp
//  ComputerSystems
//
//  Created by Sneaky Nick and foreign communist "Bamboo" on 4/6/15.
//  Copyright (c) 2015. All rights reserved.
//

#include <iostream>
using namespace std;

int ans[10];


void q0() {
    cout << "\"Life moves pretty fast. If you don't stop and look around once in a while, you could miss it.\"" << endl;
    cout << "1. Ferris Bueller's Day Off" << endl;
    cout << "2. Christmas Vacation" << endl;
    cout << "3. Grown Ups" << endl;
    cin >> ans[0];
    cout << endl;
}


void q1() {
    cout << "\"If you want to know what a man's like, take a good look at how he treats his inferiors, not his equals.\"" << endl;
    cout << "1. Percy Jackson & the Olympians: The Lightning Thief" << endl;
    cout << "2. The Chronicles of Narnia: Prince Caspian" << endl;
    cout << "3. Harry Potter and the Goblet of Fire" << endl;
    cin >> ans[1];
    cout << endl;
}


void q2() {
    cout << "\"This is awkward. Not you're awkward but just because we're - I'm awkward, you're gorgeous - wait what?\"" << endl;
    cout << "1. Tangled" << endl;
    cout << "2. Frozen" << endl;
    cout << "3. The Princess Diaries 2: Royal Engagement" << endl;
    cin >> ans[2];
    cout << endl;
}


void q3() {
    cout << "\"Do, or do not. There is no 'try'.\""<< endl;
    cout << "1. Star Wars IV: A New Hope" << endl;
    cout << "2. Star Wars V: The Empire Strikes Back" << endl;
    cout << "3. Star Wars VI: Return of the Jedi" << endl;
    cin >> ans[3];
    cout << endl;
}


void q4() {
    cout << "\"I shall call him squishy and he shall be mine. He shall be my squishy. Come here squishy!\"" << endl;
    cout << "1. Monsters, Inc." << endl;
    cout << "2. Toy Story 3" << endl;
    cout << "3. Finding Nemo" << endl;
    cin >> ans[4];
    cout << endl;
}


void q5() {
    cout << "\"Sometimes it is the people who no one imagines anything of who do the things that no one can imagine.\"" << endl;
    cout << "1. The Theory of Everything" << endl;
    cout << "2. The Imitation Game" << endl;
    cout << "3. Birdman" << endl;
    cin >> ans[5];
    cout << endl;
}


void q6() {
    cout << "\"Rudeness is merely an expression of fear. People fear they won't get what they want. The most dreadful and unattractive person only needs to be loved, and they will open up like a flower.\"" << endl;
    cout << "1. The Grand Budapest Hotel" << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cin >> ans[6];
    cout << endl;
}


void q7() {
    cout << "\"Sell me this pen.\"" << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. The Wolf of Wall Street" << endl;
    cin >> ans[7];
    cout << endl;
}


void q8() {
    cout << "\"Manners maketh man. Do you know what that means? Then let me teach you a lesson.\"" << endl;
    cout << "1. Kingsman: The Secret Service" << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cin >> ans[8];
    cout << endl;
}


void q9() {
    cout << "\"You know how Sister Berthe always makes me kiss the floor after we've had a disagreement? Well, lately I've taken to kissing the floor whenever I see her coming, just to save time.\"" << endl;
    cout << "1. " << endl;
    cout << "2. The Sound Of Music" << endl;
    cout << "3. " << endl;
    cin >> ans[9];
    cout << endl;
}

int main() {
    
    int keys[10] = {1, 3, 2, 2, 3, 2, 1, 3, 1, 2}; //array of answer keys
    int score = 0;
    
    cout << "Welcome thingy." << endl;
    cout << endl;


    q0();
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    q8();
    q9();
    

    
    for (int i = 0; i < 10; i++)
    {
        if (ans[i] == keys[i]) {
            score = score + 1;
        }
    }
    
    
    cout << "Game ends here's your score bye thingy." << endl;
    cout << score << endl;
    
    return 0;


}
