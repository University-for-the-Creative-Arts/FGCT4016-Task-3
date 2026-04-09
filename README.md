# FGCT4016 Task 3 'Input and Player Control'

## 1. Introduction

The task outlined was to create an Unreal Engine 5 project using C++ that uses at least one input action, either movement controls or camera controls, that use Enhanced Input in C++, with at least one parameter being exposed to blueprints for testing. This is useful to create movement systems for player characters, and allows for game designers to tweak values such as speed in blueprints while the programmers handle the actual logic of the movement system within the C++ scripts.

## 2. Implementation

The project began with creating a C++ class that derives from ACharacter. Within ACharacter, code was written that sets up a Player Input Component to bind input actions to functions by triggering code with said input actions, which use enhanced input. In `BeginPlay`, it sets up the input mapping context when the game begins by casting to the player controller. In `Move`, it sets up movement by having two directions, forward (which is the direction the player camera is facing), and right (along the X axis). This allows for all 4 directions to be used since backwards and left are simply forward and right but in negative magnitudes. The variable `Movementspeed`, which is 600f by default, it exposed to blueprints to change the character's movement speed

![Alt text](./gitimages/a.png "MyCharacter.h")

[ Figure 1. MyCharacter.h  .]


![Alt text](./gitimages/acpp.png "MyCharacter.cpp")

[ Figure 2. MyCharacter.cpp  .]

Then, an input mapping context was made, along with an input action, a gamemode, a blueprint that inherits from `MyCharacter.cpp`

The gamemode was set to have the blueprint version of `MyCharacter.cpp`, which had `IA_Move` and `IMC_Default` attached to it. `IMC_Default` uses `IA_Move` , and has controls for WASD. A and D simply use a negate and a scalar modifier, and W and S use a swizzle input action values and scalar modifier.

In `IA_Move` the value type of the action is set to `Axis2D` to ensure swizzle input action values works as intended.

![Alt text](./gitimages/gm.png "The Gamemode")

[ Figure 3. The Gamemode  .]

![Alt text](./gitimages/imc.png "IMC_Default")

[ Figure 4. IMC_Default  .]

![Alt text](./gitimages/ia.png "IA_Move")

[ Figure 5. IA_Move  .]


## 3. Outcome

The project now allows a player character to spawn, and use the keyboard keys WASD to move up, down, left and right, and their diagonals. `MovementSpeed` is exposed to the editor to allow quick changes in magnitude of the variable without going into the C++ scripts, allowing ease of use by game designers.

### 3.1 Video Demonstration

https://youtu.be/8TEkz5vrdDM

## 4. Bibliography

Bug with Swizzle Input Axis Values: r/unrealengine (2023) At: https://www.reddit.com/r/unrealengine/comments/119erc7/bug_with_swizzle_input_axis_values/ (Accessed  09/04/2026).


## 5. AI Use Declaration

No AI was used in the creation of files, nor in general assistance with creating the files