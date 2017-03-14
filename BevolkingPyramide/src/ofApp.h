#pragma once

#include "ofMain.h"
#include "SQLiteCpp.h"

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        void keyReleased(int key);

        void mouseMoved(int x, int y);

        void mouseDragged(int x, int y, int button);

        void mousePressed(int x, int y, int button);

        void mouseReleased(int x, int y, int button);

        void mouseEntered(int x, int y);

        void mouseExited(int x, int y);

    private:
        SQLite::Database* db;

        int total;
        int age0to20;
        int age20to45;
        int age45to65;
        int age65to80;
};
