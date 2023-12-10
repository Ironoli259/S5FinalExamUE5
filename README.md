# S5FinalExamUE5
By Olivier Grenier

Issue 1:
  In the BC_ExamCharacter, I added the ActorBeginOverlap event leading to the Interact function of the package. Since the cube has implements the interface, it executes the Interact function.

Issue 2:
  In the BC_ExamGameMode, I edited the existing _ValidateGameCodeCorrectness function to return if the code is correct. I added a for Each loop to validate if the code entered is the same as the correct code. It will return true if it completes the loop and return false if it detects a difference.

Issue 3:
  Added setters and getters in the C++ subsystem files to created variables for the time and the two bools. Edited the Event Graph for the BC_ExamGameState so that when it's loaded, it will display the text on the hud based off what is stored in the subsystem.

Issue 4:
Added the event for when the user clicks on E in the BC_ExamCharacter blueprint.
Completed the method for 'Request Deliver Package' in BC_ExamGameMode.
