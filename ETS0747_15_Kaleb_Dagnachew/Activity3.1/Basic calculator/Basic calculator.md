
Start:

Display "Start" shape
Initialize Variables:

Display "Process" shape with "Initialize variables (e.g., repoName, userName)" inside
Input Repository Name:

Display "Input/Output" shape with "Input repository name" inside
Connect to "Initialize Variables" with an arrow
Input User Name:

Display "Input/Output" shape with "Input user name" inside
Connect to "Input Repository Name" with an arrow
Check Repository Existence:

Display "Decision" shape with "Does the repository exist?" inside
If Yes, connect to "Input User Name" with a labeled arrow (e.g., "Yes")
If No, connect to "End" with a labeled arrow (e.g., "No")
GitHub API Call:

Display "Process" shape with "Call GitHub API to check repository existence" inside
Connect to "Check Repository Existence" with labeled arrows (e.g., "Repository exists", "Repository does not exist")
Display Result:

Display "Input/Output" shape with "Display result" inside
Connect to "GitHub API Call" with an arrow
End:

Display "End" shape
