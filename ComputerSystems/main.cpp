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


void q0(int i) {
    cout << "\"Life moves pretty fast. If you don't stop and look around once in a while, you could miss it.\"" << endl;
    cout << "1. Ferris Bueller's Day Off" << endl;
    cout << "2. Christmas Vacation" << endl;
    cout << "3. Grown Ups" << endl;
    cin >> ans[i];
    cout << endl;
}


void q1(int i) {
    cout << "\"If you want to know what a man's like, take a good look at how he treats his inferiors, not his equals.\"" << endl;
    cout << "1. Percy Jackson & the Olympians: The Lightning Thief" << endl;
    cout << "2. The Chronicles of Narnia: Prince Caspian" << endl;
    cout << "3. Harry Potter and the Goblet of Fire" << endl;
    cin >> ans[i];
    cout << endl;
}


void q2(int i) {
    cout << "\"This is awkward. Not you're awkward but just because we're - I'm awkward, you're gorgeous - wait what?\"" << endl;
    cout << "1. Tangled" << endl;
    cout << "2. Frozen" << endl;
    cout << "3. The Princess Diaries 2: Royal Engagement" << endl;
    cin >> ans[i];
    cout << endl;
}


void q3(int i) {
    cout << "\"Do, or do not. There is no 'try'.\""<< endl;
    cout << "1. Star Wars IV: A New Hope" << endl;
    cout << "2. Star Wars V: The Empire Strikes Back" << endl;
    cout << "3. Star Wars VI: Return of the Jedi" << endl;
    cin >> ans[i];
    cout << endl;
}


void q4(int i) {
    cout << "\"I shall call him squishy and he shall be mine. He shall be my squishy. Come here squishy!\"" << endl;
    cout << "1. Monsters, Inc." << endl;
    cout << "2. Toy Story 3" << endl;
    cout << "3. Finding Nemo" << endl;
    cin >> ans[i];
    cout << endl;
}


void q5(int i) {
    cout << "\"Sometimes it is the people who no one imagines anything of who do the things that no one can imagine.\"" << endl;
    cout << "1. The Theory of Everything" << endl;
    cout << "2. The Imitation Game" << endl;
    cout << "3. Birdman" << endl;
    cin >> ans[i];
    cout << endl;
}


void q6(int i) {
    cout << "\"Rudeness is merely an expression of fear. People fear they won't get what they want. The most dreadful and unattractive person only needs to be loved, and they will open up like a flower.\"" << endl;
    cout << "1. The Grand Budapest Hotel" << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cin >> ans[i];
    cout << endl;
}


void q7(int i) {
    cout << "\"Sell me this pen.\"" << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. The Wolf of Wall Street" << endl;
    cin >> ans[i];
    cout << endl;
}


void q8(int i) {
    cout << "\"Manners maketh man. Do you know what that means? Then let me teach you a lesson.\"" << endl;
    cout << "1. Kingsman: The Secret Service" << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cin >> ans[i];
    cout << endl;
}


void q9(int i) {
    cout << "\"You know how Sister Berthe always makes me kiss the floor after we've had a disagreement? Well, lately I've taken to kissing the floor whenever I see her coming, just to save time.\"" << endl;
    cout << "1. " << endl;
    cout << "2. The Sound Of Music" << endl;
    cout << "3. " << endl;
    cin >> ans[i];
    cout << endl;
}

int main() {
    
    int keys[10] = {1, 3, 2, 2, 3, 2, 1, 3, 1, 2}; //array of answer keys
    int score = 0;
    
    cout << "Welcome thingy." << endl;
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
    
    
    cout << "Game ends here's your score bye thingy." << endl;
    cout << score << endl;
    
    return 0;


}
