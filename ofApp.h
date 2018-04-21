// Example 3. Finding the Brightest Pixel in an Image

#pragma once
#include "ofMain.h"
#include "Snake.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    ofVideoGrabber vidGrabber;
    void mousePressed(int x, int y, int button);
    void keyPressed(int key);

    int count;
    int sumCloseColorsX, sumCloseColorsY;
    int closestColorX, closestColorY;

    float rTarget;
    float gTarget;
    float bTarget;
    float threshold;

    Snake spotted;
};
