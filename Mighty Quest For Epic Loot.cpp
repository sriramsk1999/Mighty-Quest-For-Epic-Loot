
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<windows.h>
#include<stdlib.h>
std::string name;

void act_2_hardline_inn()
{
	using namespace std;
	int a2c_hardline_1;
	void act_2_hardline_kingkiller();
	void act_2_neutral();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "ACT 2 Part 2 : Path of the Rebellious \n\n";
	cout << "Setting : The Town of Trebol ( Lower District ) \n\n";
	cout << "(You and Galahad make your way slowly to a shabby inn. After the incident with the chief and his now-dead men a price had been placed on your heads. A big one.";
	cout << " This had dissuaded you from going to the better parts of town.) \n\n\n ";
	cout << "The inn is known by the name of 'The Swindler's Swill' which is certainly not doing its clientele any favours.";
	_getch();
	cout << " You walk through the doors with Galahad and take your place in a quiet corner. The place was practically empty with a few leather-clad men (mercenaries probably) being the only customers. \n";
	cout << "You and Galahad take your place in a musty corner, order a few drinks and drink silently. After a while you notice a few large armed men standing conspicously. \n";
	cout << "However, that's the least of your worries. A woman (also leather clad) walks in through the back door and sits at your table with bounty posters. \n";
	cout << "She doesn't waste any time beating around the bush.";
	_getch();
	cout << "\n\nShe says : My name is Diana and I want you to help me assassinate the king.\n";
	cout << "(You and Galahad are dumbstruck and say nothing. She continues speaking....) \n\n";
	cout << "Diana : Why would you help me? Because right now our 'dear' King Foltest is out for your blood and of course I can help you in a lot of ways once we take his head.";
	cout << " Why would I want to kill him? Because as you probably know he is a greedy little tyrant and the world would be much better off without him. \n\n";
	cout << "Of course you can always refuse and go your own way. After all this town matters not to people like youreself who are doubtless a-questin' for some loot. Any questions? \n\n\n";
	cout << "Galahad looks at you to decide what to do. Blasted knight never seemed to have an opinion on the important things. \n\n";
	cout << "You personally have some inhibitions about this woman. No coup d'etat or assassination has a happy ending. Galahad seems apprehensive as well. But getting out of this town could be quite a problem without the necessary help.";
	cout << " You decide to : \n\n";
	cout << "1  Listen to Diana's plan and then decide. \n2  Go along with her plan to kill this tyrant king.  \n3  Leave the town and its troubles. None of your business. ";
	cin >> a2c_hardline_1;
	switch (a2c_hardline_1)
	{
	case 1: cout << " \n\n Diana : No, I can't have that. You're either in or out.";
		cout << "\n2 Go along with her plan to kill this tyrant king.  \n3  Leave the town and its troubles. None of your business. ";
		cin >> a2c_hardline_1;
		if (a2c_hardline_1 == 2)
		{
			cout << "Diana : Well then, let us begin............ \n\n\n";
			_getch();
			act_2_hardline_kingkiller();
		}
		else
		{
			cout << " \n\n Diana : So be it then. I'll leave you to your quest and you can leave my city before I decide to claim that price on your heads myself. (Saunters out) \n\n\n";
			cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible. \n\n\n\n";
			_getch();
			act_2_neutral();
		}
		while (a2c_hardline_1 != 3 && a2c_hardline_1 != 2)
			cout << " \n\n Diana : I don't have time for this shit. Get the hell out of my city.";
		cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible. \n\n\n\n";
		_getch();
		act_2_neutral();
		break;
	case 2: cout << "Diana : Well then, let us begin............ \n\n\n";
		_getch();
		act_2_hardline_kingkiller();
		break;
	case 3: cout << " \n\n Diana : So be it then. I'll leave you to your quest and you can leave my city before I decide to claim that price on your heads myself. (Saunters out) \n\n\n";
		cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible. \n\n\n";
		_getch();
		act_2_neutral();
		break;
	default: cout << " \n\n Diana :(makes a disgusted sound) I don't have time for this shit. Get the hell out of my city.";
		cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible. \n\n\n";
		_getch();
		act_2_neutral();
		break;
	}
}
void act_2_hardline_kingkiller()
{
	using namespace std;
	void act_3_hardline_beginning();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "ACT 2 Part 3 : Kingkiller \n\n";
	cout << "(It is midnight. You, Galahad and Diana are outside King Foltest's keep. Diana is discussing the details of her plan yet again.) \n\n\n";
	cout << "Diana : So, you make a rope ladder for me to get up to the top and then- \n\n";
	cout << "Galahad : Okay okay, we know. We've gone over this a million times. \n\n";
	cout << "Diana : (Glowers at him) Fine then, lets get on with it. \n\n\n";
	_getch();
	cout << "(You Will a rope ladder. Diana climbs up, slightly less stealthier than a cat. You and Galahad follow her soon after. A gory sight greets your eyes.";
	cout << " Diana had taken the lives of nearly a dozen guards making almost no noise.) \n\n";
	cout << "You start to wonder why exactly you were needed after watching Diana effortlessly dispatch the guards.";
	cout << " You make your way to the throne room meeting just a few more guards who you take out with a crossbow.";
	cout << " Outside the bedroom, Galahad takes his stand as per the plan to prevent anyone from entering. This hadn't seemed so fishy before but now........... \n\n\n ";
	_getch();
	cout << "Diana : (whispers) Okay, let's kill this bastard and be on our way. \n\n";
	cout << "(You and Diana enter the bedroom. The two guards inside have time to make a brief squeak before they end up with daggers in their throats.) \n\n";
	cout << "The small sound is enough to wake King Foltest.\nHe doesn't seem very surpised to find assassins in his bedroom. He doesn't even look at you and talks to Diana. \n\n";
	cout << "King Foltest : Took you long enough Diana. I expected to die a long time ago when I learnt that Diana Bloodsword wanted the throne. \n\n";
	cout << "You look at Diana but before you can say a word she skewers the king with her sword. Bloodsword indeed. \n\n";
	_getch();
	cout << "Diana : Don't give me that look like you're some saint. I'll make this quick. You were a scapegoat. Nothing more. I've been waiting a long time to blame the king's assassination on someone for a long time taxing the travellers and other such stuff. \n";
	cout << "You've got two choices. You can fight me and probably kill me but the whole town will be upon you by then or you can just leave. \n";
	cout << "Sure, the whole town will hate your guts for killing their kind king but you'll have your life atleast (smirks).";
	cout << "(You realize that its not even a choice. Cursing yourself for your stupidity you leave the room with Galahad in tow.) \n\n";
	cout << "You don't answer any of Galahad's questions just telling him that its time to leave. \n\n";
	cout << name << ": This is not over. I will right this wrong no matter the cost............. \n\n\n\n\n";
	_getch();
	act_3_hardline_beginning();
}
void act_2_peace_inn()
{
	using namespace std;
	int a2c_peace_1;
	void act_2_peace_overthrower();
	void act_2_neutral();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 2 Part 2 : Path of the Righteous \n\n";
	cout << "Setting : The Town of Trebol ( Upper District) \n\n";
	cout << "(You and Galahad make your way through Trebol marvelling at the city's beautiful architecture. Galahad doesn't speak much seemingly angry that you had paid the money. ";
	cout << "You enter 'The Ichor Amphora' the most well known inn in town famous for its single malt whisky. It is bustling. Both of you order a few drinks and Galahad seems to regain a bit of his former vitality.) \n\n";
	cout << "Before long Galahad is as drunk as a skunk. He entertains the crowd with lively renditions of his exploits. The crowd hangs on his every word.";
	cout << " A man enters. People lose interest in Galahad and rush to welcome him. He however, comes straight to your table and sits. Galahad follows. You eye the man warily. He says : \n\n\n";
	cout << "My name is Bard. \n\n";
	_getch();
	cout << "(Bard doesn't speak about important matters for quite a while, taking his time breaking the ice and trying to gain your trust. Finally, when you are near the end of your considerable patience he says : \n\n";
	cout << "Bard : You must've heard the stories about how our 'good' King slew his own father to get to the throne. He is the worst sort of tyrant. We wish to remove him. \n\n";
	cout << "Galahad : Despicable. What might you require from us, good sir? We will do your best to aid you. \n\n";
	cout << "You look at Galahad irritated that he had committed himself. \n\n";
	cout << "Bard : I require nothing more from you than your presence my dear knight. The people have been ready for an uprising for quite some time and just lack the spark. I believe that you are that spark. \n\n";
	_getch();
	cout << name << ": And why should we help you? \n\n";
	cout << "Bard : Why, you would be instrumental in overthrowing a cruel regime and freeing the people. But if that's not enough to convince you I can make sure that you get the necessary supplies to go whither your quest takes you. \n\n\n";
	cout << "You personally have some inhibitions about this man. There is a glitter in his eyes that you do not like. Galahad however, seems to believe that Bard was a good man. Galahad is famous for many things but making good decisions is not one of them. But getting out of this town could be quite a problem without the necessary help.";
	cout << "You decide to : \n\n1  Go along with Bard and free the people \n2  Leave the town and its troubles. None of your business. ";
	cin >> a2c_peace_1;
	switch (a2c_peace_1)
	{
	case 1: cout << "\n\n\n\n\n";
		act_2_peace_overthrower();
		break;
	case 2: cout << "(Bard's eyes darken but he says nothing.) \n";
		cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible \n\n\n\n";
		act_2_neutral();
		break;
	default:cout << "Bard frowns when you don't answer and you realize that you are probably making a very big mistake.";
		cout << " You and Galahad leave the inn determined to leave this damned city as fast as possible \n\n\n\n";
		act_2_neutral();
		break;
	}
}
void act_2_peace_overthrower()
{
	int a2c_peace_2;
	void act_3_peace_beginning();
	using namespace std;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 2 Part 3 : Instigator \n\n";
	cout << "(It is midnight. You, Galahad, Bard are standing in front of the king's gates. Behind you are a MASSIVE group, nearly a thousand.";
	cout << "You are impressed that Bard managed to make so many rise up in such a short time. Bard is whipping the crowd into a frenzy with his passionate speech.) \n\n";
	cout << "Bard : ......no more! We people need to rise up and take what is ours! Can this tyrant hold us from our freedom any longer? \n\n";
	cout << "Crowd : NO! \n\n";
	_getch();
	cout << "(Bard turns to your and motions for you and Galahad as you storm the castle. It is child's play getting to the throne room. The guards in the castle understand how outmatched they are and stand down.) \n";
	cout << "You, Galahad and Bard enter the king's bedroom leaving the crowd howling for the king's blood outside. \n\n";
	cout << "The king is sitting in his bed. There are no guards in the room. \n\n";
	cout << "King Foltest : (to you and Galahad)  I see you have been bitten by this honey-tongued snake. Nothing I will say will probably sway your minds now. But yet, I try. Know this : Trust not a word spoken by Bard Bloodfang. \n\n";
	cout << "Bard laughs loudly before you say anything and cuffs the king. The king moves out of the room but not before locking eyes with you one last time entreating you with his eyes. Galahad looks disturbed by the events. \n\n";
	_getch();
	cout << "( A few moments later Bard comes back into the room. ) \n\n";
	cout << "Bard : (smiling broadly) Thank you. I doubt I could have roused the people without the support and presence of a knight and a Willforger.";
	cout << " Oh and don't go getting any ideas. (eyes glitter with malice) You are free to leave now. (leaves the room) \n";
	cout << "Galahad : Did we even do the right thing? \n";
	cout << "You : \n\n";
	cout << "1  Reassure Galahad that Bard will get what's coming to him. \n2  Remain silent and walk out of the room.";
	cin >> a2c_peace_2;
	switch (a2c_peace_2)
	{
	case 1: cout << name << ": Don't worry. When we are coming back we'll show him not to mess with us.\n";
		cout << name << ": This is not over. I will right this wrong no matter the cost............. \n\n\n\n\n";
		_getch();
		break;
	case 2: cout << "You don't answer Galahad's question just telling him that its time to leave.";
		_getch();
		break;
	default: cout << " Galahad mistakes your indecision for silence and walk out of the room. You follow wondering if you should have said something.";
		_getch();
		break;
	}
	act_3_peace_beginning();
}
void act_2_neutral()
{
	using namespace std;
	void act_3_neutral_beginning();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 2 Part 3 : A Comrade in Arms \n\n";
	cout << "You and Galahad step outside anxiously discussing how to get out of this city.";
	cout << " Galahad doesnt't help matters by insisting that you had made the wrong decision and that this was your fault.\n";
	cout << "Just when tempers were starting to run high someone taps your shoulder.\n";
	_getch();
	cout << " You curse yourself for being so self-absorbed and turn Willing a sword. \n\n";
	cout << "An old grizzled dwwarf stands there. He says : \n";
	cout << "Do you want to wake up the whole town? Shut up and come with me if you really want to keep your heads and get out of this city alive. \n";
	cout << "You are naturally cautious about help being offered by a strange dwarf and about to decline his offer when Galahad follows him. \n";
	cout << " Sighing, you follow him. \n\n\n";
	_getch();
	cout << "(After following the dwarf for nigh a mile he leads you to a cavern underneath the city.) \n\n";
	cout << "Before you can say a word the dwarf starts talking. \n\n\n";
	_getch();
	cout << "My name is Erik. \n\n\n";
	cout << "Erik : I want one-tenth of the loot. That is non-negotiable. As well as the right to keep a few select family heirlooms. \n\n";
	cout << name << ": How on earth do you know so much about what we plan to do? And one-tenth is insane. \n\n\n";
	_getch();
	cout << "(Galahad steps forward) \n\nGalahad : As long as you can get us out of this city and not lay claim to the 'Crystal Rose', agreed. \n\n";
	cout << "Erik : Glad to know there's atleast one reasonable man in this venture. As for how I know this much, the whole city probably knows from the way you guys were shouting. \n\n\n";
	cout << "(You don't like this new decisive Galahad. It's almost like you are not needed anymore. You tell yourself to pay more attention to him in the future.) \n\n";
	cout << "Erik : Well then, let us embark on this foolhardy quest............ \n\n\n\n\n";
	_getch();
	act_3_neutral_beginning();
}

void act_3_hardline_beginning()
{
	using namespace std;
	void act_3_hardline_climax();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 1 : Twilight Days \n\n";
	cout << "Setting : The Keep of the Dragon SLYRAK \n\n";
	cout << "( You and Galahad stand outside the imposing castle that was once a dwarven kingdom. It now lies dark and desolate. The dragon probably lies asleep inside. ) \n\n";
	_getch();
	cout << "Galahad : Quite a piece of work, innit? Anyway what do you know about the dragon we've come to kill? \n\n";
	cout << name << ": As a matter of fact, yes I do. Its name is Slyrak and from what I've heard it's supposed to be one of the greedier wyrms of its kind. \n\n";
	cout << "Galahad : So we'd be doing the world a favour as well. This will do wonders to my reputation. 'The Emerald Slayer of Dragons', yes I like that. \n\n";
	cout << "( You cannot believe this guy. You're about to attempt to kill a dragon and all this knight can think about is how people will remember him) \n\n";
	_getch();
	cout << name << ": What makes you so sure we can actually even KILL this dragon? Have you ever even seen a dragon before? \n\n";
	cout << "Galahad : Never seen a dragon before but how tough can it possibly be?( laughs loudly ) It's just an overgrown lizard. \n\n";
	cout << "(You give up on trying to convince Galahad how scary a dragon can be. You'd only faced a dragon once before and it wasn't a good experience to say the least. )";
	cout << name << ": Slyrak is supposed to be extremely possessive of his hoard and probably won't take kindly to theft. \n\n";
	cout << "Galahad : (offended) Theft? Theft? I am a KNIGHT. Humph. (walks into the keep) \n";
	cout << "Sighing, you follow Galahad........... \n\n\n\n";
	_getch();
	act_3_hardline_climax();
}
void act_3_hardline_climax()
{
	using namespace std;
	int a3_boldvspussy;
	int a3_assassinvspussy;
	void belly_ofthe_beast_hardline();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 2 : Belly of the Beast \n\n";
	cout << "Setting : The Lair of the Wyrm SLYRAK \n\n\n";
	cout << "(You walk the empty halls of the dwarven fortress, marvelling at its grandeur but unable to shake the worry in your gut. Galahad, walking beside you walks proudly with a torch in his hand, as if a bard was recording his every action to tell in fireside tales years from now.) \n\n";
	_getch();
	cout << name << ": (whispers) Be on your guard Galahad. Dragons are cunning creatures and won't hesitate to snack on you from behind if they get the chance. \n\n";
	cout << "Galahad just nods. \n\n\n\n";
	cout << "You enter the Great Hall and there........... \nyou behold the mighty beast. \nSlyrak, Harbinger of Doom, Wyrm of Death and one of the last dragons of the West. \n\n";
	cout << "The dragon seems to be asleep on what looks likes a massive pile of gold, jewels and all manner of sparkly things. \n\n";
	cout << "Galahad takes a deep breath. Knowing the proud knight, he was probably going to issue a challenge to the dragon. \n\n";
	cout << "You decide to : \n\n";
	cout << "1  Let Galahad proceed. \n2  Make him shut up. \n\n";
	cin >> a3_boldvspussy;
	switch (a3_boldvspussy)
	{
	case 1: cout << "Galahad : WAKE UP WYRM ! Get ready to meet the bane of your life. ( draws sword in anticipation ) \n\n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
		belly_ofthe_beast_hardline();
		break;
	case 2: cout << "You quickly Will a gag and stuff it into his mouth effectively shutting him up. Galahad looks outraged. \n\n";
		cout << name << ": Are you crazy?? You have no idea what a dragon is capable of do you? Let's just take what we came here to take and get the hell out of here. \n\n";
		cout << "Galahad : (takes out gag) All right. It isn't very honourable though. \n\n";
		cout << "You decide to : \n\n";
		cout << "1  Sneak around the room looking for the 'Crystal Rose' \n2  Kill the dragon in its sleep. \n\n";
		cin >> a3_assassinvspussy;
		switch (a3_assassinvspussy)
		{
		case 1: cout << "You take the more sensible route and scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			belly_ofthe_beast_hardline();
			break;
		case 2: cout << "Galahad looks horrified at the suggestion. Of course that would happen. You should have seen that happening. \n";
			cout << "Sneaking it is. \n\n";
			cout << "You and Galahad scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			belly_ofthe_beast_hardline();
			break;
		default: cout << name << ": Let's just search for the Crystal Rose and leave as soon as possible.";
			cout << "You and Galahad scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			belly_ofthe_beast_hardline();
			break;
		}
		break;
	default: cout << "Galahad takes your silence as an indication of your approval and shouts : \n";
		cout << "Galahad : WAKE UP WYRM ! Get ready to meet the bane of your life. ( draws sword in anticipation ) \n\n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
		belly_ofthe_beast_hardline();
		break;
	}
}

void act_3_peace_beginning()
{
	using namespace std;
	void act_3_peace_climax();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 1 : Twilight Days \n\n";
	cout << "( You and Galahad stand outside the imposing castle that was once a dwarven kingdom. It now lies dark and desolate. The dragon probably lies asleep inside. ) \n\n";
	_getch();
	cout << "Galahad : Quite a piece of work, innit? Anyway what do you know about the dragon we've come to kill? \n\n";
	cout << name << ": As a matter of fact, yes I do. Its name is Slyrak and from what I've heard it's supposed to be one of the greedier wyrms of its kind. \n\n";
	cout << "Galahad : So we'd be doing the world a favour as well. This will do wonders to my reputation. 'The Emerald Slayer of Dragons', yes I like that. \n\n";
	cout << "( You cannot believe this guy. You're about to attempt to kill a dragon and all this knight can think about is how people will remember him) \n\n";
	cout << name << ": What makes you so sure we can actually even KILL this dragon? Have you ever even seen a dragon before? \n\n";
	cout << "Galahad : Never seen a dragon before but how tough can it possibly be?( laughs loudly ) It's just an overgrown lizard. \n\n";
	cout << "(You give up on trying to convince Galahad how scary a dragon can be. You'd only faced a dragon once before and it wasn't a good experience to say the least. )";
	cout << name << ": Slyrak is supposed to be extremely possessive of his hoard and probably won't take kindly to theft. \n\n";
	cout << "Galahad : (offended) Theft? Theft? I am a KNIGHT. Humph. (walks into the keep) \n";
	cout << "Sighing, you follow Galahad........... \n\n\n\n";
	_getch();
	act_3_peace_climax();
}
void act_3_peace_climax()

{
	using namespace std;
	int a3_boldvspussy;
	int a3_assassinvspussy;
	void belly_ofthe_beast_peace();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 2 : Belly of the Beast \n\n";
	cout << "Setting : The Lair of the Wyrm SLYRAK \n\n\n";
	cout << "(You walk the empty halls of the dwarven fortress, marvelling at its grandeur but unable to shake the worry in your gut. Galahad, walking beside you walks proudly with a torch in his hand, as if a bard was recording his every action to tell in fireside tales years from now.) \n\n";
	_getch();
	cout << name << ": (whispers) Be on your guard Galahad. Dragons are cunning creatures and won't hesitate to snack on you from behind if they get the chance. \n\n";
	cout << "Galahad just nods. \n\n\n\n";
	cout << "You enter the Great Hall and there........... \nyou behold the mighty beast. \nSlyrak, Harbinger of Doom, Wyrm of Death and one of the last dragons of the West. \n\n";
	cout << "The dragon seems to be asleep on what looks likes a massive pile of gold, jewels and all manner of sparkly things. \n\n";
	cout << "Galahad takes a deep breath. Knowing the proud knight, he was probably going to issue a challenge to the dragon. \n\n";
	cout << "You decide to : \n\n";
	cout << "1  Let Galahad proceed. \n2  Tell him to shut up. \n\n";
	cin >> a3_boldvspussy;
	switch (a3_boldvspussy)
	{
	case 1: cout << "Galahad : WAKE UP WYRM ! Get ready to meet the bane of your life. ( draws sword in anticipation ) \n\n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		_getch();
		cout << "It looks at you. \n\n";
		_getch();
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
		belly_ofthe_beast_peace();
		break;
	case 2: cout << "You quickly Will a gag and stuff it into his mouth effectively shutting him up. Galahad looks outraged. \n\n";
		cout << name << ": Are you crazy?? You have no idea what a dragon is capable of do you? Let's just take what we came here to take and get the hell out of here. \n\n";
		cout << "Galahad : (takes out gag) All right. It isn't very honourable though. \n\n";
		cout << "You decide to : \n\n";
		cout << "1  Sneak around the room looking for the 'Crystal Rose' \n2  Kill the dragon in its sleep. \n\n";
		cin >> a3_assassinvspussy;
		switch (a3_assassinvspussy)
		{
		case 1: cout << "You take the more sensible route and scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			void belly_ofthe_beast_peace();
			break;
		case 2: cout << "Galahad looks horrified at the suggestion. Of course that would happen. You should have seen that happening. \n";
			cout << "Sneaking it is. \n\n";
			cout << "You and Galahad scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			void belly_ofthe_beast_peace();
			break;
		default: cout << name << ": Let's just search for the Crystal Rose and leave as soon as possible.";
			cout << "You and Galahad scout the room, you in one direction and Galahad in the other. \n";
			cout << "But a dragon's senses are keen. It wakes up when you accidentally kick a gold coin, the clinking sound alarmingly loud in the silent chamber. \n\n\n";
			cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
			_getch();
			cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
			cout << "It looks at you. \n\n";
			cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
			cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
			cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
			cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
			cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
			_getch();
			cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
			void belly_ofthe_beast_peace();
			break;
		}
		break;
	default: cout << "Galahad takes your silence as an indication of your approval and shouts : \n";
		cout << "Galahad : WAKE UP WYRM ! Get ready to meet the bane of your life. ( draws sword in anticipation ) \n\n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : What are here for anyway? A grudge because I ate one of your friends? Just some good ol' hunting for loot? Or is it a quest? Doing the world a favour and all that? \n\n";
		void belly_ofthe_beast_peace();
		break;
	}
}

void act_3_neutral_beginning()
{
	using namespace std;
	void act_3_neutral_climax();
	int a3_motichoice;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 1 : Three is Company \n\n";
	cout << "Setting : The Keep of the Dragon \n\n";
	cout << "( You, Galahad and Erik stand outside the imposing castle that was once a dwarven kingdom. It now lies dark and desolate. The dragon probably lies asleep inside. ) \n\n";
	_getch();
	cout << "Galahad : Quite a piece of work, innit? \n\n";
	cout << "Erik : That 'piece of work' you're talking about is the fruit of the labour of three generations of my forefathers, young whippersnapper. \n\n";
	cout << name << ": The place has held up well over time considering the fact that there's a bloody dragon nesting in there. I would've expected things to be a bit more.... burnt. \n\n";
	cout << "( Erik starts laughing. It is a low booming laugh that continues for quite a long time. It's almost as if he heard the best joke ever in his long and no doubt eventful life. Galahad looks at you wanting to know if you got the joke. You shake your head. ";
	cout << "Just when you wonder if he went hysterical at the sheer stupidity of three people attempting to kill a dragon he regains his wits. He doubles over coughing and then says \n";
	cout << "Erik : No doubt you're wondering what that was all about. Well let me tell you. That dragon in there, Slyrak may-his-bones-rot, THAT dragon in there (repeats for emphasis) is \n\n";
	_getch();
	cout << "AFRAID OF FIRE. \n\n";
	cout << "You stare at him, incredulous. Who ever heard of a dragon afraid of fire? Fire was one of the main reasons that made the blasted creatures so dangerous. ";
	cout << "Galahad seems to have no problem processing this information. \n\n";
	cout << "Galahad : That's great! My pa always said,'Every worm has his weak spot'. Now" << name << " can just roast the damn dragon. \n\n";
	cout << "You finally find your voice. \n\n";
	cout << "1  Agree with Galahad and lift team spirits even though it isnt't true and you'll probably regret it later on. \n2  Be the wet blanket nobody likes and bring everybody down. \n3  Look at Erik to see what he has to say";
	cin >> a3_motichoice;
	switch (a3_motichoice)
	{
	case 1: cout << name << ": Tonight, we eat dragon steak! \n\n";
		cout << "Erik : You cracked in the head Willforger? You really think you can BURN a bloody dragon? Even if you could Will fire which you probably can't, the only thing you'd do is tickle the damn Wyrm. I have half a mind to leave you idiots here and go back. \n\n";
		cout << "( Erik walks in followed by you and Galahad. Oh well, false hope never did anyone good anyway. ) \n\n\n\n\n";
		_getch();
		act_3_neutral_climax();
		break;
	case 2: cout << name << ": No that probably won't be of much use to us. Willing fire or any element for that matter is one of the toughest feats of magic for a Willforger. I could do it quite well back in the day but now I'm not so sure. \n";
		cout << "And even if I could it wouldn't do any good. It's a bloody dragon. Its body is obviously impervious to fire. \n\n";
		cout << "(Everyone walks inside silently. Nobody likes a wet blanket.) \n\n\n\n\n";
		_getch();
		act_3_neutral_climax();
		break;
	case 3: cout << "Erik : You cracked in the head Willforger? You really think you can BURN a bloody dragon? Even if you could Will fire which you probably can't, the only thing you'd do is tickle the damn Wyrm. I have half a mind to leave you idiots here and go back. \n\n";
		cout << "( Erik walks in followed by you and Galahad before you can say that wasn't what you were thinkning. Oh well, atleast you didn't have to tell Galahad yet again how stupid he was. ) \n\n\n\n\n";
		_getch();
		act_3_neutral_climax();
		break;
	default: cout << "Erik : (exhales loudly) Since our Willforger has yet to grow a pair I'll tell ya. \n";
		cout << "You really think you can BURN a bloody dragon? Even if he could Will fire which he probably can't, the only thing he'd do is tickle the damn Wyrm. I have half a mind to leave you idiots here and go back. \n\n";
		cout << "( Erik walks in followed by you and Galahad. Atleast you didn't have to say anything.)";
		act_3_neutral_climax();
		break;
	}

}
void act_3_neutral_climax()
{
	using namespace std;
	int a3_decisiontime;
	void ending_decider_neutral();

	cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << "ACT 3 Part 2 : Belly of the Beast \n\n";
	cout << "Setting : The Lair of the Wyrm SLYRAK \n\n\n";
	cout << "You walk the empty halls of the dwarven fortress alongside Erik the dwarf and Galahad the Emerald Knight marvelling at the grandeur of the now desolate castle. What a fairy tale your adventure has become, you think. Maybe someone will be telling the story of" << name << ", the great Willforger, slayer of dragons........ \n";
	cout << "You catch yourself fantasizing. Like Galahad. NOT a good sign. \n\n";
	cout << "Erik : (exhales loudly) Its just as beautiful as I remembered it. \n\n";
	cout << "Galahad : (looks around at the dark and dank chamber dubiously) You sure mate? This place don't look too beautiful to me. \n\n";
	cout << "Erik : (glowers at him) Anyway, how do you plan to deal with the dragon? \n\n\n\n";
	_getch();
	cout << "(Nobody answers him. Attempting to rob/kill a cunning, ruthless and mighty beast was sheer stupidity. Come to think of it, this whole adventure was reckless at best and suicidal at worst.) \n\n";
	cout << "You enter the Great Hall and there........... \nyou behold the mighty beast. \nSlyrak, Harbinger of Doom, Wyrm of Death and one of the last dragons of the West. \n\n";
	cout << "The dragon seems to be asleep on what looks likes a massive pile of gold, jewels and all manner of sparkly things. \n\n";
	_getch();
	cout << "Erik lets out a sigh of longing. Many of those jewels were probably the work of his ancestors. \n\n";
	cout << "Erik : (whispers) You better deal with that dragon Willforger, I'm not sure I can leave the dragon alive. (He is clearly struggling to maintain his composure and not give in to his rage.) \n\n";
	_getch();
	cout << "But a dragon's senses are keen. It stirs in its sleep. You probably have a few moments left before it wakes up. You decide to: \n\n";
	cout << "1  Retreat, think of a proper plan and come back \n2  Split up and search the room and leave as fast as possible \n3  Stick together and face the dragon. \n\n";
	cin >> a3_decisiontime;
	switch (a3_decisiontime)
	{
	case 1: cout << name << ": Both Galahad and Erik look at you as though you were insane. And then the dragon wakes up. That mistake might cost you..... \n\n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		_getch();
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. \n\n";
		_getch();
		cout << "Erik : It's laughing. The bloody thing is laughing...... \n\n";
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : You know, I would've chatted with you a while longer if not for that dwarf you travel with. I hate his kind. Stout midgets who always seem tasty, but then you realize they're wearing heavy armour. Plays havoc with your digestion, you know. So I'm going to have to cut this conversation short. \n\n\n\n";
		cout << "Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_neutral();
		break;
	case 2: cout << "Erik : Are you crazy? Splitting up when there's a damn DRAGON over there? That's just plain stupid right there. \n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		_getch();
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		_getch();
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : You know, I would've chatted with you a while longer if not for that dwarf you travel with. I hate his kind. Stout midgets who always seem tasty, but then you realize they're wearing heavy armour. Plays havoc with your digestion, you know. So I'm going to have to cut this conversation short. \n\n\n\n";
		cout << "Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_neutral();
		break;
	case 3:cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		_getch();
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		_getch();
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : You know, I would've chatted with you a while longer if not for that dwarf you travel with. I hate his kind. Stout midgets who always seem tasty, but then you realize they're wearing heavy armour. Plays havoc with your digestion, you know. So I'm going to have to cut this conversation short. \n\n\n\n";
		cout << "Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_neutral();
		break;
	default: cout << "Time's up. You really ought to be more decisive about these kind of things. \n";
		cout << "The Wyrm opens one eye. It is blood red and it would be brave man indeed who wouldn't quail in front of those eyes. The dragon roars. \n\n";
		cout << "It was a deep, loud roar, the kind that made pillars shake and could instill fear in animals miles away. That roar had a much greater effect than any 'Who dares disturb my sleep?' would have ever had. \n\n";
		cout << "It looks at you. \n\n";
		_getch();
		cout << "Slyrak : Been a while since food decided to walk up to me. It's a nice change. \n\n";
		cout << "For an evil dragon filled with malice, this was out of character to say the least. Galahad, however, delivers his lines like he'd decided what to say a long time ago(which he probably had) \n\n";
		cout << "Galahad : Are you ready to face your doom Wyrm? Because this blade of mine has thirsted for thine unholy blood long enough. (You roll your eyes at the cheesy dialogue). \n\n";
		cout << "The dragon roars again. But there's something off about this roar. With a chill, you realize that it's laughing. \n\n";
		_getch();
		cout << "Slyrak : Well well aren't you brave? Not many who can say that to a dragon with a steady voice. \n\n";
		_getch();
		cout << "Slyrak : You know, I would've chatted with you a while longer if not for that dwarf you travel with. I hate his kind. Stout midgets who always seem tasty, but then you realize they're wearing heavy armour. Plays havoc with your digestion, you know. So I'm going to have to cut this conversation short. \n\n\n\n";
		cout << "Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_neutral();
		break;
	}
}

void belly_ofthe_beast_hardline()
{
	using namespace std;
	int a3_howwillyourespond;
	void black_epilogue_hardline();
	void ending_decider_hardline();
	cout << "1  None of your business Wyrm. \n2  We're searching for the 'Crystal Rose'  \n3  This world has too much evil in it. We want to change the world. \n\n";
	cin >> a3_howwillyourespond;
	switch (a3_howwillyourespond)
	{
	case 1: cout << "The dragon growls menacingly. \n\n";
		cout << "Slyrak : It is not wise to disrespect a dragon, puny human. \n\n";
		cout << "Galahad : Enough talk vile beast, time to end this. \n\n";
		cout << "(Galahad charges foward, sword unsheathed........... \n\n\n\n";
		_getch();
		cout << "...............only to be eaten by the Wyrm in one quick bite. Gone. Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_hardline();
		break;
	case 2: cout << "Slyrak : Good old loot hunters. Ha! They never stop coming. \n\n";
		cout << " Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_hardline();
		break;
	case 3: cout << "Slyrak : Goody two shoes are pretty rare these days. Can't remember the last time a paladin came to 'smite' me off the face of the earth. Would you like to try? \n\n";
		cout << "Galahad : Enough talk vile beast, time to end this. \n\n";
		cout << "(Galahad charges foward, sword unsheathed........... \n\n\n\n";
		_getch();
		cout << "...............only to be eaten by the Wyrm in one quick bite. Gone. \nYour mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to embark on this foolhardy quest. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_hardline();
		break;
	default: cout << "Slyrak growls when you decide to answer its question with silence. \n\n";
		cout << "Slyrak : YOU DARE IGNORE ME?! (roars loud enough to make the chamber shake) \n\n";
		cout << "Slyrak pounces forward and gobbles up Galahad in a single bite. Gone. Just because you decided not to answer the dragon. Your fault, you tell yourself as you try to process what just happened. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_hardline();
		break;
	}
}
void belly_ofthe_beast_peace()
{
	using namespace std;
	int a3_howwillyourespond;
	void black_epilogue_peace();
	void ending_decider_peace();
	cout << "1  None of your business Wyrm. \n2  We're searching for the 'Crystal Rose'  \n3  This world has too much evil in it. We want to change the world. \n\n";
	cin >> a3_howwillyourespond;
	switch (a3_howwillyourespond)
	{
	case 1: cout << "The dragon growls menacingly. \n\n";
		cout << "Slyrak : It is not wise to disrespect a dragon, puny human. \n\n";
		cout << "Galahad : Enough talk vile beast, time to end this. \n\n";
		cout << "(Galahad charges foward, sword unsheathed........... \n\n\n\n";
		_getch();
		cout << "...............only to be eaten by the Wyrm in one quick bite. Gone. Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_peace();
		break;
	case 2: cout << "Slyrak : Good old loot hunters. Ha! They never stop coming.";
		cout << "Without further ado, the dragon pounces at you. Time seems to slow down to you as you realize that you have barely any time to do anything. The wrong choice will almost certainly result in your death. You : \n\n";
		ending_decider_peace();
		break;
	case 3: cout << "Slyrak : Goody two shoes are pretty rare these days. Can't remember the last time a paladin came to 'smite' me off the face of the earth. Would you like to try? \n\n";
		cout << "Galahad : Enough talk vile beast, time to end this. \n\n";
		cout << "(Galahad charges foward, sword unsheathed........... \n\n\n\n";
		_getch();
		cout << "...............only to be eaten by the Wyrm in one quick bite. Gone. \nYour mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to embark on this foolhardy quest. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_peace();
		break;
	default: cout << "Slyrak growls when you decide to answer its question with silence. \n\n";
		cout << "Slyrak : YOU DARE IGNORE ME?! (roars loud enough to make the chamber shake) \n\n";
		cout << "Slyrak pounces forward and gobbles up Galahad in a single bite. Gone. Just because you decided not to answer the dragon. Your fault, you tell yourself as you try to process what just happened. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		black_epilogue_peace();
		break;
	}
}


void ending_decider_neutral()
{
	using namespace std;
	int a3_planofattack, a3_doyouhaveaheartofgold, a3_ruthlessorscary;
	void white_epilogue_neutral();
	void grey_white_epilogue();
	void grey_black_epilogue();
	cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
	cin >> a3_planofattack;
	switch (a3_planofattack)
	{
	case 1: cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. And fire blossomed. A massive fiery orange inferno right in front of you. Galahad and Erik stare at you, shocked. \n\n";
		_getch();
		cout << "What happened next was anticlimatic to say the least. The dragon stopped mid pounce, eyes wide and jaw agape, and.................\ncollapsed. \n\n\n\n";
		cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to actually die on seeing it was unheard of. \n";
		_getch();
		cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself and Erik thanks you profusely for your help. \n\n\n\n";
		cout << name << ": What are you going to do now Galahad? \n\n";
		cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
		cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
		_getch();
		cout << "And just when you thought your adventure was already ending, you hear battle horns outside.  \n\n\n\n\n\n";
		_getch();
		white_epilogue_neutral();
		break;
	case 2: cout << "A shield would be absolutely useless against a dragon. Hoping against hope you Will a shield. Mistake. \n\n";
		cout << "Slyrak swats aside the shield like a fly and gobbles up Galahad and Erik in a single bite. \n\n";
		_getch();
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon of destruction. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you think. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. \n\n\n\n\n\n\n\n\n";
		_getch();
		cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
		_getch();
		cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
		cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
		_getch();
		cout << "Again.\n";
		_getch();
		cout << "And again. \n\n\n";
		_getch();
		cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
		break;
	case 3: cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. You Will a garment of green fire around Galahad, coating his armour, helmet and shield. He looks fearsome indeed.";
		_getch();
		cout << "The dragon stops mid pounce, eyes widening in what seems to be fear. Guess the old dwarf wasn't wrong after all. \n\n";
		cout << "Galahad steps forward confidently, only his silhouette visible as he is wreathed in flame. \n\n";
		_getch();
		cout << "Galahad : Foul beast, I see you quail in my fiery presence. But I will soon put an end to your miserable life so fear not. \n\n";
		cout << "(Erik actually starts chuckling when he hears Galahad spouting dialogues like he came from a storybook.) \n\n";
		_getch();
		cout << "Slyrak : Please kind sirs, spare my life. ( The dragon lowers its head) I beg of you, give me another chance to repent and change my ways. I know I have committed innumerable sins but doesn't everyone deserve a second chance? \n";
		cout << "The only reason I took to destroying towns and looting them was because my mother wouldn't let me live in peace. Called me the black sheep of the family. (You are surprised to actually a giant tear rolling down its cheeks). That is why I'm one of the last surviving dragons of the West. My brothers have ravaged and plundered a hundred times more. \n\n";
		_getch();
		cout << "The dragon actually seems sincere. You look at Galahad and Erik. \n\n";
		cout << "Galahad : I think we ought to give him a second chance. My father always told me I was a cause of shame to my family. I can understand his feelings. Besides, we can kill him if he turns nasty now that we know he's scared of fire. \n\n";
		cout << "You look at Erik. \n\n";
		_getch();
		cout << "Erik : You honestly want to give this wicked Wyrm another chance to pillage and plunder? THAT beast is responsible for the deaths of my family. Upon my father's name I cannot let it live. \n\n";
		cout << "You decide to : \n\n";
		cout << "1  Everybody deserves a second chance, even the most wicked. \n2  It's crimes are too heinous to be forgiven. Kill it. \n";
		cin >> a3_doyouhaveaheartofgold;
		switch (a3_doyouhaveaheartofgold)
		{
		case 1: cout << name << ": Everybody deserves a second chance, even the most wicked. You shall have your chance dragon, make good use of it. \n\n";
			cout << "Slyrak : Such kindness! I shall prove myself worthy and show that I am as capable of gratitude as any other. \n\n";
			cout << "Erik looks outraged. \n";
			_getch();
			cout << "Erik : You CANNOT be serious. I have not risked life and limb, coming on this foolhardy adventure just to have revenge taken away from me. \n\n";
			cout << "You realize that you cannot reason with the raging dwarf. You : \n";
			cout << "1  Intimidate him. You'll have to watch your back though. Dwarves carry grudges. \n2  Kill him. Swiftest and simplest solution to your predicament. Won't do any wonders to your conscience though. \n\n";
			cin >> a3_ruthlessorscary;
			switch (a3_ruthlessorscary)
			{
			case 1: cout << name << ": Listen carefully. I'm only going to say this once. I believe that this dragon deserves another chance. If you have a problem with that, you're going to have to fight me. \n";
				cout << "(The dwarf stands down, muttering angrily. This might become a problem later on.) \n";
				cout << "Slyrak turns out to be very co-operative, finding the 'Crystal Rose' in an instant and giving it to Galahad. \n\n";
				cout << "And just when you begin to wonder if your adventure was coming to an end, you hear horns outside. Perfect. \n\n";
				_getch();
				grey_white_epilogue();
				break;
			case 2: cout << name << ": You have been a good companion...... \n\n";
				cout << "Erik pales as he realizes your intentions. \n";
				cout << "Erik : You would slay your own companion for that wicked beast? What in Tehlu's name is wrong with you?? \n\n";
				cout << "You answer his question with a Willsword. Erik's head falls to the ground. \n";
				cout << "Galahad looks disturbed. \n\n";
				cout << "Slyrak : You are brutal indeed for a human. I'll take that as a reminder to never get on your bad side. \n\n\n";
				cout << "Slyrak turns out to be very co-operative, finding the 'Crystal Rose' in an instant and giving it to Galahad. \n\n";
				cout << "And just when you begin to wonder if your adventure was coming to an end, you hear horns outside. Perfect. \n\n";
				_getch();
				grey_black_epilogue();
				break;
			default: cout << "Erik takes your silence as agreement with him. \n\n";
				cout << "Erik : End the Wyrm's life Galahad. (The flames around him, which had died down while you were talking blaze up again as Galahad approaches Slyrak.) \n\n";
				cout << "Galahad shows only the slightest bit of hesitation before striding towards the dragon. It goes hysterical with fear and growls piteously once before Galahad ends its life. The echoes of it's growl haunt your heart. \n";
				cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to not fight back and just give up on life on seeing it was unheard of. \n";
				cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself and Erik thanks you profusely for your help. \n\n\n\n";
				cout << name << ": What are you going to do now Galahad? \n\n";
				cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
				cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
				cout << "And just when you thought your adventure wouldn't have a typical ending, you hear battle horns outside. Perfect. \n\n\n";
				_getch();
				white_epilogue_neutral();
				break;
			}
		case 2: cout << name << ": There are some things which cannot be forgiven. End the Wyrm's life Galahad. (The flames around him, which had died down while you were talking blaze up again) \n\n";
			_getch();
			cout << "Galahad shows only the slightest bit of hesitation before striding towards the dragon. It goes hysterical with fear and growls piteously once before Galahad ends its life. The echoes of it's growl haunt your heart. \n";
			cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to not fight back and just give up on life on seeing it was unheard of. \n";
			cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself and Erik thanks you profusely for your help. \n\n\n\n";
			_getch();
			cout << name << ": What are you going to do now Galahad? \n\n";
			cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
			cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
			cout << "And just when you thought your adventure wouldn't have a typical ending, you hear battle horns outside. Perfect. \n\n\n";
			_getch();
			white_epilogue_neutral();
			break;
		default: peekaboo: cout << "You certainly aren't very bright. \n";
			cout << "1  Intimidate him. You'll have to watch your back though. Dwarves carry grudges. \n2  Kill him. Swiftest and simplest solution to your predicament. Won't do any wonders to your conscience though. \n\n";
			cin >> a3_ruthlessorscary;
			if (a3_ruthlessorscary = 1)
			{
				cout << name << ": Listen carefully. I'm only going to say this once. I believe that this dragon deserves another chance. By virtue of my might, this decision is mine to make. If you have a problem with that, you're going to have to fight me. \n";
				cout << "(The dwarf stands down, muttering angrily. This might become a problem later on.) \n";
				cout << "Slyrak turns out to be very co-operative, finding the 'Crystal Rose' in an instant and giving it to Galahad. \n\n";
				cout << "And just when you begin to wonder if your adventure was coming to an end, you hear horns outside. Perfect. \n\n";
				_getch();
				grey_white_epilogue();
			}
			else if (a3_ruthlessorscary = 2)
			{
				cout << name << ": There are some things which cannot be forgiven. End the Wyrm's life Galahad. (The flames around him, which had died down while you were talking blaze up again) \n\n";
				cout << "Galahad shows only the slightest bit of hesitation before striding towards the dragon. It goes hysterical with fear and growls piteously once before Galahad ends its life. The echoes of it's growl haunt your heart. \n";
				cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to not fight back and just give up on life on seeing it was unheard of. \n";
				cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself and Erik thanks you profusely for your help. \n\n\n\n";
				cout << name << ": What are you going to do now Galahad? \n\n";
				cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
				cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
				cout << "And just when you thought your adventure wouldn't have a typical ending, you hear battle horns outside. Perfect. \n\n\n";
				_getch();
				white_epilogue_neutral();
			}
			while (a3_ruthlessorscary != 1 && a3_ruthlessorscary != 2)
			{
				goto peekaboo;
			}
			break;
		}
		break;
	default: cout << "Pathetic. Of all the countless things you could have done, you do nothing. \n";
		cout << "You can only watch as Slyrak gobbles up Galahad and Erik in an instant. \n\n";
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
		_getch();
		cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
		cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
		_getch();
		cout << "Again.\n";
		_getch();
		cout << "And again. \n\n\n";
		cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
		break;
	}
}
void ending_decider_hardline()
{
	using namespace std;
	int a3_planofattack;
	void white_epilogue_hardline();
	void black_epilogue_hardline();
	cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
	cin >> a3_planofattack;
	switch (a3_planofattack)
	{
	case 1: cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. And fire blossomed. A massive fiery orange inferno right in front of you. Galahad and Erik stare at you, shocked. \n\n";
		_getch();
		cout << "What happened next was anticlimatic to say the least. The dragon stopped mid pounce, eyes wide and jaw agape, and.................\ncollapsed. \n\n\n\n";
		cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to actually die on seeing it was unheard of. \n";
		cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself most interesting of which was the Hammer of Forging, an ancient dwarven weapon of awesome power. \n\n\n\n";
		cout << name << ": What are you going to do now Galahad? \n\n";
		cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
		cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
		cout << "A perfect fairy tale indeed. But you still had a few more stops to make.......... \n\n\n";
		white_epilogue_hardline();
		_getch();
		break;
	case 2: cout << "A shield would be absolutely useless against a dragon. Hoping against hope you Will a shield. Mistake. \n\n";
		cout << "Slyrak swats aside the shield like a fly and gobbles up Galahad in a single bite. \n\n";
		_getch();
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon of destruction. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you think. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		black_epilogue_hardline();
		break;
	case 3:cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. You Will a garment of green fire around Galahad, coating his armour, helmet and shield. He looks fearsome indeed.";
		_getch();
		cout << "The dragon stops mid pounce, eyes widening in what seems to be fear. Guess the old dwarf wasn't wrong after all. \n\n";
		cout << "Galahad steps forward confidently, only his silhouette visible as he is wreathed in flame. \n\n";
		cout << "Galahad : Foul beast, I see you quail in my fiery presence. But I will soon put an end to your miserable life so fear not. \n\n";
		cout << name << ": There are some things which cannot be forgiven. End the Wyrm's life Galahad. \n\n";
		cout << "Galahad shows only the slightest bit of hesitation before striding towards the dragon. It goes hysterical with fear and growls piteously once before Galahad ends its life. The echoes of it's growl haunt your heart. \n";
		cout << "To say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to not fight back and just give up on life on seeing it was unheard of. \n";
		cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest, the most important being the Hammer of Forging, an ancient dwarven weapon of awesome power. \n\n\n\n";
		cout << "Now that your quest was finally ending, you ask the question deep inside your heart, waiting to be let out. \n\n";
		cout << name << ": What are you going to do now Galahad? \n\n";
		cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
		cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
		cout << "A perfect fairy tale indeed. But you still had a few more stops to make.......... \n\n\n";
		white_epilogue_hardline();
		_getch();
		break;
	default: cout << "Pathetic. Of all the countless things you could have done, you do nothing. \n";
		cout << "You can only watch as Slyrak gobbles up Galahad and Erik in an instant. \n\n";
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		black_epilogue_hardline();
	}
}
void ending_decider_peace()
{
	using namespace std;
	int a3_planofattack;
	void white_epilogue_peace();
	cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
	cin >> a3_planofattack;
	switch (a3_planofattack)
	{
	case 1: cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. And fire blossomed. A massive fiery orange inferno right in front of you. Galahad and Erik stare at you, shocked. \n\n";
		_getch();
		cout << "What happened next was anticlimatic to say the least. The dragon stopped mid pounce, eyes wide and jaw agape, and.................\ncollapsed. \n\n\n\n";
		cout << "As Erik said later, to say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to actually die on seeing it was unheard of. \n";
		_getch();
		cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest yourself most interesting of which was the Hammer of Forging, an ancient dwarven weapon of awesome power. \n\n\n\n";
		cout << name << ": What are you going to do now Galahad? \n\n";
		cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
		_getch();
		cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
		cout << "A perfect fairy tale indeed. But you still had a few more stops to make.......... \n\n\n";
		white_epilogue_peace();
		_getch();
		break;
	case 2: cout << "A shield would be absolutely useless against a dragon. Hoping against hope you Will a shield. Mistake. \n\n";
		cout << "Slyrak swats aside the shield like a fly and gobbles up Galahad in a single bite. \n\n";
		_getch();
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon of destruction. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you think. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. \n\n\n\n\n\n\n\n\n";
		_getch();
		cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
		_getch();
		cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
		cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
		_getch();
		cout << "Again.\n";
		_getch();
		cout << "And again. \n\n\n";
		cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
		break;
	case 3:cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "In that split second, you focus all your thoughts. FIRE. You Will a garment of green fire around Galahad, coating his armour, helmet and shield. He looks fearsome indeed.";
		_getch();
		cout << "The dragon stops mid pounce, eyes widening in what seems to be fear. Guess the old dwarf wasn't wrong after all. \n\n";
		_getch();
		cout << "Galahad steps forward confidently, only his silhouette visible as he is wreathed in flame. \n\n";
		cout << "Galahad : Foul beast, I see you quail in my fiery presence. But I will soon put an end to your miserable life so fear not. \n\n";
		cout << name << ": There are some things which cannot be forgiven. End the Wyrm's life Galahad. \n\n";
		_getch();
		cout << "Galahad shows only the slightest bit of hesitation before striding towards the dragon. It goes hysterical with fear and growls piteously once before Galahad ends its life. The echoes of it's growl haunt your heart. \n";
		cout << "To say that Slyrak was afraid of fire was an understatement. For a dragon to be so afraid of fire so as to not fight back and just give up on life on seeing it was unheard of. \n";
		cout << "A happy fairy tale ending, you think, even if it wasn't like you pictured it. Galahad finds the 'Crystal Rose' and is mightily pleased. You find a few artifacts of interest, the most important being the Hammer of Forging, an ancient dwarven weapon of awesome power. \n\n\n\n";
		cout << name << ": What are you going to do now Galahad? \n\n";
		_getch();
		cout << "You're afraid that Galahad will just leave you. You're afraid that you are going to go back to how you lived. Your memory's the clearest it has been in years. Your fears were baseless. \n\n";
		cout << "Galahad : You mean WE don't you? (grins at you). \n\n\n\n";
		cout << "A perfect fairy tale indeed. But you still had a few more stops to make.......... \n\n\n";
		white_epilogue_peace();
		_getch();
		break;
	default: cout << "Pathetic. Of all the countless things you could have done, you do nothing. \n";
		cout << "You can only watch as Slyrak gobbles up Galahad and Erik in an instant. \n\n";
		cout << "Gone.Because you made the wrong choice.Your mind goes blank as you struggle to come to terms with what just happened. \n\n\n";
		cout << "Slyrak : (burps) I hate the armoured ones you know. It's so tough to get to the meat inside. And there's always a damn sword. (spits out Arbiter with a belch) \n\n";
		cout << "All you can think about is your time spent with the Emerald Knight, gone in an instant because you decided to talk back to a dragon. After what seems like eternity, you finally find an outlet for your emotions... \nRAGE. \n\n";
		_getch();
		cout << "The thing about Willforgers is that their creations are deeply tied to their Will which is in turn dependent on their current state of mind. Even as you struggled to cope with your rage, your Will shaped your rage into a weapon of awesome power. \n\n";
		cout << "It was a weapon made to kill. A massive scythe many times bigger than a man, yet impossibly light and sharp, and dark green in colour. A fitting tribute, you hope. \n\n";
		cout << "(The appearance of the scythe gives the dragon pause. Even it could see that this was no ordinary weapon. \n\n";
		cout << "Slyrak : Maybe I was a little hasty in devouring your friend. Perhaps we could come to an arrangement-- \n\n";
		_getch();
		cout << "For most Willforgers, the most fascinating thing about it was that it had no limits. Anybody could learn it and yet it was rare to find masters of the art. Willforgers believe that God Himself was a Willforger, Willing the world into existence manifesting his loneliness by creating life. \n\n";
		cout << "Most artifacts existing now were also Willforged. If your Will is strong enough, the object could exist forever as in the case of the World. Or the weapon you just made. \n\n";
		cout << "After a Willforging, one is always left curiously devoid of emotion. So, you weren't feeling any anger. The scythe was the very manifestation of your rage leaving you with only the intention of killing the dragon. \n";
		cout << "And thus, you interrupted the dragon mid-sentence not interested in the least as to what it wanted to say, and took off its head with a single swing. \n\n";
		cout << "You look around for the Crystal Rose for a whlie, find it and then leave. You still had a few stops to make before reaching home though.................\n\n\n";
		_getch();
		cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n";
		_getch();
		cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
		cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
		_getch();
		cout << "Again.\n";
		_getch();
		cout << "And again. \n\n\n";
		cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
		break;
	}
}

void white_epilogue_neutral()
{
	using namespace std;
	int epi_white_warornot;
	int epi_white_deathby;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Epilogue  \n\n\n";
	cout << "Erik : What in the name of- \n\n";
	cout << "Erik is interrupted by what seems to be a roar from outside. You, Erik and Galahad go outside and see........... \n ";
	_getch();
	cout << "A company of humans, around 1000 strong, stand outside. Looking at the way they're dressed they probably came for war. The king steps forth : \n\n";
	cout << "King Foltest : See men what did I tell you? That dragon is long dead. Just a bunch of vagabonds here trying to make money from the dwarven fortune left behind. Time for you to earn your pay men. \n\n ";
	_getch();
	cout << "Erik : (in an undertone) Damn, I'd heard that the King was organinsing an expedition to route the dwarven halls of my ancestors. That's the main reason I even accompanied you on this quest. This is gonna be a problem. \n\n";
	cout << "King Foltest : Alright, you three, I might let you live if you surrender yourselves right now. Or of course, you could try your odds against my men. (grins evilly) \n\n";
	cout << "Galahad : My corpse can rot before I hand over our hard-earned loot to a cocky prick like you, 'Your Highness'. \n\n";
	cout << "Foltest does not look pleased. \n\n";
	_getch();
	cout << "Galahad draws his sword. Erik starts searching in his bag for something. You : \n";
	_getch();
	cout << "1  Will a crossbow to support Galahad \n2  Tell Galahad and Erik that they might wanna reconsider considering the fact that they're outnumbered 300 to 1. Not good odds. \n\n";
	cin >> epi_white_warornot;
	switch (epi_white_warornot)
	{
	case 1: cout << "Galahad grins when he sees your bow. You know that he's thinking the same thing you are : We make a good team. \n";
		cout << "King Foltest : So be it. At them boys! Let the dogs feast on their corpses tonight. \n\n";
		cout << "The soldiers charge. \n";
		_getch();
		break;
	case 2: cout << "Even before the words leave your mouth you look at the resolve in their eyes. No words will convince them. You smile and Will a crossbow. \n";
		cout << "Galahad grins when he sees your bow. You know that he's thinking the same thing you are : We make a good team. \n";
		cout << "King Foltest : So be it. At them boys! Let the dogs feast on their corpses tonight. \n\n";
		cout << "The soldiers charge. \n";
		_getch();
		break;
	default: cout << "Galahad grins when he sees your bow. You know that he's thinking the same thing you are : We make a good team. \n";
		cout << "King Foltest : So be it. At them boys! Let the dogs feast on their corpses tonight. \n\n";
		cout << "The soldiers charge. \n";
		_getch();
		break;
	}
	cout << "Galahad falls upon them taking out 3 in an instant. You never knew that he was this adept with a weapon. It's almost like he's dancing, the blood of his enemies testament to his skill. \n";
	cout << "You take out a few with your crossbow before realizing the futility. As you think upon the best way to dispatch an army like this Erik lets out a shout of happiness. \n\n";
	_getch();
	cout << "Erik : Found it at last. I wanted to give you this when we left but as they say, no time like the present. Here. \n ";
	cout << " Erik hands you a massive hammer, six feet tall atleast. You look at him, puzzled. \n";
	_getch();
	cout << "Erik : What you're holding there is the Hammer of Forging. One of the dwarves' greatest creations. Even a mediocre Willforger can do great things with it. Use it well " << name << ". \n";
	cout << "You'd heard of this before of course, every Willforger had. It was a generous gift. You look at Erik, lost for words. He grins at you. \n\n";
	_getch();
	cout << "With a weapon of such awesome power, the possibilities are endless. You :  \n";
	cout << "1  Will a DRAGON.  \n2  Will an army of your own \n3  Make Galahad a weapon of mass destruction, giving him Godlike power with your Will. \n";
	cin >> epi_white_deathby;
	switch (epi_white_deathby)
	{
	case 1: cout << "As a good friend of yours once said, 'Never take half measures.' So why bother with armies when you can Will a dragon? And so you did. \n";
		cout << "You slam the Hammer of Forging into the ground. The ground ripples like water and everyone freezes in place, wondering what was happening, \n";
		cout << "The expression on King Foltest's face is priceless when he sees the mighty beast rise from the ground. A massive dragon, twice as large as the late Slyrak and much more menacing. This dragon had no mind of its own of course, it was just there to do your bidding. And your bidding was to kill. And kill it did. \n\n";
		_getch();
		cout << "Galahad looks at the dragon in wonder as it tears through the king's men like a hot knife thorugh butter. \n\n";
		cout << "Erik : Of all the things you could have Willed, you had to make a dragon didn'tcha? The greatest work of the dwarves used to make their greatest enemy. \n\n";
		cout << name << ": Sorry. But it seemed appropriate. \n\n";
		cout << "Before long, there is no army left. The King was one of the first to flee with a few of his soldiers. The rest followed suit when they realized how hopelessly outmatched they were. \n\n";
		_getch();
		break;
	case 2:cout << "An army to deal with an army, Seems apt. \n";
		cout << "You slam the Hammer of Forging into the ground. The ground ripples like water and everyone freezes in place, wondering what was happening, \n";
		cout << "The expression on King Foltest's face is priceless when he sees an army of soldiers in green plate mail arise from the ground. They are of course, mindless and unstoppable as long as you could maintain them. \n";
		_getch();
		cout << "Galahad : A green army for the Emerald Knight to lead. Tis' a great day for slaughter! \n";
		cout << "Erik laughs with happiness at the childish behaviour of Galahad and the sight of the men being cut down like a harvest crop before a storm. \n";
		cout << "Before long, there is no army left. The King was one of the first to flee with a few of his soldiers. The rest followed suit when they realized how hopelessly outmatched they were. \n\n";
		_getch();
		break;
	case 3: cout << "This was Galahad's adventure after all. Fitting to let him be the hero and save the day. \n";
		cout << "You Will a mighty suit of armour around Galahad, interrupting him in the middle of his fight. A massive suit of armour coalesces around him, green in colour and 20 feet tall with Galahad at the centre. \n\n";
		_getch();
		cout << "Galahad : Armour, I dub thee 'The Avatar of the Green'. Now come, lets wreak havoc among these lesser beings. \n";
		cout << "The look on King Foltest's face is priceless as he looks at Galahad ripping through his best soldiers. \n\n";
		cout << "Before long, there is no army left. The King was one of the first to flee with a few of his soldiers. The rest followed suit when they realized how hopelessly outmatched they were. \n\n";
		_getch();
		break;
	default:
		while (epi_white_deathby != 1 && epi_white_deathby != 2 && epi_white_deathby != 3)
		{
			cout << "Endless choices and yet you can't decide?? There must be something wrong with you. \n";
			cout << "1  Will a DRAGON.  \n2  Will an army of your own \n3  Make Galahad a weapon of mass destruction, giving him Godlike power with your Will. \n";
			cin >> epi_white_deathby;
		}
		break;
	}
	cout << "With the army routed and 'His Highness' running away with his tail between his legs, you, Erik and Galahad decide to camp outside for the night. \n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Later that night........... \n\n\n";
	cout << name << ": So what are you guys going to do now? \n\n";
	_getch();
	cout << "Erik : I'm going to call my brethren, tell them that the Wyrm has been slain by a mighty Hero (grins at you). After that, it's gonna be an easy life. \n\n";
	cout << "Galahad : I'm not sure yet what I want to do. \n\n";
	cout << "You look at him, incredulous. The whole reason for the quest was to woo his lady love with the 'Crystal Rose', which he held in his hands. \n\n";
	_getch();
	cout << "Galahad : I just.....don't wanna settle down yet. There's so much adventure in this world and I don't want to spend the rest of my life cooped up in some castle. And it's great fun travelling with the mightiest Willforger living, the mighty " << name << ". \n\n";
	cout << name << ": Galahad, if you really still want to go on adventures with me, I would be delighted to. Nay, I would be blessed. \n\n";
	cout << "Galahad : (laughs in happiness) So that's decided then. A-questin' we shall go! I heard about this witch in.......... \n\n\n\n";
	cout << "You tune out to what he's saying, a deep happiness in your heart. This fairy tale is just beginning.................................. \n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
}
void white_epilogue_hardline()
{
	using namespace std;
	int white_hardline_epi_deathby;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Epilogue  \n\n\n";
	cout << "Setting : The Town of Trebol \n\n";
	_getch();
	cout << "You and Galahad stand outside the city, staring up at the walls, the Hammer of Forging over one shoulder. You contemplate on what sort of punishment Diana deserves....... \n\n";
	cout << "She had assassinated the good King whom the people had loved. She had made you and Galahad scapegoats and turned the entire town against you.";
	cout << "Galahad : Time to give that bitch what she deserves. \n\n";
	cout << "You look at Galahad, surprised at the strong language. Galahad is angry. Very angry. \n\n";
	cout << "You and Galahad enter Trebol. People point at you and mutter, and soon enough there is a mob behind you. Before long, you are in front of the palace. Diana and a few of her guards stand in front of you. \n\n";
	_getch();
	cout << "Diana : Well well, look who's back. (raises her voice) Look people of Trebol! Those who were responsible for the death of His Majesty King Foltest have come back. We shall avenge our king! (aside) Get rid of them. \n\n";
	cout << "The soldiers come charging towards you from the front and the mob from behind. Strangely enough, you feel no fear. Galahad looks at you. \n\n";
	cout << "Galahad : I don't wan't to harm all these innocent people " << name << ". What do we do now? \n\n";
	cout << "You unsling the hammer from your shoulders. It was a massive weapon, six feet tall. Time to see what it could do. You : \n\n";
	cout << "1  Will an earthquake to show them that you are not to be messed with \n2  Give Galahad Godlike power using your Will \n3  Will a DRAGON \n\n";
	cin >> white_hardline_epi_deathby;
	switch (white_hardline_epi_deathby)
	{
	case 1: cout << "You slam the hammer into the ground. Everyone pauses expectantly. They are not disappointed. A massive shaking is felt and many buildings in the area collapse. A few chasms open up and many die, crushed by the debris or by falling into the chasm. You feel a twinge of guilt. \n\n";
		cout << "You set your hammer down wearily. Galahad seems to have escaped the destruction with only a few scratches and bruises. Stupid of you to think that you could control such power. And now so many innocents dead because of you. \n\n";
		cout << "You take your mind off the matter when you hear Diana calling for help. \n";
		_getch();
		cout << "You and Galahad make your way to where she is lying, her leg crushed between debris. She is bleeding a lot and will almost certainly die within the hour. You and Galahad look at each other, nod to each other and leave Trebol without a backward glance. \n\n\n\n";
		break;
	case 2: cout << "You walk over to Galahad, summon your Will and tap him on the shoulder. Galahad looks at you surprised but before he can say anything, a massive suit of armour envelopes him. He is now within a Will giant. Galahad moves his hand experimentally and the giant mimics him. Needless to say, everyone stands down immediately on seeing him. \n\n";
		cout << "Galahad looks at Diana, cold hard anger in his eyes. Without further ado, he raises his sword and makes a stabbing motion. The giant mirrors his movement, stabbing Diana through the torso with a blade as thick as a tree. You leave. No one tries to stop you. \n\n";
		break;
	case 3: cout << "As a friend of yours used to say, 'Go big or go home.' So you raise your hammer into the air and Will a dragon. And the dragon came. A massive creature, fiery red and terrifying rises into the sky and roars loudly. Everyone goes very, very still. \n";
		cout << "You fancy you hear Diana whimpering. That small lapse of concentration was all it takes for the dragon to gobble up a few soldiers. You chide yourself for not maintaining better control of the Willbeast. \n";
		cout << "Galahad : Kill her. \n\n";
		_getch();
		cout << "The fact that his voice was cold and flat and devoid of emotion makes it all the scarier to listen to. \nThe dragon snaps up Diana in the blink of an eye. You leave the town without a backward glance. No one stops you. \n\n";
		break;
	default: cout << "Can't decide what to do? Summon the dragon then. It's obviously the coolest thing you could do. \n\n";
		cout << "So you raise your hammer into the air and Will a dragon. And the dragon came. A massive creature, fiery red and terrifying rises into the sky and roars loudly. Everyone goes very, very still. \n";
		cout << "You fancy you hear Diana whimpering. That small lapse of concentration was all it takes for the dragon to gobble up a few soldiers. You chide yourself for not maintaining better control of the Willbeast. \n";
		cout << "Galahad : Kill her. \n\n";
		_getch();
		cout << "The fact that his voice was cold and flat and devoid of emotion makes it all the scarier to listen to. \nThe dragon snaps up Diana in the blink of an eye. You leave te town without a backward glance. No one stops you. \n\n";
		break;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Later that night........... \n\n\n";
	_getch();
	cout << "You and Galahad are camped outside Trebol, leaving the town after chaos erupted. You decide to wash your hands clean of the matter, leaving Trebol to its own devices. You chat about pleasant things, enjoying each other's companionship. \n\n";
	cout << name << ": What about you Galahad? What do you want to do? \n\n";
	cout << "Galahad : I'm not sure yet what I want to do. \n\n";
	_getch();
	cout << "You look at him, incredulous. The whole reason for the quest was to woo his lady love with the 'Crystal Rose', which he held in his hands. \n\n";
	cout << "Galahad : I just.....don't wanna settle down yet. There's so much adventure in this world and I don't want to spend the rest of my life cooped up in some castle. And it's great fun travelling with the mightiest Willforger living, the mighty " << name << ". \n\n";
	cout << name << ": Galahad, if you really still want to go on adventures with me, I would be delighted to. Nay, I would be blessed. \n\n";
	cout << "Galahad : (laughs in happiness) So that's decided then. A-questin' we shall go! I heard about this witch in.......... \n\n\n\n";
	cout << "You tune out to what he's saying, a deep happiness in your heart. This fairy tale is just beginning.................................. \n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
}
void white_epilogue_peace()
{
	using namespace std;
	int white_peace_epi_deathby;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "Epilogue  \n\n\n";
	cout << "Setting : The Town of Trebol \n\n";
	_getch();
	cout << "You and Galahad stand outside the city, staring up at the walls, the Hammer of Forging over one shoulder. You contemplate on what sort of punishment Bard deserves....... \n\n";
	cout << "He had imprisoned and subsequently executed the good King whom the people had loved. He had plaeyd you and Galahad for fools.";
	cout << "Galahad : Time to give that bastard what he deserves. \n\n";
	cout << "You look at Galahad, surprised at the strong language. Galahad is angry. Very angry. \n\n";
	cout << "You and Galahad enter Trebol. People point at you and mutter, and soon enough there is a mob behind you. Before long, you are in front of the palace. Bard and a few of his guards stand in front of you. \n\n";
	_getch();
	cout << "Bard : Well well, look who's back. I warned you not to come back. Get rid of them. \n\n";
	cout << "The soldiers come charging towards you. Strangely enough, you feel no fear. Galahad looks at you. \n\n";
	cout << "Galahad : I don't wan't to harm all these innocent people " << name << ". What do we do now? \n\n";
	cout << "You unsling the hammer from your shoulders. It was a massive weapon, six feet tall. Time to see what it could do. You : \n\n";
	cout << "1  Will an earthquake to show them that you are not to be messed with \n2  Give Galahad Godlike power using your Will \n3  Will a DRAGON \n\n";
	cin >> white_peace_epi_deathby;
	switch (white_peace_epi_deathby)
	{
	case 1: cout << "You slam the hammer into the ground. Everyone pauses expectantly. They are not disappointed. A massive shaking is felt and many buildings in the area collapse. A few chasms open up and many die, crushed by the debris or by falling into the chasm. You feel a twinge of guilt. \n\n";
		cout << "You set your hammer down wearily. Galahad seems to have escaped the destruction with only a few scratches and bruises. Stupid of you to think that you could control such power. And now so many innocents dead because of you. \n\n";
		cout << "You take your mind off the matter when you hear Bard calling for help. \n";
		cout << "You and Galahad make your way to where he is lying, a rod through his chest. It's a death blow for sure. You and Galahad look at each other, nod to each other and leave Trebol without a backward glance. \n\n\n\n";
		break;
	case 2:  cout << "You walk over to Galahad, summon your Will and tap him on the shoulder. Galahad looks at you surprised but before he can say anything, a massive suit of armour envelopes him. He is now within a Will giant. Galahad moves his hand experimentally and the giant mimics him. Needless to say, everyone stands down immediately on seeing him. \n\n";
		cout << "Galahad looks at Bard, cold hard anger in his eyes. Without further ado, he raises his sword and makes a stabbing motion. The giant mirrors his movement, stabbing Bard through the torso with a blade as thick as a tree. You leave. No one tries to stop you. \n\n";
		break;
	case 3:cout << "As a friend of yours used to say, 'Go big or go home.' So you raise your hammer into the air and Will a dragon. And the dragon came. A massive creature, fiery red and terrifying rises into the sky and roars loudly. Everyone goes very, very still. \n";
		cout << "You fancy you hear Bard whimpering. That small lapse of concentration was all it takes for the dragon to gobble up a few soldiers. You chide yourself for not maintaining better control of the Willbeast. \n";
		cout << "Galahad : Kill him. \n\n";
		cout << "The fact that his voice was cold and flat and devoid of emotion makes it all the scarier to listen to. \nThe dragon snaps up Bard in the blink of an eye. You leave the town without a backward glance. No one stops you. \n\n";
		break;
	default:cout << "Can't decide what to do? Summon the dragon then. It's obviously the coolest thing you could do. \n\n";
		cout << "So you raise your hammer into the air and Will a dragon. And the dragon came. A massive creature, fiery red and terrifying rises into the sky and roars loudly. Everyone goes very, very still. \n";
		cout << "You fancy you hear Diana whimpering. That small lapse of concentration was all it takes for the dragon to gobble up a few soldiers. You chide yourself for not maintaining better control of the Willbeast. \n";
		cout << "Galahad : Kill her. \n\n";
		cout << "The fact that his voice was cold and flat and devoid of emotion makes it all the scarier to listen to. \nThe dragon snaps up Diana in the blink of an eye. You leave the town without a backward glance. No one stops you. \n\n";
		break;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Later that night........... \n\n\n";
	cout << "You and Galahad are camped outside Trebol, leaving the town after chaos erupted. You decide to wash your hands clean of the matter, leaving Trebol to its own devices. You chat about pleasant things, enjoying each other's companionship. \n\n";
	cout << name << ": What about you Galahad? What do you want to do? \n\n";
	cout << "Galahad : I'm not sure yet what I want to do. \n\n";
	cout << "You look at him, incredulous. The whole reason for the quest was to woo his lady love with the 'Crystal Rose', which he held in his hands. \n\n";
	cout << "Galahad : I just.....don't wanna settle down yet. There's so much adventure in this world and I don't want to spend the rest of my life cooped up in some castle. And it's great fun travelling with the mightiest Willforger living, the mighty " << name << ". \n\n";
	cout << name << ": Galahad, if you really still want to go on adventures with me, I would be delighted to. Nay, I would be blessed. \n\n";
	cout << "Galahad : (laughs in happiness) So that's decided then. A-questin' we shall go! I heard about this witch in.......... \n\n\n\n";
	cout << "You tune out to what he's saying, a deep happiness in your heart. This fairy tale is just beginning.................................. \n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
}

void grey_white_epilogue()
{
	using namespace std;
	int epi_howwillyoureact;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Epilogue  \n\n\n";
	cout << "Erik : What in the name of- \n\n";
	cout << "Erik is interrupted by what seems to be a roar from outside. Slyrak looks surprised. You, Erik and Galahad go outside and see........... \n ";
	_getch();
	cout << "A company of humans, around 1000 strong, stand outside. It was their battle shout that had sounded like a roar. Looking at the way they're dressed they probably came for war. The king steps forth : \n\n\n\n";
	cout << "King Foltest : See men what did I tell you? That dragon is long dead. Just a bunch of vagabonds here trying to make money from the dwarven fortune left behind. Time for you to earn your keep, my soldiers. \n\n ";
	cout << "Erik : (in an undertone) Damn, I'd heard that the King was organinsing an expedition to route the dwarven halls of my ancestors. That's the main reason I even accompanied you on this quest. This is gonna be a problem. \n\n";
	cout << "King Foltest : Alright, you three, I might let you live if you surrender yourselves right now. Or of course, you could try your odds against my men. (grins evilly) \n\n";
	_getch();
	cout << "Galahad : My corpse can rot before I hand over our hard-earned loot to a cocky prick like you, 'Your Highness'. \n\n";
	cout << "Foltest does not look pleased. \n\n";
	cout << "Erik : Well, now we're in a pickle ain't we mister Willforger? How do you propose we go about getting out of this one huh? \n\n";
	cout << "You look at him, irritated. \n";
	cout << "You consider your options: \n\n";
	cout << "1  'Why don't you make yourself useful instead of jabbering over there?' \n2  Call the dragon and slaughter every last one of these pricks \n3  Charge and hope for the best \n\n";
	cin >> epi_howwillyoureact;
	switch (epi_howwillyoureact)
	{
	case 1: cout << "Erik glowers at you. \n";
		cout << "Erik : I have half a mind to join that royal idiot over there and leave you two pricks to fend for yourself. \n\n";
		cout << "Before you can retort you hear a roar from behind you. \n\n";
		_getch();
		cout << "Slyrak comes out, looking terrifying with the sunlight glancing off of his bright red scales. \n\n";
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day.";
		break;
	case 2: cout << "You turn around and whistle. It was a good whistle, shrill and sharp. You hear the king and his men jeering at you from behind. They were probably thinking that you had gone crazy. \n\n";
		cout << "Erik :(groans) Not the damn Wyrm again. Can't we just deal with this ourselves and leave the beast out of it? \n\n";
		cout << "Slyrak emerges with a mighty roar looking terrifying with the sunlight glancing off of his bright red scales. \n";
		_getch();
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day.";
		break;
	case 3: cout << "Galahad : You alright mate? It's my job to do the stupid stuff. \n\n";
		cout << "Erik : I'm telling you, your friend here's gone cracked. First saving the dragon and now this....... \n";
		cout << "Before you can defend yourself you hear a roar from behind you. \n\n";
		_getch();
		cout << "Slyrak comes out, looking terrifying with the sunlight glancing off of his bright red scales. \n\n";
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day. ";
		break;
	default: cout << "Erik : Nothing to say huh? Should've known. What about you knight? You're not tongue-tied I hope. \n\n";
		cout << "Galahad : (grins) How about this? (whistles loudly) \n\n";
		cout << "Erik groans as you hear a roar from behind you. \n\n";
		_getch();
		cout << "Slyrak comes out, looking terrifying with the sunlight glancing off of his bright red scales. \n\n";
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day.";
		break;
	}
	cout << "With the army routed and 'His Highness' running away with his tail between his legs, you, Erik and Galahad decide to camp outside for the night with Slyrak. \n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Later that night........... \n\n\n";
	cout << name << ": So what are you guys going to do now? \n\n";
	_getch();
	cout << "Slyrak : I have committed many sins. I shall spend the rest of my life in repentance. \n\n";
	cout << "Erik : Shut up dragon. He was talking to us. \n\n";
	cout << "Slyrak growls in answer. \n\n";
	cout << "You hold up a hand to silence them. \n";
	_getch();
	cout << name << ": Enough. Erik, try not to be harsh with the dragon. He's trying to repent. \n\n";
	cout << "Erik : What am I supposed to do? Just forgive it for the hundreds it has slaughtered and eaten? \n\n";
	_getch();
	cout << "Slyrak : What would you have me do dwarf? You may have my head if that makes you happy. \n\n";
	cout << "There is a moment of silence as Erik considers the proposition. Finally \n";
	_getch();
	cout << "Erik : I don't want your filthy blood on my hands dragon. \n\n\n\n";
	cout << "Turns out the old dwarf was a softie at heart after all. \n\n";
	cout << "Galahad : How's this for an idea? Why don't you both live here together? \n\n";
	_getch();
	cout << "There is an outbreak of furious protest at this idea, both from Erik and Slyrak. \n\n";
	cout << "But there's something about the tone of their quarrelling. It seems more like friendly bickering than a heated argument. \n\n";
	cout << "You feel like everything's gonna be alright. It doesn't make sense but instinct rarely does. You turn to Galahad : \n";
	_getch();
	cout << name << ": What about you Galahad? What do you want to do? \n\n";
	cout << "Galahad : I'm not sure yet what I want to do. \n\n";
	_getch();
	cout << "You look at him, incredulous. The whole reason for the quest was to woo his lady love with the 'Crystal Rose', which he held in his hands. \n\n";
	cout << "Galahad : I just.....don't wanna settle down yet. There's so much adventure in this world and I don't want to spend the rest of my life cooped up in some castle. And it's great fun travelling with the greatest Willforger living, the mighty " << name << ". \n\n";
	cout << name << ": Galahad, if you really still want to go on adventures with me, I would be delighted to. Nay, I would be blessed. \n\n";
	cout << "Galahad : (laughs in happiness) So that's decided then. A-questin' we shall go! I heard about this witch in.......... \n\n\n\n";
	cout << "You tune out to what he's saying, a deep happiness in your heart. This fairy tale is just beginning.................................. \n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
	exit(0);
}
void grey_black_epilogue()
{
	using namespace std;
	int epi_armyordrag;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Epilogue  \n\n\n";
	cout << "Galahad : What in the name of- \n\n";
	cout << "Galahad is interrupted by what seems to be a roar from outside. Slyrak looks surprised. You and Galahad go outside and see........... \n ";
	_getch();
	cout << "A company of humans, around 1000 strong, stand outside. It was their battle shout that had sounded like a roar. Looking at the way they're dressed they probably came for war. The king steps forth : \n\n\n\n";
	cout << "King Foltest : See men what did I tell you? That dragon is long dead. Just a bunch of vagabonds here trying to make money from the dwarven fortune left behind. Time for you to earn your keep, my soldiers. \n\n ";
	cout << "'Out of the frying pan, into the fire' you think on seeing the massive army. No way you and Galahad could take care of them. \n\n";
	cout << "King Foltest : Alright, you two, I might let you live if you surrender yourselves right now. Or of course, you could try your odds against my men. (grins evilly) \n\n";
	cout << "Galahad : My corpse can rot before I hand over our hard-earned loot to a cocky prick like you, 'Your Highness'. \n\n";
	cout << "Foltest does not look pleased. \n\n";
	_getch();
	cout << "King Foltest : You will pay for your insolence. CHARGE!! \n\n";
	cout << "You stand there watching a 1000-strong company of men charging towards you. Galahad draws his sword. You marvel at his lack of hesitation. \n\n";
	_getch();
	cout << "You : \n";
	cout << "1  Call Slyrak though that would mean the deaths of all and sundry. \n2  Will an army to fight their army. \n\n";
	cin >> epi_armyordrag;
	switch (epi_armyordrag)
	{
	case 1: cout << "You turn around and whistle. It was a good whistle, shrill and sharp. You hear the king and his men jeering at you from behind. They were probably thinking that you had gone crazy. \n\n";
		cout << "Slyrak emerges with a mighty roar looking terrifying with the sunlight glancing off of his bright red scales. \n";
		_getch();
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day. ";
		break;
	case 2: cout << "An army to fight an army. How apt. \n\n";
		cout << "You focus your Will and.............nothing happens. \n\n";
		cout << "The death of Erik and the subsequent feeling of guilt leaves you almost unable to Wilforge. \n";
		_getch();
		cout << "The army comes close, shouting and charging. You close your eyes....... MAybe death wouldn't be so bad after all. \n\n";
		cout << "However, before the fighting starts a loud roar is heard. Slyrak emerges from inside, looking terrifying with the sunlight glancing off his fiery red scales. \n";
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day.";
		break;
	default: cout << "You are unable to do anything. Your murder of Erik doesn't let you focus and Willforge. \n\n";
		cout << "The army comes close, shouting and charging. You close your eyes....... MAybe death wouldn't be so bad after all. \n\n";
		_getch();
		cout << "However, before the fighting starts a loud roar is heard. Slyrak emerges from inside, looking terrifying with the sunlight glancing off his scales. \n";
		cout << "You look at King Foltest and you are rewarded with a look of pure terror on his face. Even as you watch, he turns and runs commanding his men to fight the dragon, using them as a decoy. \n\n\n";
		cout << "Let it suffice to say that the dragon fed well that day.";
		break;
	}
	cout << "With the army routed and 'His Highness' running away with his tail between his legs, you and Galahad decide to camp outside for the night with Slyrak. \n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << "Later that night........... \n\n\n";
	cout << "Galahad : So what are you guys going to do now? \n\n";
	_getch();
	cout << "Slyrak : I have committed many sins. I shall spend the rest of my life in repentance. \n\n";
	cout << "Galahad : That is a worthy goal to strive for my friend. May your scales never rot. \n\n";
	cout << "Slyrak growls in answer. \n\n";
	_getch();
	cout << " You don't say anything. The death of Erik is like a boulder around your neck dragging you down. But Galahad persists. \n\n";
	cout << "Galahad : What about you" << name << "? What do you want to do? \n\n";
	cout << name << ": I'm not sure yet what I want to do. What do YOU want to do Galahad? \n\n";
	cout << "Galahad : Even I haven't decided as of now. \n\n";
	_getch();
	cout << "You look at him, incredulous. The whole reason for the quest was to woo his lady love with the 'Crystal Rose', which he held in his hands. \n\n";
	cout << "Galahad : I just.....don't wanna settle down yet. There's so much adventure in this world and I don't want to spend the rest of my life cooped up in some castle. And it's great fun travelling with the greatest Willforger alive, the mighty " << name << ". \n\n";
	cout << name << ": Galahad, if you really still want to go on adventures with me, I would be delighted to. Nay, I would be blessed. \n\n";
	_getch();
	cout << "Galahad : (laughs in happiness) So that's decided then. A-questin' we shall go! I heard about this witch in.......... \n\n\n\n";
	cout << "You tune out to what he's saying, a deep happiness joining the deep sadness in your heart. This fairy tale is just beginning.................................. \n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
	exit(0);
}


void black_epilogue_hardline()
{
	using namespace std;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t " << "Epilogue  \n\n\n";
	cout << "Setting : The Town of Trebol \n\n";
	_getch();
	cout << "You stand outside the city, staring up at the walls, Arbiter over one shoulder. You contemplate on what sort of punishment Diana deserves....... \n\n";
	cout << "She had assassinated the good King whom the people had loved. She had made you and Galahad scapegoats and turned the entire town against you. Because of which you were forced out of town. Because of which Galahad was- \n\n";
	cout << "You stop that thought. There could only be one punishment, you decide : \n\nDEATH. \n\n";
	cout << "You enter Trebol. People look at you with awe and mutter but give you a wide berth. A massive weapon which seems sharp enough to cut the very air tends to do that. \n\n";
	cout << "Before long, you are in front of the palace. Diana and a few of her guards stand in front of you. \n\n";
	_getch();
	cout << "Diana : Well well, look who's back. We seem to be missing one knight though. Oh well, one body less for me to dispose of. Kill him.\n\n";
	cout << "Diana never was one for small talk. \n\n";
	cout << "The soldiers come charging towards you. Strangely enough, you feel no fear. \n\n";
	cout << name << ": I name myself judge, jury and executioner. Diana Bloodsword, your punishment is death. \n\n\n\n";
	cout << "One swing of Arbiter. That's all it took to kill the dozen soldiers charging at you AND Diana standing behind them. Not to mention the fact that the gates to the palace were also ripped in half. Diana's face registers surprise as it falls to the ground. You leave, your promise to a dead friend fulfilled. \n\n\n";
	cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n\n\n\n";
	_getch();
	cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU and the massive scythe resting in a corner, gathering dust. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
	cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
	_getch();
	cout << "Again.\n";
	_getch();
	cout << "And again. \n\n\n";
	_getch();
	cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
}
void black_epilogue_peace()
{
	using namespace std;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t " << "Epilogue  \n\n\n";
	cout << "Setting : The Town of Trebol \n\n";
	_getch();
	cout << "You stand outside the city, staring up at the walls, Arbiter over one shoulder. You contemplate on what sort of punishment Bard deserves....... \n\n";
	cout << "He was responsible for the imprisonment and the subsequent death of the good King whom the people had loved. He had played you and Galahad for fools. Because of which you were forced to leave town. Because of which Galahad was- \n\n";
	cout << "You stop that thought. There could only be one punishment you decide : DEATH. \n\n";
	cout << "You stop that thought. There could only be one punishment, you decide : \n\nDEATH. \n\n";
	cout << "You enter Trebol. People look at you with awe and mutter but give you a wide berth. A massive weapon which seems sharp enough to cut the very air tends to do that. \n\n";
	cout << "Before long, you are in front of the palace. Bard and a few of his guards stand in front of you. \n\n";
	cout << "Bard : Well well, look who's back. We seem to be missing one knight though. Oh well, one body less for me to dispose of. Kill him.\n\n";
	cout << "The soldiers come charging towards you. You feel no fear. \n\n";
	cout << name << ": I name myself judge, jury and executioner. \nBard Bloodfang, your punishment is death. \n\n\n\n";
	cout << "One swing of Arbiter. That's all it took to kill the dozen soldiers charging at you AND Diana standing behind them. Not to mention the fact that the gates to the palace were also ripped in half. Diana's face registers surprise as it falls to the ground. You leave, your promise to a dead friend fulfilled. \n\n\n";
	cout << "1  WILL a fireball  \n2  WILL a shield \n3  WILL fire around Galahad  \n\n\n\n\n";
	_getch();
	cout << "You wake up, panting heavily. You look around and see the familiar furniture of your bedroom. The only thing that's changed is YOU and the massive scythe resting in a corner, gathering dust. You haven't been able to Willforge anything after.........Galahad's death. \n\n";
	cout << "And then there were the memories. Like an unending nightmare. You see the dragon, mid pounce and having a split second to decide. Making the wrong choice. Watching as it gobbles up your friend. \n";
	_getch();
	cout << "Again.\n";
	_getch();
	cout << "And again. \n\n\n";
	cout << "You give up on sleep for the night. Your hand reaches out for the bottle. And a tear rolls down your cheek................. \n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t THE END ";
	_getch();
}

int main()
{
	{
		using namespace std;                                                                                                                /*TITLE SCREEN*/
		cout << "**      **  ********  *******  *     *  ********* *       *       ********  *      *  *******  *******  *******       *******  *******  ********         *******   *******  *******  *******       *        ********  ******** *********   \n";
		cout << "* *    * *     *      *        *     *      *      *     *        *      *  *      *  *        *           *          *        *     *  *      *         *         *     *     *     *             *        *      *  *      *     *       \n";
		cout << "*  *  *  *     *      *        *     *      *       *   *         *      *  *      *  *        *           *          *        *     *  *      *         *         *     *     *     *             *        *      *  *      *     *       \n";
		cout << "*   **   *     *      *        *     *      *        * *          *      *  *      *  *        *           *          *        *     *  ********         *         *     *     *     *             *        *      *  *      *     *       \n";
		cout << "*        *     *      *        *******      *         *           *      *  *      *  *****    *******     *          *****    *     *  * *              ****      *******     *     *             *        *      *  *      *     *       \n";
		cout << "*        *     *      *  ****  *     *      *         *           *      *  *      *  *              *     *          *        *     *  *  *             *         *           *     *             *        *      *  *      *     *       \n";
		cout << "*        *     *      *     *  *     *      *         *           *  *   *  *      *  *              *     *          *        *     *  *   *            *         *           *     *             *        *      *  *      *     *       \n";
		cout << "*        *     *      *     *  *     *      *         *           *    * *  *      *  *              *     *          *        *     *  *    *           *         *           *     *             *        *      *  *      *     *       \n";
		cout << "*        *  ********  *******  *     *      *         *           ********  ********  *******  *******     *          *        *******  *     *          *******   *        *******  *******       *******  ********  ********     *       \n\n\n";
		cout << "Press any key to start. \n\n";
		_getch();
	}
	{                                                                                                                           /*ACT 1*/

		using namespace std;
		{cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t " << "WELCOME PLAYER" << "\n";
		cout << "You awake after a long nap you didn't intend to take. \n";
		cout << "You are a Willforger. Indeed you were one of the finest but that all changed with time as everything does. \n";
		cout << "You now spend most of your time in the company of memories of days gone by and a bottle of the finest. \n";
		cout << "However, it is all fading away now and you are desperate for an adventure. Something, anything that would reignite the flame of your intoxicating youth. \n";
		cout << "Each day is a struggle in remembering something or the other. However today seems to be a good day. \n";
		cout << "You recall the battles fought for mere trinkets and glory and the awe with which people whispered your name ";
		cout << "when you passed them by.";
		cout << " Ah. What was your name again? (Enter your name) ";
		getline(cin, name);
		cout << "So that's what it was....." << name << ",a good name, as names go. \n\n";
		cout << "What IS willforging you wonder? (as in YOU, the player not the master willforger who obviously wouldn't question what willforging was.) \n";
		cout << "It's a common enough art but to find a true master is exceptionally rare.";
		cout << " Simply put it is the art of manifesting your will as physical objects.";
		cout << " However the concentration required for such a feat is not easy to muster. \n";
		cout << "And thus it is no longer considered to be a magic of much consequential use with its main users being handymen who travel plying their 'will' to fix objects of daily use.";
		cout << " But a true master is one to be feared........ \n\n\n";
		_getch();
		}
		{
			int a1c1;                                                                                                          /*ACT 1 Choice 1*/
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t " << " ACT 1 : A Knight To Remember \n\n";
			cout << " Setting : " << name << "'s Bedroom. \n\n\n\n";
			cout << "You stare up at the ceiling wondering if you were turning into the kind of doddering old man who can never sleep or wake up when he wants to.\n";
			cout << " Suddenly you hear a shuffling noise from the living room. What do you do? \n";
			cout << "1  Go and investigate. \n2  Go back to sleep. \n";
			cin >> a1c1;
			switch (a1c1)
			{
			case 1:  cout << " You reluctantly leave the comfort of your bed and decide to go investigate. ";
				cout << " In the back of your mind you almost hope its a thief so that you can see the look of fear on his face when he realizes who he messed with.\n";
				break;
			case 2:  cout << "You try to go back to sleep but you can't stop thinking about whatever is making that noise, be it cat or thief. Sighing, you decide to go check it out.\n";
				break;
			default: while (a1c1 != 1 && a1c1 != 2)
			{
				cout << "That doesn't seem like the right thing to do considering there's probably a thief in the house. Why don't you think again? \n";
				cout << "1  Go and investigate. \n2  Go back to sleep. \n";
				cin >> a1c1;
				if (a1c1 == 1)
				{
					cout << " You reluctantly leave the comfort of your bed and decide to go investigate. ";
					cout << " In the back of your mind you almost hope its a thief so that you can see the look of fear on his face when he realizes who he messed with.\n";
				}
				else if (a1c1 == 2)
				{
					cout << "You try to go back to sleep but you can't stop thinking about whatever is making that noise, be it cat or thief. Sighing, you decide to go check it out.\n";
				}
				else
				{
					continue;
				}

			}
					 break;

			}
		}
		{
			int a1c2;                                                                                                        /*ACT 1 Choice 2*/
			cout << "You enter the living room and a strange sight greets your weary eyes.\n\n";
			cout << "A man, dressed in plate mail (possibly the most ill-suited piece of clothing/armour ever made for the purpose of robbery) is rifling through your stuff.";
			cout << " You decide to : \n";
			cout << "1 Stay quiet and watch him. \n2 Ask the man who he was and what he wanted. \n3 Willforge a pair of cuffs and cuff him. \n";
			cin >> a1c2;
			switch (a1c2)
			{
			case 1: cout << " \nThe man continues searching through your stuff muttering to himself. Observation can yield only so much information. You decide to : \n";
				cout << "2 Ask the man who he was and what he wanted. \n3 Willforge a pair of cuffs and cuff him. \n";
				cin >> a1c2;
				if (a1c2 == 2)
				{
					cout << "Ah. The direct approach. How refreshing.\n\n";
					cout << name << ": Who in the name of the Elder Titans are you? \n\n";
					_getch();
				}
				else if (a1c2 == 3)
				{
					cout << "You muster up the required concentration and Will a pair of handcuffs and........................you fail. \n";
					cout << "As you curse old age in an undertone the man finally notices you. You decide to make the most of the moment. \n\n";
					cout << name << ": Who in the name of the Elder Titans are you? \n\n";
					_getch();
				}
				else
				{
					cout << "You certainly aren't very bright. \n\n";
					cout << "2 Ask the man who he was and what he wanted. \n3 Willforge a pair of cuffs and cuff him. \n\n";
					cin >> a1c2;
				}
				while (a1c2 != 2 && a1c2 != 3)
				{
					cout << "You certainly aren't very bright. \n";
					cout << "2 Ask the man who the hell he was and what he wanted. \n3 Willforge a pair of cuffs and cuff him. \n";
					cin >> a1c2;
					if (a1c2 == 2)
					{
						cout << "Ah. The direct approach. How refreshing.\n\n";
						cout << name << ": Who in the name of the Elder Titans are you? \n\n";
						_getch();
					}
					else if (a1c2 == 3)
					{
						cout << "You muster up the required concentration and Will a pair of handcuffs and........................you fail. \n";
						cout << "As you curse old age in an undertone the man finally notices you. You decide to make the most of the moment. \n\n";
						cout << name << ": Who in the name of the Elder Titans are you? \n\n";
						_getch();
					}
					else
					{
						continue;
					}

				}
				break;
			case 2: cout << "Ah. The direct approach. How refreshing. \n\n";
				cout << name << ": Who in the name of the Elder Titans are you? \n\n";
				_getch();
				break;
			case 3: cout << "You muster up the required concentration and Will a pair of handcuffs and........................you fail. \n";
				cout << "As you curse old age in an undertone the man finally notices you. You decide to make the most of the moment. \n\n";
				cout << name << ": Who in the name of the Elder Titans are you? \n\n";
				_getch();
				break;
			default: while (a1c2 != 2 && a1c2 != 3)
			{
				cout << "You certainly aren't very bright.  \n\n";
				cout << "2 Ask the man who the hell he was and what he wanted. \n3 Willforge a pair of cuffs and cuff him. \n";
				cin >> a1c2;
				if (a1c2 == 2)
				{
					cout << "Ah. The direct approach. How refreshing.\n\n";
					cout << name << ": Who in the name of the Elder Titans are you? \n\n";
					_getch();
				}
				else if (a1c2 == 3)
				{
					cout << "You muster up the required concentration and Will a pair of handcuffs and........................you fail. \n";
					cout << "As you curse old age in an undertone the man finally notices you. You decide to make the most of the moment. \n\n";
					cout << name << ": Who in the name of the Elder Titans are you? \n\n";
					_getch();
				}
				else
				{
					continue;
				}
			}
			}
		}
		{                                                                                                               /*ACT 1 Story Progression[Galahad Intro] + Choice 3*/
			int a1c3;
			cout << "Thief in armour : Whoa! Easy there. Didn't know you were at home mate. Damn informant.\n\n";
			cout << name << ": I'll ask you again. Who are you and what do you want from my house? \n\n";
			cout << "Thief : (stands pompously and tosses a torch into the hearth and illuminating the room. He is dressed in green armour, leaf green gauntlets and breastplate striped with black.)\n";
			cout << "\t I am Galahad, the Emerald Knight (he says it in a voice he probably meant to sound regal but came out sounding like he was sick).\n";
			_getch();
			cout << "Galahad : Greetings Willforger. I have heard of your many adventures and I was looking for the gemstone called the ";
			cout << "'Crystal Rose' which I was told that I would find it here by the very same scoundrel who said that the house was abandoned. Am I correct in assuming that the mongrel was wrong again?\n\n";
			cout << name << ": He was partially right. I gave it away a long time ago to a friend of mine who is now in the belly of a dragon. So begone. \n\n";
			cout << "Galahad : (astonished) No! This cannot be! My lady love eludes me yet again. \n\n";
			cout << "1 Brace yourself for the ineveitable romantic story and ask. \n2 Just go back to sleep \n";
			cin >> a1c3;
			switch (a1c3)
			{
			case 1:
				cout << name << ": Alright, tell me your damn story and leave. \n\n";
				break;
			case 2:
				cout << "(You turn to leave and go back to your bed and try to remember that wonderful dream \n";
				cout << "Unsurprisingly you are stopped by the 'Emerald Knight' beginning his story. Oh well, might as well listen. \n\n";
				break;
			default:
				cout << "Time's up! Galahad begins what is sure to be a long and boring tale. Maybe this will help your sleepless nights. \n\n";
			}
			cout << "Galahad : It was a dark and stormy night- \n\n";
			cout << name << ": Get to the point.\n\n";
			cout << "Galahad : Manners mate. Manners will get you places your Will never will. (chuckles at his pun)\n";
			_getch();
			cout << "Okay then. The meat of the matter so to speak is that my lady love needs a token of everlasting love. Y'know how it works right? ";
			cout << "Now methinks that there is no woman who doesn't like flowers but the problem is that they y'know, die.";
			cout << " And then methinks that a rose of jewels would surely win her heart but it is beyond the skill of most to make.";
			cout << " And thus I embarked on my quest which now ends here  in failure after many trials and tribulations which men the likes of you don't have time to listen to. (voice dripping with sarcasm)\n\n";
			cout << name << ": Like I said, it is now part of a dragon's hoard. Really sorry but there's nothing I can do.\n\n\n";
			_getch();
			cout << "(You try to inject your voice with a tone of finality but your voice betrays you. Galahad doesn't miss the hint and realizes what you actually want deep inside.)\n\n";
			cout << "Galahad : (eyes widen with hope and excitement) Tis Fate to guide me to a wizard who wishes to embark on a quest with the knight who wishes to woo his love. \n\n\n";
			cout << "\t\t\t\t\t\t\t\t\t\t TO KILL A DRAGON WE GO!\n\n\n\n";
			cout << "You cannot bring yourself to say no as you see the look in the knight's eyes. Perhaps you don't want to. With an almost imperceptible spring in your step you follow Galahad who begins to plan the 'QUEST'........ \n\n\n\n\n\n";
			_getch();
		}
	}
	{
		{                                                                                                                          /*ACT 2*/
			void act_2_hardline_inn();
			void act_2_hardline_kingkiller();
			void act_2_peace_inn();
			void act_2_peace_overthrower();
			void act_2_neutral();
			std::cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << " ACT 2 Part 1 : Roads Untravelled \n\n";
			std::cout << "Setting : Outskirts Of The Town of Trebol \n\n\n\n";
			{
				using namespace std;                                                                                               /*ACT 2 Choice 1 + 2*/
				int a2c1, a2c2;
				cout << "(You are now on the outskirts of the town of Trebol, having come farther west than you ever have.";
				cout << " The land here experiences no harsh weather and the land is unaffected by the blasts of winter.)\n";
				cout << "You and Galahad are riding through the pleasant lands swapping tales (Galahad mostly) ......\n\n\n";
				cout << "Galahad : .....so there I was, hungry giant on one side and a damsel waiting by the door to be carried out in true knightly fashion. And what did I do? (He looks at you expectantly) \n\n";
				cout << "(With a herculean effort, you manage not to roll your eyes. You decide to : )\n";
				cout << "1  Willforge something to awe him into shutting up \n2  Go on listening.";
				cin >> a2c1;
				switch (a2c1)
				{
				case 1: cout << "You Will a sword into existence. It is wickedly sharp and quite a good reflection of your current mood.";
					cout << " Thankfully Galahad gets the message and shuts up. You move on in 'companionable' silence, the sword a sharp testament to your skill.\n\n\n";
					break;
				case 2: cout << "Galahad : But of course, I fought the giant. Twas a long and bloody battle. We fought for a day and a night until at last I slew him with a blow to the head.";
					cout << "Faithful Arbiter here has never failed me.  (pats his sword fondly).\n\n";
					cout << "Both of you continue riding in silence for a while after that with Galahad humming an annoying tune. \n\n";
					break;
				default:cout << "Taking advantage of your momentary indecision, Galahad continues his story. \n\n";
					cout << "Galahad : But of course, I fought the giant. 'Twas a long and bloody battle. We fought for a day and a night until at last I slew him with a blow to the head.";
					cout << "Faithful Arbiter here has never failed me.  (pats his sword fondly).\n\n";
					cout << "Both of you continue riding in silence for a while after that with Galahad humming an annoying tune.\n\n\n";
					break;
				}
				_getch();
				cout << "( A voice suddenly calls out) HALT!! \n\n";
				cout << "You and Galahad stop in surprise. You see a man dressed in armour and leader of about a dozen men who were pointing their spears at you. They seemed scared. And rightly so. \n";
				cout << name << ": Who might you gentlemen be to accost us on the West Road? \n\n";
				cout << "Chief : I am chief of these men here and we report to Lord-of-all-he-surveys King Foltest. Under his rule all those who trespass his lands without permission shall have to pay a heavy tax.\n";
				cout << "(He managed to say all this with quite a bit of confidence considering that a knight dressed in green armour and a mage wielding the staff of the Willforger were not your usual travellers.) \n\n";
				cout << "Galahad looks outraged. The tax which is atleast three times of what would be reasonable. They shouldn't even be asking anything. It was a free road. You decide to :\n\n";
				cout << "1  Send a message to this king by slaughtering the men and sparing the chief. \n2  Pay the tax. \n3  Talk your way out of it.\n";
				cin >> a2c2;
				switch (a2c2)
				{
				case 1: cout << "You look at Galahad. He nods in agreement. Together you fall upon them making quickly dispatching them to the Other World. Galahad with his sword 'Arbiter' and you with a crossbow.";
					cout << " Soon they're all dead except for the ones who turned tail as soon as you struck. Foremost among them was their chief. This might make your journey a bit more difficult. \n\n\n\n";
					_getch();
					act_2_hardline_inn();
					break;
				case 2: cout << "You silently hand over the money. The chief's smug face almost changes your mind as you walk on. Galahad looks a bit disappointed. Better a knight's disappointment than a bounty on your heads. \n\n\n\n";
					_getch();
					act_2_peace_inn();
					break;
				case 3: cout << name << ": Come now soldier this is a free road. You seriously don't expect us to pay your tax. \n";
					cout << "The chief's stony expression makes you realize that this was an exercise in futility. \n";
					cout << " You decide to : \n";
					cout << "1  Send a message to this king by slaughtering the men and sparing the chief. \n2  Pay the tax.";
					cin >> a2c2;
					while (a2c2 != 1 && a2c2 != 2)
					{
						cout << "You certainly aren't very bright. Why dont't you think again? \n";
						cout << "1  Send a message to this king by slaughtering the men and sparing the chief. \n2  Pay the tax.";
						cin >> a2c2;
					}
					switch (a2c2)
					{
					case 1: cout << "You look at Galahad. He nods in agreement. Together you fall upon them making quickly dispatching them to the Other World. Galahad with his sword 'Arbiter' and you Willing a crossbow and bolts.";
						cout << " Soon they're all dead except for the ones who turned tail as soon as you struck. Foremost among them was their chief. This might make your journey a bit more difficult. \n\n\n\n";
						_getch();
						act_2_hardline_inn();
						break;
					case 2: cout << "You silently hand over the money. The chief's smug face almost changes your mind as you walk on. Galahad looks a bit disappointed. Better a knight's disappointment than a bounty on your heads. \n\n\n\n";
						_getch();
						act_2_peace_inn();
						break;
					}
				default:while (a2c2 != 1 && a2c2 != 2)
				{
					cout << "You certainly aren't very bright. Why dont't you think again? \n";
					cout << "1  Send a message to this king by slaughtering the men and sparing the chief. \n2  Pay the tax.";
					cin >> a2c2;
				}
						switch (a2c2)
						{
						case 1: cout << "You look at Galahad. He nods in agreement.Together you fall upon them making quickly dispatching them to the Other World. Galahad with his sword 'Arbiter' and you Willing a crossbow and bolts.";
							cout << " Soon they're all dead except for the ones who turned tail as soon as you struck. Foremost among them was their chief. \n\n";
							_getch();
							act_2_hardline_inn();
							break;
						case 2: cout << "You silently hand over the money. The chief's smug face almost changes your mind as you walk on. Galahad looks a bit disappointed. \n\n";
							_getch();
							act_2_peace_inn();
							break;
						}
				}


			}
		}
		_getch();
		return 0;
	}
}


