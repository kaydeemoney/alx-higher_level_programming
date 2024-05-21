JavaScript Web Scraping Projects
Introduction
This repository contains a collection of JavaScript scripts for web scraping tasks. These scripts utilize Node.js and various npm modules to read, write, and interact with web content. Below are detailed instructions on how to set up the environment and run each script.

Setup Instructions
Install Node.js
First, ensure you have Node.js installed. For this project, Node.js version 14 is recommended. Use the following commands to install Node.js:

bash
Copy code
$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
$ sudo apt-get install -y nodejs
Install Semi-Standard
Next, install the semistandard package globally for code linting:

bash
Copy code
$ sudo npm install semistandard --global
Install the Request Module
The request module is used for making HTTP requests. Although it has been deprecated since February 2020, it is still useful for practice and is widely used in the industry. Install it globally with the following commands:

bash
Copy code
$ sudo npm install request --global
$ export NODE_PATH=/usr/lib/node_modules
Project Tasks
Task 0: Readme
Create a script that reads and prints the content of a file.

Usage:

The first argument is the file path.
The content of the file must be read in utf-8.
If an error occurs during reading, print the error object.
Example:

bash
Copy code
$ ./0-readme.js cisfun
C is super fun!

$ ./0-readme.js doesntexist
{ Error: ENOENT: no such file or directory, open 'doesntexist'
    at Error (native)
  errno: -2,
  code: 'ENOENT',
  syscall: 'open',
  path: 'doesntexist' }
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 0-readme.js
Task 1: Write me
Create a script that writes a string to a file.

Usage:

The first argument is the file path.
The second argument is the string to write.
The content of the file must be written in utf-8.
If an error occurs during writing, print the error object.
Example:

bash
Copy code
$ ./1-writeme.js my_file.txt "Python is cool"
$ cat my_file.txt
Python is cool
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 1-writeme.js
Task 2: Status code
Create a script that displays the status code of a GET request.

Usage:

The first argument is the URL to request (GET).
The status code must be printed like this: code: <status code>.
Use the request module.
Example:

bash
Copy code
$ ./2-statuscode.js https://alx-intranet.hbtn.io/status
code: 200

$ ./2-statuscode.js https://alx-intranet.hbtn.io/doesnt_exist
code: 404
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 2-statuscode.js
Task 3: Star Wars movie title
Create a script that prints the title of a Star Wars movie where the episode number matches a given integer.

Usage:

The first argument is the movie ID.
Use the Star Wars API with the endpoint https://swapi-api.alx-tools.com/api/films/:id.
Use the request module.
Example:

bash
Copy code
$ ./3-starwars_title.js 1
A New Hope

$ ./3-starwars_title.js 5
Attack of the Clones
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 3-starwars_title.js
Task 4: Star Wars Wedge Antilles
Create a script that prints the number of movies where the character “Wedge Antilles” is present.

Usage:

The first argument is the API URL of the Star Wars API: https://swapi-api.alx-tools.com/api/films/.
Wedge Antilles is character ID 18. Use this ID for filtering the result of the API.
Use the request module.
Example:

bash
Copy code
$ ./4-starwars_count.js https://swapi-api.alx-tools.com/api/films
3
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 4-starwars_count.js
Task 5: Loripsum
Create a script that gets the contents of a webpage and stores it in a file.

Usage:

The first argument is the URL to request.
The second argument is the file path to store the body response.
The file must be UTF-8 encoded.
Use the request module.
Example:

bash
Copy code
$ ./5-request_store.js http://loripsum.net/api loripsum
$ cat loripsum
<p>Lorem ipsum dolor sit amet...</p>
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 5-request_store.js
Task 6: How many completed?
Create a script that computes the number of tasks completed by user id.

Usage:

The first argument is the API URL: https://jsonplaceholder.typicode.com/todos.
Only print users with completed tasks.
Use the request module.
Example:

bash
Copy code
$ ./6-completed_tasks.js https://jsonplaceholder.typicode.com/todos
{ '1': 11, '2': 8, '3': 7, '4': 6, '5': 12, '6': 6, '7': 9, '8': 11, '9': 8, '10': 12 }
Repository:

GitHub: alx-higher_level_programming
Directory: 0x14-javascript-web_scraping
File: 6-completed_tasks.js
will update later