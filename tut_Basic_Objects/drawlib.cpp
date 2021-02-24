#include "drawlib.h"

std::vector <Figure> forest;

clock_t curTime, startTime;

void animateScene(int value) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, animateScene, 1);
}

void drawGround() {
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(-1, -1);
    glColor3f(0, .5, 0);
    glVertex2f(-1, -.3);
    glColor3f(0, .8, 0);
    glVertex2f(1, -.3);
    glColor3f(0, .4, 0);
    glVertex2f(1, -1);
    glEnd();
}

void drawSaynotodrugs(Figure f) {
    glScalef(f.x, f.y, 1);

    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    //c   
    glVertex2f(-.25, .5);
    glVertex2f(-.35, .5);
    glVertex2f(-.35, .5);
    glVertex2f(-.35, .7);
    glVertex2f(-.35, .7);
    glVertex2f(-.25, .7);
    //k
    glVertex2f(-.2, .5);
    glVertex2f(-.2, .7);
    glVertex2f(-.2, .6);
    glVertex2f(-.1, .5);
    glVertex2f(-.2, .6);
    glVertex2f(-.1, .7);
    //a
    glVertex2f(-.05, .5);
    glVertex2f(0, .7);
    glVertex2f(0, .7);
    glVertex2f(.05, .5);
    glVertex2f(-.025, .6);
    glVertex2f(.025, .6);
    //zh
    glVertex2f(.1, .5);
    glVertex2f(.1, .7);
    glVertex2f(.15, .5);
    glVertex2f(.15, .7);
    glVertex2f(.2, .5);
    glVertex2f(.2, .7);
    glVertex2f(.1, .6);
    glVertex2f(.2, .6);
    //i
    glVertex2f(.25, .5);
    glVertex2f(.25, .7);
    glVertex2f(.35, .5);
    glVertex2f(.35, .7);
    glVertex2f(.25, .5);
    glVertex2f(.35, .7);
    //n
    glVertex2f(-.75, .2);
    glVertex2f(-.75, .4);
    glVertex2f(-.65, .2);
    glVertex2f(-.65, .4);
    glVertex2f(-.75, .3);
    glVertex2f(-.65, .3);
    //a
    glVertex2f(-.6, .2);
    glVertex2f(-.55, .4);
    glVertex2f(-.55, .4);
    glVertex2f(-.5, .2);
    glVertex2f(-.575, .3);
    glVertex2f(-.525, .3);
    //r
    glVertex2f(-.45, .2);
    glVertex2f(-.45, .4);
    glVertex2f(-.45, .4);
    glVertex2f(-.35, .4);
    glVertex2f(-.35, .4);
    glVertex2f(-.35, .3);
    glVertex2f(-.35, .3);
    glVertex2f(-.45, .3);
    glColor3f(f.r, f.g, f.b);
    //k
    glVertex2f(-.3, .2);
    glVertex2f(-.3, .4);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .2);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .4);
    //o
    glVertex2f(-.15, .2);
    glVertex2f(-.15, .4);
    glVertex2f(-.15, .4);
    glVertex2f(-.05, .4);
    glVertex2f(-.05, .4);
    glVertex2f(-.05, .2);
    glVertex2f(-.05, .2);
    glVertex2f(-.15, .2);
    //t
    glVertex2f(0, .4);
    glVertex2f(.1, .4);
    glVertex2f(.05, .4);
    glVertex2f(.05, .2);
    //i
    glVertex2f(.15, .2);
    glVertex2f(.15, .4);
    glVertex2f(.25, .2);
    glVertex2f(.25, .4);
    glVertex2f(.15, .2);
    glVertex2f(.25, .4);
    //k
    glVertex2f(.3, .2);
    glVertex2f(.3, .4);
    glVertex2f(.3, .3);
    glVertex2f(.4, .2);
    glVertex2f(.3, .3);
    glVertex2f(.4, .4);
    //a
    glVertex2f(.45, .2);
    glVertex2f(.5, .4);
    glVertex2f(.5, .4);
    glVertex2f(.55, .2);
    glVertex2f(.475, .3);
    glVertex2f(.525, .3);
    //m
    glVertex2f(.6, .2);
    glVertex2f(.6, .4);
    glVertex2f(.7, .2);
    glVertex2f(.7, .4);
    glVertex2f(.6, .4);
    glVertex2f(.65, .2);
    glVertex2f(.65, .2);
    glVertex2f(.7, .4);
    glColor3f(1, 1, 1);
    //n
    glVertex2f(-.2, -.1);
    glVertex2f(-.2, .1);
    glVertex2f(-.1, -.1);
    glVertex2f(-.1, .1);
    glVertex2f(-.2, 0);
    glVertex2f(-.1, 0);
    //e
    glVertex2f(-.05, -.1);
    glVertex2f(-.05, .1);
    glVertex2f(-.05, .1);
    glVertex2f(.05, .1);
    glVertex2f(-.05, -.1);
    glVertex2f(.05, -.1);
    glVertex2f(-.05, 0);
    glVertex2f(.05, 0);
    //t
    glVertex2f(.1, .1);
    glVertex2f(.2, .1);
    glVertex2f(.15, .1);
    glVertex2f(.15, -.1);
    glEnd();
}

void drawCat(Figure f) {
    glTranslatef(f.x, f.y, 0);

    glBegin(GL_TRIANGLES);
    //head
    glColor3f(f.r2, f.g2, f.b2);
    glVertex2f(.0, .0);
    glVertex2f(.5, .5);
    glVertex2f(-.5, .5);
    //lear
    glVertex2f(-.5, .5);
    glVertex2f(-.3, .5);
    glVertex2f(-.4, .7);
    //rear   
    glVertex2f(.5, .5);
    glVertex2f(.3, .5);
    glVertex2f(.4, .7);
    //leye
    glColor3f(f.r, f.g, f.b);
    glVertex2f(-.3, .4);
    glVertex2f(-.1, .4);
    glVertex2f(-.2, .3);
    //reye   
    glVertex2f(.3, .4);
    glVertex2f(.1, .4);
    glVertex2f(.2, .3);
    //nose
    glColor3f(0.98, 0.01, 0.92);
    glVertex2f(-.1, .2);
    glVertex2f(.1, .2);
    glVertex2f(.0, .3);
    glEnd();

    glBegin(GL_QUADS);
    //body
    glColor3f(0.9, 0.6, 0.01);
    glVertex2f(-.2, .0);
    glVertex2f(.2, .0);
    glVertex2f(.2, -.5);
    glVertex2f(-.2, -.5);
    glEnd();

    glPushMatrix();
    glTranslatef(0, .8, 0);

    glBegin(GL_QUADS);
    //hat
    glColor3f(0, 0, 0);
    glVertex2f(-.5, -.3);
    glVertex2f(-.5, -.2);
    glVertex2f(.5, -.2);
    glVertex2f(.5, -.3);
    glColor3f(1, 1, 0);
    glVertex2f(-.5, -.2);
    glVertex2f(-.5, -.1);
    glVertex2f(.5, -.1);
    glVertex2f(.5, -.2);
    glVertex2f(-.5, .2);
    glVertex2f(-.5, .3);
    glVertex2f(.5, .3);
    glVertex2f(.5, .2);
    glColor3f(1, 0, 0);
    glVertex2f(-.5, -.1);
    glVertex2f(-.5, -.0);
    glVertex2f(.5, -.0);
    glVertex2f(.5, -.1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 1, 0);
    glVertex2f(-.5, .2);
    glVertex2f(-.4, 0);
    glVertex2f(-.3, .2);
    glVertex2f(-.3, .2);
    glVertex2f(-.2, 0);
    glVertex2f(-.1, .2);
    glVertex2f(-.1, .2);
    glVertex2f(0, 0);
    glVertex2f(.1, .2);
    glVertex2f(.1, .2);
    glVertex2f(.2, 0);
    glVertex2f(.3, .2);
    glVertex2f(.3, .2);
    glVertex2f(.4, 0);
    glVertex2f(.5, .2);
    glColor3f(0, 0, 0);
    glVertex2f(-.5, 0);
    glVertex2f(-.5, .2);
    glVertex2f(-.4, .0);
    glVertex2f(-.4, .0);
    glVertex2f(-.3, .2);
    glVertex2f(-.2, 0);
    glVertex2f(-.2, 0);
    glVertex2f(-.1, .2);
    glVertex2f(0, 0);
    glVertex2f(.0, 0);
    glVertex2f(.1, .2);
    glVertex2f(.2, 0);
    glVertex2f(.2, 0);
    glVertex2f(.3, .2);
    glVertex2f(.4, 0);
    glVertex2f(.4, 0);
    glVertex2f(.5, .2);
    glVertex2f(.5, 0);
    glColor3f(1, 0, 0);
    glVertex2f(-.5, .3);
    glVertex2f(-.4, .4);
    glVertex2f(-.3, .3);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .4);
    glVertex2f(-.1, .3);
    glVertex2f(-.1, .3);
    glVertex2f(0, .4);
    glVertex2f(.1, .3);
    glVertex2f(.1, .3);
    glVertex2f(.2, .4);
    glVertex2f(.3, .3);
    glVertex2f(.3, .3);
    glVertex2f(.4, .4);
    glVertex2f(.5, .3);
    glColor3f(0, 0, 0);
    glVertex2f(-.4, .4);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .4);
    glVertex2f(-.2, .4);
    glVertex2f(-.1, .3);
    glVertex2f(0, .4);
    glVertex2f(0, .4);
    glVertex2f(.1, .3);
    glVertex2f(.2, .4);
    glVertex2f(.2, .4);
    glVertex2f(.3, .3);
    glVertex2f(.4, .4);
    glEnd();

    glScalef(0.8, 0.8, 0);
    glTranslatef(-.3, -1, 0);

    glBegin(GL_QUADS);
    //cig
    glColor3f(1, 1, 1);
    glVertex2f(-.3, .1);
    glVertex2f(-.3, .2);
    glVertex2f(.1, .2);
    glVertex2f(.1, .1);
    glColor3f(1, 0.6, 0);
    glVertex2f(.1, .1);
    glVertex2f(.1, .2);
    glVertex2f(.3, .2);
    glVertex2f(.3, .1);
    glColor3f(f.r1, f.g1, f.b1);
    glVertex2f(-.4, .1);
    glVertex2f(-.4, .2);
    glVertex2f(-.3, .2);
    glVertex2f(-.3, .1);
    glEnd();

    glPopMatrix();
}

void drawHouse(Figure f) {
    glBegin(GL_QUADS);
    //wall
    glColor3f(1, 0.9, 0.8);
    glVertex2f(-.6, -.5);
    glVertex2f(-.6, .4);
    glVertex2f(.6, .4);
    glVertex2f(.6, -.5);
    //llbwindow
    glColor3f(f.r, f.g, f.b);
    glVertex2f(-.5, -.2);
    glVertex2f(-.5, 0);
    glVertex2f(-.4, 0);
    glVertex2f(-.4, -.2);
    //lrbwindow
    glVertex2f(-.3, -.2);
    glVertex2f(-.3, 0);
    glVertex2f(-.2, 0);
    glVertex2f(-.2, -.2);
    //lluwindow
    glVertex2f(-.5, .1);
    glVertex2f(-.5, .3);
    glVertex2f(-.4, .3);
    glVertex2f(-.4, .1);
    //lruwindow
    glVertex2f(-.3, .1);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .3);
    glVertex2f(-.2, .1);
    //rlbwindow
    glVertex2f(.2, -.2);
    glVertex2f(.2, 0);
    glVertex2f(.3, 0);
    glVertex2f(.3, -.2);
    //rrbwindow
    glVertex2f(.4, -.2);
    glVertex2f(.4, 0);
    glVertex2f(.5, 0);
    glVertex2f(.5, -.2);
    //rluwindow
    glVertex2f(.2, .1);
    glVertex2f(.2, .3);
    glVertex2f(.3, .3);
    glVertex2f(.3, .1);
    //rruwindow
    glVertex2f(.4, .1);
    glVertex2f(.4, .3);
    glVertex2f(.5, .3);
    glVertex2f(.5, .1);
    //door
    glColor3f(0.6, 0.4, 0.2);
    glVertex2f(-.1, -.5);
    glVertex2f(-.1, -.2);
    glVertex2f(.1, -.2);
    glVertex2f(.1, -.5);
    glEnd();

    glPushMatrix();
    glTranslatef(0, .3, 0);

    glBegin(GL_LINES);
    //smoke    
    glColor3f(f.r1, f.g1, f.b1);
    glVertex2f(.4, .5);
    glVertex2f(.5, .7);
    glVertex2f(.45, .5);
    glVertex2f(.55, .7);
    glVertex2f(.5, .5);
    glVertex2f(.6, .7);
    glVertex2f(.55, .5);
    glVertex2f(.65, .7);
    glVertex2f(.6, .5);
    glVertex2f(.7, .7);
    glEnd();

    glPopMatrix();

    glBegin(GL_QUADS);
    //pipe
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(.4, .5);
    glVertex2f(.4, .8);
    glVertex2f(.6, .8);
    glVertex2f(.6, .5);
    glEnd();

    glBegin(GL_TRIANGLES);
    //roof
    glColor3f(0.8, 0.3, 0.3);
    glVertex2f(-.8, .4);
    glVertex2f(0, .9);
    glVertex2f(.8, .4);
    glEnd();
}

void drawUFO(Figure f) {
    glTranslatef(f.x, f.y, 0);

    glBegin(GL_QUADS);
    //korpus
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(-.6, -.2);
    glVertex2f(-.6, .1);
    glVertex2f(.6, .1);
    glVertex2f(.6, -.2);
    //kabina
    glVertex2f(-.3, .1);
    glVertex2f(-.2, .4);
    glVertex2f(.2, .4);
    glVertex2f(.3, .1);
    //l
    glVertex2f(-.7, .0);
    glVertex2f(-.6, .1);
    glVertex2f(-.6, -.2);
    glVertex2f(-.7, -.1);
    //r
    glVertex2f(.7, .0);
    glVertex2f(.6, .1);
    glVertex2f(.6, -.2);
    glVertex2f(.7, -.1);
    //window
    glColor3f(0, 0, 1);
    glVertex2f(-.2, .1);
    glVertex2f(-.1, .3);
    glVertex2f(.1, .3);
    glVertex2f(.2, .1);
    glEnd();
}

void drawTree(Figure f) {
    glPushMatrix();
    glTranslatef(f.x, f.y, 0);

    glBegin(GL_TRIANGLES);
    //leaves
    glColor3f(0, .5, 0);
    glVertex2f(-.8, -.4);
    glColor3f(0, .8, 0);
    glVertex2f(0, .8);
    glColor3f(0, .4, 0);
    glVertex2f(.8, -.4);
    glEnd();
    glBegin(GL_QUADS);
    //wood
    glColor3f(.58, .43, .2);
    glVertex2f(-.1, -.8);
    glVertex2f(-.1, -.4);
    glVertex2f(.1, -.4);
    glVertex2f(.1, -.8);
    glEnd();

    glPopMatrix();
}

void drawSky(Figure f) {
    glBegin(GL_QUADS);
    glColor3f(f.r, f.g, f.b);
    glVertex2f(-1, -.3);
    glColor3f(f.r1, f.g1, f.b1);
    glVertex2f(-1, 1);
    glColor3f(f.r2, f.g2, f.b2);
    glVertex2f(1, 1);
    glColor3f(f.r3, f.g3, f.b3);
    glVertex2f(1, -.3);
    glEnd();
}

void drawForest() {
    glPushMatrix();
    glScalef(.25, .25, 1);

    for (int i = 0; i < forest.size(); i++) {
        drawTree(forest[i]);
    }

    glPopMatrix();
}

void initForest() {
    srand(clock());

    Figure f;
    for (int i = 0; i < 30; i++) {
        f.x = .1 * (rand() % 100) - 5.0;
        f.y = 0.05 * (rand() % 10) - 3.0;
        forest.push_back(f);
    }
}

void Draw() {
    curTime = clock() - startTime;

    Figure cat;
    Figure house;
    Figure tree;
    Figure ufo;
    Figure sky;
    Figure drgs;

    cat.x = 0;
    cat.y = 0;

    house.r = 0;
    house.g = .4;
    house.b = 1;

    house.r1 = 0;
    house.g1 = .48;
    house.b1 = 1;

    sky.r = .9;
    sky.g = .95;
    sky.b = 1;

    sky.r1 = .4;
    sky.g1 = .69;
    sky.b1 = 1;

    sky.r2 = 0;
    sky.g2 = .48;
    sky.b2 = 1;

    sky.r3 = .5;
    sky.g3 = .74;
    sky.b3 = 1;

    drgs.x = 0;
    drgs.y = 0;

    ufo.x = -3;
    ufo.y = 0;

    if (curTime < 5000) {
        cat.x = curTime * -0.001;

        cat.r1 = sin(curTime * 0.005);

        cat.r2 = 0.9;
        cat.g2 = 0.6;
        cat.b2 = 0.1;
    }
    else {
        if (curTime < 12000) {
            cat.x = 5;

            house.r = 1;
            house.g = 1;
            house.b = 0;

            house.r1 = sin(curTime * 0.005);
            house.g1 = sin(curTime * 0.005);
            house.b1 = sin(curTime * 0.005);

            sky.r = 0;
            sky.g = 0;
            sky.b = .4;

            sky.r1 = 0;
            sky.g1 = 0;
            sky.b1 = .3;

            sky.r2 = 0;
            sky.g2 = 0;
            sky.b2 = .5;

            sky.r3 = 0;
            sky.g3 = 0;
            sky.b3 = .2;

            ufo.x = (curTime - 12000) * 0.001;
        }
        else {
            if (curTime < 18000) {
                cat.x = (curTime - 17000) * 0.001;
                cat.y = (curTime - 12000) * 0.001;

                cat.r = sin(curTime * 0.005);

                cat.r1 = sin(curTime * 0.005);

                cat.g2 = 1;

                ufo.x = (curTime - 12000) * 0.0005;
                ufo.y = (curTime - 12000) * 0.0005;
            }
            else {
                if (curTime < 25000) {
                    drgs.x = 1;
                    drgs.y = 1;
                    drgs.r = sin(curTime * 0.005);
                    drgs.g = 0;
                    drgs.b = 0;
                }
            }
        }
    }

    /*ufo.x = 0;
    ufo.y = 0;*/

    /*if (curTime < 12000) {
        ufo.x = (curTime - 12000) * 0.001;
    }
    else {
        if (curTime < 18000) {
            ufo.x = (curTime - 12000) * 0.0005;
            ufo.y = (curTime - 12000) * 0.0005;
        }
    }*/

    glPushMatrix();
    drawGround();
    drawSky(sky);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, .5, 0);
    drawForest();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -.1, 0);
    glScalef(.8, .8, 0);
    drawHouse(house);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, -.4, 0);
    glScalef(.2, .2, 1);
    drawCat(cat);
    glPopMatrix();

    glPushMatrix();
    glScalef(.4, .4, 1);
    drawUFO(ufo);
    glPopMatrix();

    glPushMatrix();
    drawSaynotodrugs(drgs);
    glPopMatrix();
}