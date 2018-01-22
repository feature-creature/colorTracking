#pragma once

#include "ofMain.h"

class Snake{
    public:
        Snake();

        // class variables

        deque <ofPoint> verts;

        // class functions
        void setup();
        void draw();
        void update();

        void addLocation(int x, int y);


};
