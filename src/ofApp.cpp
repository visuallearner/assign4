#include "ofApp.h"
int x;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(255,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    x = ofGetFrameNum();
    int objNum = (x/120)%4;
    if (objNum == 0){
    ofSetColor(237, 126, 57);
    ofSetLineWidth(5);
    ofDrawBitmapString("hi!! i am happy", 50,50);
    ofNoFill();
    ofDrawEllipse(300, 300, 250, 300);
    ofDrawBezier(205, 280, 225, 250, 245, 250, 265, 280);
    ofDrawBezier(335, 280, 355, 250, 375, 250, 395, 280);
    ofDrawBezier(235, 340, 278, 420, 322, 420, 365, 340);
    }
    
    if(objNum == 1){
    ofSetColor(34, 227, 221);
    ofSetLineWidth(5);
    ofDrawBitmapString("hi!! i am sad", 50,50);
    ofNoFill();
    ofDrawEllipse(300, 300, 250, 300);
    ofDrawBezier(205, 280, 225, 310, 245, 310, 265, 280);
    ofDrawBezier(335, 280, 355, 310, 375, 310, 395, 280);
    ofDrawBezier(235, 390, 278, 360, 322, 360, 365, 390);
    }
    
    if(objNum == 2){
    ofSetColor(250, 229, 37);
    ofSetLineWidth(5);
    ofDrawBitmapString("hi!! i am surprise", 50,50);
    ofNoFill();
    ofDrawEllipse(300, 300, 250, 300);
    ofDrawEllipse(238, 285, 30, 35);
    ofDrawEllipse(365, 285, 30, 35);
    ofDrawEllipse(300, 390, 35, 60);
    }
    
    if(objNum == 3){
    ofSetColor(222, 4, 4);
    ofSetLineWidth(5);
    ofDrawBitmapString("hi!! i am angry", 50,50);
    ofNoFill();
    ofDrawEllipse(300, 300, 250, 300);
    ofDrawLine(235,250,265,280);
    ofDrawLine(365,250,335,280);
    ofDrawLine(235,360,365,360);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
