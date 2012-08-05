ABOUT
=====
This is a library on how to use Digit Displays with the Arduino.

How to install
==============

1.Download
----------
PLEASE DON'T DOWNLOAD FROM THE "DOWNLOAD AS ZIP" BUTTON!!
You may only download the newest version from [here](https://github.com/morymac/ArduinoDigitDisplay/downloads) because the files are not organized correctly in the git.

2.Install
---------
1. Find the libraries folder (on Mac it's /user/USERNAME/Documents/Arduino/libraries by default. If there's no library folder, please create one
2. Drag both of the folders ("Digit Display" + "TimedAction") into the libraries folder.
3. You're ready to go!

How to use
==========

1.Initiation
------------
First, you'll have to set a constructor like this:

	DigitDisplay NameofDigitDisplay;
	
The library automatically sets all the required things.

2.Use
-----
Now you can use the Display by setting the segments like this:

	NameofDigitDisplay.setsegment(int digit, int segment);

So, here's an example:

	DigitDisplay.setsegment(1,7);

If you want to set alls segments down, you can use this command

	NameofDigitDisplay.clear();

This is how the segments are used in the library:

    	1
    
	6       2
    
    	7	
    
	5       3
	
		4      8  
    
At the moment it is not possible to set two different segments on two different digits. In this case both of the segments on both of the digits will light up.
There's only a workaround for this:
	
	sketch.ino
	
	void loop(){
	while(1>0){
	DigitDisplay.setsegment(1,1);
	delay(1);
	DigitDisplay.clear();
	DigitDisplay.setsegment(2,2);
	delay(1);
	DigitDisplay.clear();
	}
	
	}

This workaround will be implemented in the next versions.

Credits
=======

The library is written by me, morymac.
The TimedAction Library was written by Alexander Brevig, please see (http://arduino.cc/playground/Code/TimedAction)


