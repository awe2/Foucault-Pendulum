# Foucault-Pendulum-

<h1>Intro</h1>
More media available at: https://drive.google.com/open?id=1tm24UyMb-WVm3YtbVdKZDHaWIWqILqD4 . Circuit Diagram also there.

Files and media pertaining to the Foucault Pendulum currently on display in Loomis Laboratory. This repository is meant for future student custodians to learn about the project, and for me to show off to recruiters.

co-authored by Marco Palella, marco.palella@comcast.net

<h1>What is the Foucault Pendulum?</h1>
The Foucault Pendulum is a favorite of Muesuems and Universities all around the world. The experiment, first designed and conducted by Leon Foucault, was demonstrated in the Pantheon of Paris. The Experiment is demonstrates the effects of Earth's rotation, and when conducted across multiple latitudes reveals the spherical geometry of the earth. 

All that is done is hang a large pendulum bulb from a tall ceiling and let the pendulum go with as little tangential velocity as possible, which is often completed by burning a string between the bulb and a bannister. The pendulum will then move back and forth; however, if one marks the swaying of the bulb over time it is revealed that the bulb precesses around a circle throughout the course of a day.

The explanation for this phenomena is given as the effects of the Earth being a non-inertial referece frame. Here, my explanation diverges into two. I'll begin with a (I feel) unsatisfying explanation and then transistion to a more entertaining one. The easiest explanation comes from the fact that non inertial reference frames give rise to ficticious forces, and pertinent to our discussion here is the coriolis effect. A rotating object expierences a force in its own reference frame that is tangential to the objects velocity and the axis of rotation of the frame. So, the pendulum is constantly nudged by this ficticious force into precessing around a circle.

A more engaging definition is when one zooms into and out of this inertial frame. When considered from a true inertial frame, the pendulum bulb is imparted with some initial energy and continues to sway back and forth along that same initial trajectory, forever. However, the ground that we stand on and the building built on top of it are continiously rotating about the pendulum through Earth's rotation. So, it is not the pendulum that is rotating about its day, rather, its the viewer and the building who rotate about the pendulum itself!

To explain how this experiment proves that the earth is roughly spherical, one must perform the experiment along a few different latitudes. It turns out that the arc that the pendulum precesses each day can be predicted for each latitude by considering the parallel transport of vectors across spherical manifolds. If one holds a vector still in space and rotates the sphere underneath the pendulum while tracing out the pendulums path across a geodesic, one discovers a phase difference of that vector relative to the building upon return. It is this phase that is precisely the phase that the pendulum picks up across one day. The pendulum picks up a phase of 2 pi at the poles, and none at all at the Equator. 

<h1>What did I do?</h1>

My Work on the Pendulum at Loomis Laboratory was to install a device that could pump energy lost to drag back into the system. I accomplished this by designing my own solution with a centered electromagnet controlled by an Arduino and sensed by a hall effect sensor mounted on top of the electromagnet. A small magnet is placed onto the bottom of the pendulum bulb so when the pendulum passes by the center of the electro magnet a small radial outward pulse is delivered to the bulb. 

A diagram of my power and control circuitry is available at the above listed google drive. A voltage divider powers the arduino off the same supply that the electromagnet uses. An Arduino digital output is wired to the gate of an n-channel mossfet transistor to control the current flow through the electromagnet. Another digital pin is connected to the Hall effect sensor and constantly waits for the line to move hi so that the electromagnet can be turned on.

Wooden clothespins are placed at the perimeter of a wooden base for entertainment of the visitor. As the pendulum precesses, the wodden pins are knocked down, demonstrating the gradual precession over time. 
