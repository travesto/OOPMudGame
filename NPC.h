#ifndef NPC_h
#define NPC_h
#include <iostream>

class NPC {
	public:
		NPC(string n) {this->name = n; this->npcDialouge = "Hello I am " + this->name + ".";} //Give an NPC a name
		~NPC() {}
		string getDialogue() const;
		void setDialogue();
		
		
	private:
		string name;
		string npcDialogue;
};

void NPC::setDialogue() const {
	int randNum = rand()%(5-0 + 1) + 0;
	switch(randNum):
		case 0:
			this->npcDialogue = "Konnichiwa! (Good day!/Hello!)";
		case 1:
			this->npcDialogue = "What's up pleb.";
		case 2:
			this->npcDialogue = "What do you want? I am busy!";
		case 3:
			this->npcDialogue = "Stop annoying me!";
		case 4:
			this->npcDialogue = "...Hm. I was just resting my eyes.";
		case 5:
			this->npcDialogue = "What have you done now you donkey!";
}

string NPC::getDialogue() {
	this->setDialogue();
	return this->npcDialogue;
}

