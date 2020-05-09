# Milestone 7
## Get the robot to complete the final run in under 15 s

Milestone 7 was also accomplished on May 7th!!! <br/>
When the proportional gain was set to 0.6, the robot's motion choppy; when set to 0.1, the robot had a very difficult time following the lines and went in circles. When the derivative gain was set to 2 (from an initial value of 3), the robot missed many turns. By experimenting with changing the derivative gain and proportional gain, I found that the derivative gain was set to an ideal value and that the proportional gain could be set to 0.13 (changed from the inital value of 0.2) to slightly increase the speed. In the run in the video, the robot just completed the maze in 14s. Code for this is included in milestone_7_code. <br/>
https://drive.google.com/drive/u/0/folders/1zUX5wUuhZ78YEob2pX2QqQwuZUTz3peT <br/>

The main change that resulted in a much improved speed was to change the base_speed to a higher value. Retaining the initial derivative and proportional gain values, it was found that the optimal base_speed was 350 (initially was at 200). This resulted in a net time of 10 s! Code for this is included in milestone_7_code_2. <br/>
https://drive.google.com/drive/u/0/folders/1ru9ygfNkGXGRtAfomY6Yt21gMGVTnYTE <br/>

Further trials (mostly rough work) were included in milestone_7_code_3 but there were no outcomes more successful than milestone_7_code_2. <br/>
