#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetFrameRate(60);
	ofSetWindowTitle("magadama");

	noise = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofRotate(ofGetFrameNum() % 360);
	
	float radius = 300;
	float rate = 0.5528;
	if (ofGetFrameNum() > 300) {
		rate = ofMap(ofNoise(noise), 0, 1, 2, -2);
		noise += 0.02;
	}

	ofSetColor(255);

	ofBeginShape();
	ofVertex(0, 0);
	ofBezierVertex((-radius / 2) * rate, 0, -radius / 2, (radius / 2) * rate, -radius / 2, radius / 2);
	ofBezierVertex(-radius / 2, (radius / 2) * (1 + rate), (-radius / 2) * rate, radius, 0, radius);
	ofBezierVertex(radius * rate, radius, radius, radius * rate, radius, 0);
	ofBezierVertex(radius, -radius * rate, radius * rate, -radius, 0, -radius);
	ofBezierVertex((radius / 2) * rate, -radius, radius / 2, (-radius / 2) - (radius / 2) * rate, radius / 2, -radius / 2);
	ofBezierVertex(radius / 2, -radius / 2 * rate, radius / 2 * rate, 0, 0, 0);
	ofEndShape();

	ofSetColor(0);

	ofPushMatrix();
	ofTranslate(0, radius / 2);
	float m_radius = radius / 10;

	ofBeginShape();
	ofVertex(0, m_radius);
	ofBezierVertex(m_radius * rate, m_radius, m_radius, m_radius * rate, m_radius, 0);
	ofBezierVertex(m_radius, -m_radius * rate, m_radius * rate, -m_radius, 0, -m_radius);
	ofBezierVertex(-m_radius * rate, -m_radius, -m_radius, -m_radius * rate, -m_radius, 0);
	ofBezierVertex(-m_radius, m_radius * rate, -m_radius * rate, m_radius, 0, m_radius);
	ofEndShape();
	ofPopMatrix();

	ofRotate(180);

	ofSetColor(255, 0, 0);

	ofBeginShape();
	ofVertex(0, 0);
	ofBezierVertex((-radius / 2) * rate, 0, -radius / 2, (radius / 2) * rate, -radius / 2, radius / 2);
	ofBezierVertex(-radius / 2, (radius / 2) * (1 + rate), (-radius / 2) * rate, radius, 0, radius);
	ofBezierVertex(radius * rate, radius, radius, radius * rate, radius, 0);
	ofBezierVertex(radius, -radius * rate, radius * rate, -radius, 0, -radius);
	ofBezierVertex((radius / 2) * rate, -radius, radius / 2, (-radius / 2) - (radius / 2) * rate, radius / 2, -radius / 2);
	ofBezierVertex(radius / 2, -radius / 2 * rate, radius / 2 * rate, 0, 0, 0);
	ofEndShape();

	ofSetColor(0);

	ofPushMatrix();
	ofTranslate(0, radius / 2);
	m_radius = radius / 10;

	ofBeginShape();
	ofVertex(0, m_radius);
	ofBezierVertex(m_radius * rate, m_radius, m_radius, m_radius * rate, m_radius, 0);
	ofBezierVertex(m_radius, -m_radius * rate, m_radius * rate, -m_radius, 0, -m_radius);
	ofBezierVertex(-m_radius * rate, -m_radius, -m_radius, -m_radius * rate, -m_radius, 0);
	ofBezierVertex(-m_radius, m_radius * rate, -m_radius * rate, m_radius, 0, m_radius);
	ofEndShape();
	ofPopMatrix();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
